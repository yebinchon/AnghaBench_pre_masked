
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;



bool FUNC_0(char *VAR_0, u8 *VAR_1)
{
 u16 VAR_2 = 0;
 *VAR_1 = 0;

 while (VAR_0[VAR_2] != '\0') {
  if (VAR_0[VAR_2] >= '0' && VAR_0[VAR_2] <= '9') {
   *VAR_1 *= 10;
   *VAR_1 += (VAR_0[VAR_2] - '0');
  } else
   return 0;

  ++VAR_2;
 }

 return 1;
}
