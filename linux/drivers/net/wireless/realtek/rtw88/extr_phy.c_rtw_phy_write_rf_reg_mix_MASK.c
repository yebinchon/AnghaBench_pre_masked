
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;
typedef enum rtw_rf_path { ____Placeholder_rtw_rf_path } rtw_rf_path ;


 int FUNC_0 (struct rtw_dev*,int,int,int,int) ;
 int FUNC_1 (struct rtw_dev*,int,int,int,int) ;

bool FUNC_2(struct rtw_dev *VAR_0, enum rtw_rf_path VAR_1,
         u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 if (VAR_2 != 0x00)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
