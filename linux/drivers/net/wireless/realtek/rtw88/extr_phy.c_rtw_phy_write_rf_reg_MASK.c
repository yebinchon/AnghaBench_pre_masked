
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_hal {int rf_path_num; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_hal hal; } ;
struct rtw_chip_info {int* rf_base_addr; } ;
typedef enum rtw_rf_path { ____Placeholder_rtw_rf_path } rtw_rf_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtw_dev*,char*,int) ;
 int FUNC_1 (struct rtw_dev*,int,int,int) ;
 int FUNC_2 (int) ;

bool FUNC_3(struct rtw_dev *VAR_7, enum rtw_rf_path VAR_8,
     u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 struct rtw_hal *VAR_12 = &VAR_7->hal;
 struct rtw_chip_info *VAR_13 = VAR_7->chip;
 const u32 *VAR_14 = VAR_13->rf_base_addr;
 u32 VAR_15;

 if (VAR_8 >= VAR_12->rf_path_num) {
  FUNC_0(VAR_7, "unsupported rf path (%d)\n", VAR_8);
  return 0;
 }

 VAR_9 &= 0xff;
 VAR_15 = VAR_14[VAR_8] + (VAR_9 << 2);
 VAR_10 &= VAR_5;

 if (VAR_9 == VAR_6) {
  FUNC_1(VAR_7, VAR_3, VAR_0, VAR_1);
  FUNC_1(VAR_7, VAR_4, VAR_0, VAR_1);
 }

 FUNC_1(VAR_7, VAR_15, VAR_10, VAR_11);

 FUNC_2(1);

 if (VAR_9 == VAR_6) {
  FUNC_1(VAR_7, VAR_3, VAR_0, VAR_2);
  FUNC_1(VAR_7, VAR_4, VAR_0, VAR_2);
 }

 return 1;
}
