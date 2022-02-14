
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_efuse {int rf_board_option; int regd; int * txpwr_idx_table; int bt_setting; int * country_code; int channel_plan; int crystal_cap; int rfe_option; } ;
struct rtw_dev {struct rtw_efuse efuse; } ;
struct rtw8822c_efuse {int rf_board_option; int * txpwr_idx_table; int rf_bt_setting; int * country_code; int channel_plan; int xtal_k; int rfe_option; } ;


 int VAR_0 ;

 int FUNC_0 (struct rtw_efuse*,struct rtw8822c_efuse*) ;
 int FUNC_1 (struct rtw_dev*) ;

__attribute__((used)) static int FUNC_2(struct rtw_dev *VAR_1, u8 *VAR_2)
{
 struct rtw_efuse *VAR_3 = &VAR_1->efuse;
 struct rtw8822c_efuse *VAR_4;
 int VAR_5;

 VAR_4 = (struct rtw8822c_efuse *)VAR_2;

 VAR_3->rfe_option = VAR_4->rfe_option;
 VAR_3->rf_board_option = VAR_4->rf_board_option;
 VAR_3->crystal_cap = VAR_4->xtal_k;
 VAR_3->channel_plan = VAR_4->channel_plan;
 VAR_3->country_code[0] = VAR_4->country_code[0];
 VAR_3->country_code[1] = VAR_4->country_code[1];
 VAR_3->bt_setting = VAR_4->rf_bt_setting;
 VAR_3->regd = VAR_4->rf_board_option & 0x7;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  VAR_3->txpwr_idx_table[VAR_5] = VAR_4->txpwr_idx_table[VAR_5];

 switch (FUNC_1(VAR_1)) {
 case 128:
  FUNC_0(VAR_3, VAR_4);
  break;
 default:

  return -VAR_0;
 }

 return 0;
}
