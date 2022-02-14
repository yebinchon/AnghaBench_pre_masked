
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(u8 *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
  if (VAR_5[VAR_0 + VAR_6] != 0xFF)
   return 0;
 }

 if ((VAR_5[VAR_1] & (VAR_3 | VAR_4))
  != (VAR_3 | VAR_4))
  return 0;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (VAR_5[VAR_2 + VAR_6] != 0xFF)
   return 0;
 }

 return 1;
}
