
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;



bool FUNC_0(u8 *VAR_0, u8 VAR_1)
{
 u8 VAR_2 = 0, VAR_3 = 0;

 while (VAR_1 > VAR_2) {
  if (VAR_0[VAR_2] == ' ' || VAR_0[VAR_2] == '\t' || VAR_0[VAR_2] == '\0')
   ++VAR_3;

  ++VAR_2;
 }

 return VAR_1 == VAR_3;
}
