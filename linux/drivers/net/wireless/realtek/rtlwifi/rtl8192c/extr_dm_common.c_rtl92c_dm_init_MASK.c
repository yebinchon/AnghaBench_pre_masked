
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dm_flag; int undec_sm_pwdb; int undec_sm_cck; int dm_initialgain_enable; int dm_rssi_sel; scalar_t__ ofdm_pkt_cnt; int dm_type; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

void FUNC_7(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_6(VAR_6);

 VAR_7->dm.dm_type = VAR_0;
 VAR_7->dm.dm_flag = VAR_2 | VAR_1;
 VAR_7->dm.undec_sm_pwdb = -1;
 VAR_7->dm.undec_sm_cck = -1;
 VAR_7->dm.dm_initialgain_enable = 1;
 FUNC_5(VAR_6, 0x20);

 VAR_7->dm.dm_flag |= VAR_4;
 FUNC_1(VAR_6);

 FUNC_2(VAR_6);
 FUNC_3(VAR_6);
 VAR_7->dm.dm_flag |= VAR_3;
 FUNC_4(VAR_6);
 FUNC_0(VAR_6);

 VAR_7->dm.ofdm_pkt_cnt = 0;
 VAR_7->dm.dm_rssi_sel = VAR_5;
}
