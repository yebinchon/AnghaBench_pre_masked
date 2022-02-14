
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_ps_ctl {int fw_current_inpsmode; } ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int fw_ready; int fw_clk_change_in_progress; int allow_sw_to_change_hwclc; scalar_t__ last_hmeboxnum; int fw_ps_state; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_4 (struct rtl_priv*) ;

void FUNC_5(struct ieee80211_hw *VAR_3,
      bool VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_3(VAR_3);
 struct rtl_hal *VAR_6 = FUNC_2(FUNC_3(VAR_3));
 struct rtl_ps_ctl *VAR_7 = FUNC_4(FUNC_3(VAR_3));

 if (FUNC_1(VAR_3, VAR_4)) {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "Re-Download Firmware failed!!\n");
  VAR_6->fw_ready = 0;
  return;
 }
 FUNC_0(VAR_5, VAR_0, VAR_1,
   "Re-Download Firmware Success !!\n");
 VAR_6->fw_ready = 1;


 VAR_7->fw_current_inpsmode = 0;
 VAR_6->fw_ps_state = VAR_2;
 VAR_6->fw_clk_change_in_progress = 0;
 VAR_6->allow_sw_to_change_hwclc = 0;
 VAR_6->last_hmeboxnum = 0;
}
