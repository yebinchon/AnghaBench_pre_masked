
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;

void FUNC_1(unsigned short VAR_6, u8 VAR_7)
{
 if (VAR_6 == 0x718) {
  VAR_5 = VAR_0;
 } else if (VAR_6 == 0x750) {
  VAR_5 = VAR_1;

  if (VAR_7 == VAR_3) {
   VAR_5 = VAR_2;
   FUNC_0("found sm750le\n");
  }
 } else {
  VAR_5 = VAR_4;
 }
}
