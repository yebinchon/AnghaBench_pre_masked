
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_hal {int rf_path_num; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_hal hal; } ;
struct rtw_chip_info {int* rf_sipi_addr; } ;
typedef int old_data ;
typedef enum rtw_rf_path { ____Placeholder_rtw_rf_path } rtw_rf_path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,char*,...) ;
 int FUNC_2 (struct rtw_dev*,int,int,int) ;
 int FUNC_3 (struct rtw_dev*,int,int) ;
 int FUNC_4 (int) ;

bool FUNC_5(struct rtw_dev *VAR_2, enum rtw_rf_path VAR_3,
          u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct rtw_hal *VAR_7 = &VAR_2->hal;
 struct rtw_chip_info *VAR_8 = VAR_2->chip;
 u32 *VAR_9 = VAR_8->rf_sipi_addr;
 u32 VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12;

 if (VAR_3 >= VAR_7->rf_path_num) {
  FUNC_1(VAR_2, "unsupported rf path (%d)\n", VAR_3);
  return 0;
 }

 VAR_4 &= 0xff;
 VAR_5 &= VAR_1;

 if (VAR_5 != VAR_1) {
  VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_1);

  if (VAR_11 == VAR_0) {
   FUNC_1(VAR_2, "Write fail, rf is disabled\n");
   return 0;
  }

  VAR_12 = FUNC_0(VAR_5);
  VAR_6 = ((VAR_11) & (~VAR_5)) | (VAR_6 << VAR_12);
 }

 VAR_10 = ((VAR_4 << 20) | (VAR_6 & 0x000fffff)) & 0x0fffffff;

 FUNC_3(VAR_2, VAR_9[VAR_3], VAR_10);

 FUNC_4(13);

 return 1;
}
