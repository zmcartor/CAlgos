#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char* reverse(char str[]) {
    char* left  = str;
    char* right = left + strlen(str) - 1;
    char  tmp;

    while (left < right) {
      // *pointer++ increments the pointer and returns previous position. so
      // yeah, that's C

        tmp      = *left;
        *left++  = *right;
        *right-- = tmp;
    }
    return str;
}

int main(int argc, char **argv) {

  char one[] = "zach";

  char *outone = reverse(one);

  printf("output one: %s \n", outone);
}
