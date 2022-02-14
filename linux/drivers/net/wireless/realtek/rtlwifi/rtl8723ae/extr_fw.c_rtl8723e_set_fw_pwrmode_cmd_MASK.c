
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {int smart_ps; int reg_max_lps_awakeintvl; } ;
struct TYPE_2__ {scalar_t__ p2p; } ;
struct rtl_priv {TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int *,int) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int,int *) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_7 (struct rtl_priv*) ;

void FUNC_8(struct ieee80211_hw *VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_6(VAR_5);
 u8 VAR_8[3] = { 0 };
 struct rtl_ps_ctl *VAR_9 = FUNC_7(FUNC_6(VAR_5));

 FUNC_1(VAR_7, VAR_1, VAR_3, "FW LPS mode = %d\n", VAR_6);

 FUNC_3(VAR_8, VAR_6);
 FUNC_4(VAR_8,
  (VAR_7->mac80211.p2p) ? VAR_9->smart_ps : 1);
 FUNC_2(VAR_8,
           VAR_9->reg_max_lps_awakeintvl);

 FUNC_0(VAR_7, VAR_0, VAR_2,
        "rtl8723e_set_fw_rsvdpagepkt(): u1_h2c_set_pwrmode\n",
        VAR_8, 3);
 FUNC_5(VAR_5, VAR_4, 3, VAR_8);
}
