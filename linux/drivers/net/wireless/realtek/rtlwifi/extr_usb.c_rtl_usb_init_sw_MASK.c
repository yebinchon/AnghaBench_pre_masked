
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_usb {int* irq_mask; int disablehwsm; int acm_method; } ;
struct rtl_ps_ctl {int inactiveps; int leisure_ps; int fwctrl_lps; int reg_fwctrl_lps; int reg_max_lps_awakeintvl; int fwctrl_psmode; } ;
struct rtl_mac {int beacon_interval; int current_ampdu_density; int current_ampdu_factor; scalar_t__ max_mss_density; scalar_t__ min_space_cfg; } ;
struct rtl_hal {struct ieee80211_hw* hw; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtl_hal* FUNC_0 (int ) ;
 struct rtl_mac* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_3 (int ) ;
 struct rtl_usb* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_2)
{
 struct rtl_mac *VAR_3 = FUNC_1(FUNC_2(VAR_2));
 struct rtl_hal *VAR_4 = FUNC_0(FUNC_2(VAR_2));
 struct rtl_ps_ctl *VAR_5 = FUNC_3(FUNC_2(VAR_2));
 struct rtl_usb *VAR_6 = FUNC_4(FUNC_5(VAR_2));

 VAR_4->hw = VAR_2;
 VAR_5->inactiveps = 0;
 VAR_5->leisure_ps = 0;
 VAR_5->fwctrl_lps = 0;
 VAR_5->reg_fwctrl_lps = 3;
 VAR_5->reg_max_lps_awakeintvl = 5;
 VAR_5->fwctrl_psmode = VAR_1;


 VAR_3->beacon_interval = 100;


 VAR_3->min_space_cfg = 0;
 VAR_3->max_mss_density = 0;


 VAR_3->current_ampdu_density = 7;
 VAR_3->current_ampdu_factor = 3;


 VAR_6->acm_method = VAR_0;



 VAR_6->irq_mask[0] = 0xFFFFFFFF;

 VAR_6->irq_mask[1] = 0xFFFFFFFF;
 VAR_6->disablehwsm = 1;
}
