
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_efuse {int rfe_option; scalar_t__ share_ant; } ;
struct rtw_coex_rfe {int rfe_module_type; int ant_switch_diversity; int ant_switch_exist; int wlg_at_btg; int ant_switch_with_bt; scalar_t__ ant_switch_polarity; } ;
struct rtw_coex {struct rtw_coex_rfe rfe; } ;
struct rtw_dev {struct rtw_efuse efuse; struct rtw_coex coex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct rtw_dev*,int ,int ,int) ;
 int FUNC_1 (struct rtw_dev*,int ,int) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;
 int FUNC_3 (struct rtw_dev*,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_10)
{
 struct rtw_coex *VAR_11 = &VAR_10->coex;
 struct rtw_coex_rfe *VAR_12 = &VAR_11->rfe;
 struct rtw_efuse *VAR_13 = &VAR_10->efuse;
 bool VAR_14 = 0;

 VAR_12->rfe_module_type = VAR_10->efuse.rfe_option;
 VAR_12->ant_switch_polarity = 0;
 VAR_12->ant_switch_diversity = 0;
 if (VAR_12->rfe_module_type == 0x12 ||
     VAR_12->rfe_module_type == 0x15 ||
     VAR_12->rfe_module_type == 0x16)
  VAR_12->ant_switch_exist = 0;
 else
  VAR_12->ant_switch_exist = 1;

 if (VAR_12->rfe_module_type == 2 ||
     VAR_12->rfe_module_type == 4) {
  FUNC_1(VAR_10, VAR_2, 1);
  VAR_14 = 1;
 } else {
  FUNC_1(VAR_10, VAR_2, 0);
 }

 VAR_12->wlg_at_btg = 0;

 if (VAR_13->share_ant &&
     VAR_12->ant_switch_exist && !VAR_14)
  VAR_12->ant_switch_with_bt = 1;
 else
  VAR_12->ant_switch_with_bt = 0;


 FUNC_2(VAR_10, VAR_8, 0xff);
 FUNC_3(VAR_10, VAR_7 + 1, 0x3, 0x0);
 FUNC_3(VAR_10, VAR_9, VAR_1, 0x0);


 FUNC_0(VAR_10, VAR_4, VAR_0, 0);


 FUNC_0(VAR_10, VAR_5, VAR_6, 0xffff);


 FUNC_0(VAR_10, VAR_3, VAR_6, 0xffff);
}
