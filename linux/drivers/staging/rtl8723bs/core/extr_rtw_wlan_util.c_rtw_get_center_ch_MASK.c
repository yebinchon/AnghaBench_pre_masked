
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

u8 FUNC_0(u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 u8 VAR_6 = VAR_3;

 if (VAR_4 == VAR_1) {
  if ((VAR_3 == 36) || (VAR_3 == 40) || (VAR_3 == 44) || (VAR_3 == 48))
   VAR_6 = 42;
  if ((VAR_3 == 52) || (VAR_3 == 56) || (VAR_3 == 60) || (VAR_3 == 64))
   VAR_6 = 58;
  if ((VAR_3 == 100) || (VAR_3 == 104) || (VAR_3 == 108) || (VAR_3 == 112))
   VAR_6 = 106;
  if ((VAR_3 == 116) || (VAR_3 == 120) || (VAR_3 == 124) || (VAR_3 == 128))
   VAR_6 = 122;
  if ((VAR_3 == 132) || (VAR_3 == 136) || (VAR_3 == 140) || (VAR_3 == 144))
   VAR_6 = 138;
  if ((VAR_3 == 149) || (VAR_3 == 153) || (VAR_3 == 157) || (VAR_3 == 161))
   VAR_6 = 155;
  else if (VAR_3 <= 14)
   VAR_6 = 7;
 } else if (VAR_4 == VAR_0) {
  if (VAR_5 == VAR_2)
   VAR_6 = VAR_3 + 2;
  else
   VAR_6 = VAR_3 - 2;
 }

 return VAR_6;
}
