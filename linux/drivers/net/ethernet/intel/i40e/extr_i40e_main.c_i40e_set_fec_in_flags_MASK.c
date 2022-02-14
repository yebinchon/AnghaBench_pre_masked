
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(u8 VAR_7, u32 *VAR_8)
{
 if (VAR_7 & VAR_2)
  *VAR_8 |= VAR_6 | VAR_5;
 if ((VAR_7 & VAR_4) ||
     (VAR_7 & VAR_1)) {
  *VAR_8 |= VAR_6;
  *VAR_8 &= ~VAR_5;
 }
 if ((VAR_7 & VAR_3) ||
     (VAR_7 & VAR_0)) {
  *VAR_8 |= VAR_5;
  *VAR_8 &= ~VAR_6;
 }
 if (VAR_7 == 0)
  *VAR_8 &= ~(VAR_6 | VAR_5);
}
