
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct rtsx_chip*,int ,int,int) ;

int FUNC_2(struct rtsx_chip *VAR_13, int VAR_14)
{
 int VAR_15;
 u8 VAR_16, VAR_17;

 if (FUNC_0(VAR_13, 0x5208)) {
  VAR_16 = VAR_6;
  if (VAR_14 == VAR_9)
   VAR_17 = VAR_1;
  else if (VAR_14 == VAR_8)
   VAR_17 = VAR_0;
  else if (VAR_14 == VAR_12)
   VAR_17 = VAR_2;
  else
   return VAR_10;

 } else if (FUNC_0(VAR_13, 0x5288)) {
  VAR_16 = 0x03;
  if (VAR_14 == VAR_9)
   VAR_17 = VAR_4;
  else if (VAR_14 == VAR_8)
   VAR_17 = VAR_3;
  else if (VAR_14 == VAR_12)
   VAR_17 = VAR_5;
  else
   return VAR_10;

 } else {
  return VAR_10;
 }

 VAR_15 = FUNC_1(VAR_13, VAR_7, VAR_16, VAR_17);
 if (VAR_15)
  return VAR_15;

 return VAR_11;
}
