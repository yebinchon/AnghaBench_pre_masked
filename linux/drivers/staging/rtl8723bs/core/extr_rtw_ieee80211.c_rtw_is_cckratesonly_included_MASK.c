
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



bool FUNC_0(u8 *VAR_0)
{
 while (*VAR_0) {
  u8 VAR_1 = *VAR_0 & 0x7f;

  if (VAR_1 != 2 && VAR_1 != 4 && VAR_1 != 11 && VAR_1 != 22)
   return 0;
  VAR_0++;
 }

 return 1;
}
