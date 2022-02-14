
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_efuse {scalar_t__ share_ant; int rfe_option; } ;
struct rtw_coex_rfe {int ant_switch_exist; int ant_switch_with_bt; int ant_switch_diversity; int wlg_at_btg; scalar_t__ ant_switch_polarity; int rfe_module_type; } ;
struct rtw_coex {struct rtw_coex_rfe rfe; } ;
struct rtw_dev {struct rtw_efuse efuse; struct rtw_coex coex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtw_dev*,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_2)
{
 struct rtw_coex *VAR_3 = &VAR_2->coex;
 struct rtw_coex_rfe *VAR_4 = &VAR_3->rfe;
 struct rtw_efuse *VAR_5 = &VAR_2->efuse;

 VAR_4->rfe_module_type = VAR_2->efuse.rfe_option;
 VAR_4->ant_switch_polarity = 0;
 VAR_4->ant_switch_exist = 0;
 VAR_4->ant_switch_with_bt = 0;
 VAR_4->ant_switch_diversity = 0;

 if (VAR_5->share_ant)
  VAR_4->wlg_at_btg = 1;
 else
  VAR_4->wlg_at_btg = 0;


 FUNC_0(VAR_2, 0x38, VAR_0, 0x0);
 FUNC_0(VAR_2, 0xa0, VAR_1, 0xffff);
 FUNC_0(VAR_2, 0xa4, VAR_1, 0xffff);
}
