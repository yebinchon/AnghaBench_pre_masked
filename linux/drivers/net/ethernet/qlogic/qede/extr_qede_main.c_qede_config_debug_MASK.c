
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(uint VAR_6, u32 *VAR_7, u8 *VAR_8)
{
 *VAR_8 = VAR_1;
 *VAR_7 = 0;

 if (VAR_6 & VAR_5) {
  *VAR_8 = VAR_2;
  *VAR_7 = (VAR_6 & 0x3FFFFFFF);
 } else if (VAR_6 & VAR_3) {
  *VAR_8 = VAR_0;
 } else if (VAR_6 & VAR_4) {
  *VAR_8 = VAR_1;
 }
}
