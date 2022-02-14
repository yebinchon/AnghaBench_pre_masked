
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {scalar_t__ rssi_tolerance; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static u8 FUNC_0(struct rtw_dev *VAR_4, u8 VAR_5,
       u8 VAR_6, u8 VAR_7)
{
 struct rtw_chip_info *VAR_8 = VAR_4->chip;
 u8 VAR_9 = VAR_8->rssi_tolerance;
 u8 VAR_10;

 if (VAR_5 == VAR_1 ||
     VAR_5 == VAR_3) {
  if (VAR_6 >= (VAR_7 + VAR_9))
   VAR_10 = VAR_0;
  else
   VAR_10 = VAR_3;
 } else {
  if (VAR_6 < VAR_7)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_2;
 }

 return VAR_10;
}
