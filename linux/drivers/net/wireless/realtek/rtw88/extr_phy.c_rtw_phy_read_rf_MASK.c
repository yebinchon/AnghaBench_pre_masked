
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
 int FUNC_0 (struct rtw_dev*,char*,int) ;
 int FUNC_1 (struct rtw_dev*,int,int) ;

u32 FUNC_2(struct rtw_dev *VAR_2, enum rtw_rf_path VAR_3,
      u32 VAR_4, u32 VAR_5)
{
 struct rtw_hal *VAR_6 = &VAR_2->hal;
 struct rtw_chip_info *VAR_7 = VAR_2->chip;
 const u32 *VAR_8 = VAR_7->rf_base_addr;
 u32 VAR_9, VAR_10;

 if (VAR_3 >= VAR_6->rf_path_num) {
  FUNC_0(VAR_2, "unsupported rf path (%d)\n", VAR_3);
  return VAR_0;
 }

 VAR_4 &= 0xff;
 VAR_10 = VAR_8[VAR_3] + (VAR_4 << 2);
 VAR_5 &= VAR_1;

 VAR_9 = FUNC_1(VAR_2, VAR_10, VAR_5);

 return VAR_9;
}
