
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int cnt_all; } ;
struct TYPE_5__ {scalar_t__ opmode; } ;
struct TYPE_4__ {int dm_initialgain_enable; } ;
struct dig_t {scalar_t__ cur_igvalue; int dig_enable_flag; scalar_t__ cur_sta_cstate; scalar_t__ dig_min_0; int media_connect_0; scalar_t__ rssi_val_min; scalar_t__ rx_gain_max; scalar_t__ antdiv_rssi_max; int large_fa_hit; scalar_t__ forbidden_igi; int rx_gain_min; int recover_cnt; } ;
struct rtl_priv {TYPE_3__ falsealm_cnt; TYPE_2__ mac80211; TYPE_1__ dm; struct dig_t dm_digtable; } ;
struct rtl_mac {int act_scanning; scalar_t__ link_state; } ;
struct rtl_efuse {scalar_t__ antenna_div_type; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_efuse* FUNC_4 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_6(VAR_16);
 struct rtl_mac *VAR_18 = FUNC_5(FUNC_6(VAR_16));
 struct rtl_efuse *VAR_19 = FUNC_4(FUNC_6(VAR_16));
 struct dig_t *VAR_20 = &VAR_17->dm_digtable;
 u8 VAR_21, VAR_22;
 bool VAR_23;
 u8 VAR_24, VAR_25;
 u8 VAR_26 = VAR_20->cur_igvalue;

 if (VAR_17->dm.dm_initialgain_enable == 0)
  return;
 if (VAR_20->dig_enable_flag == 0)
  return;
 if (VAR_18->act_scanning == 1)
  return;

 if (VAR_18->link_state >= VAR_13)
  VAR_20->cur_sta_cstate = VAR_3;
 else
  VAR_20->cur_sta_cstate = VAR_4;
 if (VAR_17->mac80211.opmode == VAR_15 ||
     VAR_17->mac80211.opmode == VAR_14)
  VAR_20->cur_sta_cstate = VAR_4;

 VAR_24 = VAR_10;
 VAR_25 = VAR_12;
 VAR_22 = VAR_11;
 VAR_21 = VAR_20->dig_min_0;
 VAR_23 = ((VAR_18->link_state >= VAR_13) ? 1 : 0) &&
    !VAR_20->media_connect_0;

 VAR_20->rssi_val_min =
  FUNC_2(VAR_16);

 if (VAR_18->link_state >= VAR_13) {
  if ((VAR_20->rssi_val_min + 20) > VAR_24)
   VAR_20->rx_gain_max = VAR_24;
  else if ((VAR_20->rssi_val_min + 20) < VAR_25)
   VAR_20->rx_gain_max = VAR_25;
  else
   VAR_20->rx_gain_max = VAR_20->rssi_val_min + 20;

  if (VAR_19->antenna_div_type == VAR_0) {
   VAR_21 = VAR_20->antdiv_rssi_max;
  } else {
   if (VAR_20->rssi_val_min < VAR_25)
    VAR_21 = VAR_25;
   else if (VAR_20->rssi_val_min < VAR_22)
    VAR_21 = VAR_22;
   else
    VAR_21 = VAR_20->rssi_val_min;
  }
 } else {
  VAR_20->rx_gain_max = VAR_24;
  VAR_21 = VAR_25;
  FUNC_0(VAR_17, VAR_1, VAR_2, "no link\n");
 }

 if (VAR_17->falsealm_cnt.cnt_all > 10000) {
  VAR_20->large_fa_hit++;
  if (VAR_20->forbidden_igi < VAR_26) {
   VAR_20->forbidden_igi = VAR_26;
   VAR_20->large_fa_hit = 1;
  }

  if (VAR_20->large_fa_hit >= 3) {
   if ((VAR_20->forbidden_igi + 1) >
    VAR_20->rx_gain_max)
    VAR_20->rx_gain_min =
     VAR_20->rx_gain_max;
   else
    VAR_20->rx_gain_min =
     VAR_20->forbidden_igi + 1;
   VAR_20->recover_cnt = 3600;
  }
 } else {
  if (VAR_20->recover_cnt != 0) {
   VAR_20->recover_cnt--;
  } else {
   if (VAR_20->large_fa_hit == 0) {
    if ((VAR_20->forbidden_igi - 1) <
        VAR_21) {
     VAR_20->forbidden_igi = VAR_21;
     VAR_20->rx_gain_min = VAR_21;
    } else {
     VAR_20->forbidden_igi--;
     VAR_20->rx_gain_min =
      VAR_20->forbidden_igi + 1;
    }
   } else if (VAR_20->large_fa_hit == 3) {
    VAR_20->large_fa_hit = 0;
   }
  }
 }

 if (VAR_20->cur_sta_cstate == VAR_3) {
  if (VAR_23) {
   VAR_26 = VAR_20->rssi_val_min;
  } else {
   if (VAR_17->falsealm_cnt.cnt_all > VAR_8)
    VAR_26 += 2;
   else if (VAR_17->falsealm_cnt.cnt_all > VAR_7)
    VAR_26++;
   else if (VAR_17->falsealm_cnt.cnt_all < VAR_6)
    VAR_26--;
  }
 } else {
  if (VAR_17->falsealm_cnt.cnt_all > 10000)
   VAR_26 += 2;
  else if (VAR_17->falsealm_cnt.cnt_all > 8000)
   VAR_26++;
  else if (VAR_17->falsealm_cnt.cnt_all < 500)
   VAR_26--;
 }

 if (VAR_26 > VAR_9)
  VAR_26 = VAR_9;
 else if (VAR_26 < VAR_5)
  VAR_26 = VAR_5;

 if (VAR_17->falsealm_cnt.cnt_all > 10000)
  VAR_26 = VAR_9;

 VAR_20->cur_igvalue = VAR_26;
 FUNC_3(VAR_16);
 VAR_20->media_connect_0 =
  ((VAR_18->link_state >= VAR_13) ? 1 : 0);
 VAR_20->dig_min_0 = VAR_21;

 FUNC_1(VAR_16);
}
