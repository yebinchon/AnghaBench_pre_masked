
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnum {int mask; int value; } ;


 size_t FUNC_0 (size_t,size_t) ;

int FUNC_1(char *VAR_0, size_t VAR_1, struct tnum VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 64; VAR_3; VAR_3--) {
  if (VAR_3 < VAR_1) {
   if (VAR_2.mask & 1)
    VAR_0[VAR_3 - 1] = 'x';
   else if (VAR_2.value & 1)
    VAR_0[VAR_3 - 1] = '1';
   else
    VAR_0[VAR_3 - 1] = '0';
  }
  VAR_2.mask >>= 1;
  VAR_2.value >>= 1;
 }
 VAR_0[FUNC_0(VAR_1 - 1, (size_t)64)] = 0;
 return 64;
}
