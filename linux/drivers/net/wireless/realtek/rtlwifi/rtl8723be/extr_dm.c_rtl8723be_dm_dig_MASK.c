
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int cnt_all; } ;
struct TYPE_3__ {scalar_t__ one_entry_only; } ;
struct dig_t {int cur_igvalue; int dig_min_0; int media_connect_0; int rssi_val_min; int rx_gain_max; int large_fa_hit; int forbidden_igi; int rx_gain_min; int recover_cnt; } ;
struct rtl_priv {TYPE_2__ falsealm_cnt; TYPE_1__ dm; struct dig_t dm_digtable; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ act_scanning; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_3(VAR_8);
 struct dig_t *VAR_10 = &VAR_9->dm_digtable;
 struct rtl_mac *VAR_11 = FUNC_2(FUNC_3(VAR_8));
 u8 VAR_12, VAR_13;
 bool VAR_14, VAR_15;
 u8 VAR_16, VAR_17;
 u8 VAR_18 = VAR_10->cur_igvalue;
 u8 VAR_19;


 if (VAR_11->act_scanning)
  return;

 VAR_12 = VAR_10->dig_min_0;
 VAR_14 = (VAR_11->link_state >= VAR_7) &&
   !VAR_10->media_connect_0;
 VAR_15 = (VAR_11->link_state < VAR_7) &&
   (VAR_10->media_connect_0);

 VAR_16 = 0x5a;
 VAR_17 = VAR_6;
 VAR_13 = VAR_5;

 if (VAR_11->link_state >= VAR_7) {
  if ((VAR_10->rssi_val_min + 10) > VAR_16)
   VAR_10->rx_gain_max = VAR_16;
  else if ((VAR_10->rssi_val_min + 10) < VAR_17)
   VAR_10->rx_gain_max = VAR_17;
  else
   VAR_10->rx_gain_max =
    VAR_10->rssi_val_min + 10;

  if (VAR_9->dm.one_entry_only) {
   VAR_19 = 12;
   if (VAR_10->rssi_val_min - VAR_19 < VAR_17)
    VAR_12 = VAR_17;
   else if (VAR_10->rssi_val_min - VAR_19 >
       VAR_13)
    VAR_12 = VAR_13;
   else
    VAR_12 =
     VAR_10->rssi_val_min - VAR_19;
  } else {
   VAR_12 = VAR_17;
  }

 } else {
  VAR_10->rx_gain_max = VAR_16;
  VAR_12 = VAR_17;
  FUNC_0(VAR_9, VAR_0, VAR_1, "no link\n");
 }

 if (VAR_9->falsealm_cnt.cnt_all > 10000) {
  if (VAR_10->large_fa_hit != 3)
   VAR_10->large_fa_hit++;
  if (VAR_10->forbidden_igi < VAR_18) {
   VAR_10->forbidden_igi = VAR_18;
   VAR_10->large_fa_hit = 1;
  }

  if (VAR_10->large_fa_hit >= 3) {
   if ((VAR_10->forbidden_igi + 1) >
        VAR_10->rx_gain_max)
    VAR_10->rx_gain_min =
      VAR_10->rx_gain_max;
   else
    VAR_10->rx_gain_min =
      VAR_10->forbidden_igi + 1;
   VAR_10->recover_cnt = 3600;
  }
 } else {
  if (VAR_10->recover_cnt != 0) {
   VAR_10->recover_cnt--;
  } else {
   if (VAR_10->large_fa_hit < 3) {
    if ((VAR_10->forbidden_igi - 1) <
         VAR_12) {
     VAR_10->forbidden_igi =
       VAR_12;
     VAR_10->rx_gain_min =
       VAR_12;
    } else {
     VAR_10->forbidden_igi--;
     VAR_10->rx_gain_min =
      VAR_10->forbidden_igi + 1;
    }
   } else {
    VAR_10->large_fa_hit = 0;
   }
  }
 }
 if (VAR_10->rx_gain_min > VAR_10->rx_gain_max)
  VAR_10->rx_gain_min = VAR_10->rx_gain_max;

 if (VAR_11->link_state >= VAR_7) {
  if (VAR_14) {
   if (VAR_10->rssi_val_min <= VAR_13)
    VAR_18 = VAR_10->rssi_val_min;
   else
    VAR_18 = VAR_13;

   VAR_10->large_fa_hit = 0;
  } else {
   if (VAR_9->falsealm_cnt.cnt_all > VAR_4)
    VAR_18 += 4;
   else if (VAR_9->falsealm_cnt.cnt_all > VAR_3)
    VAR_18 += 2;
   else if (VAR_9->falsealm_cnt.cnt_all < VAR_2)
    VAR_18 -= 2;
  }
 } else {
  if (VAR_15) {
   VAR_18 = VAR_10->rx_gain_min;
  } else {
   if (VAR_9->falsealm_cnt.cnt_all > 10000)
    VAR_18 += 4;
   else if (VAR_9->falsealm_cnt.cnt_all > 8000)
    VAR_18 += 2;
   else if (VAR_9->falsealm_cnt.cnt_all < 500)
    VAR_18 -= 2;
  }
 }

 if (VAR_18 > VAR_10->rx_gain_max)
  VAR_18 = VAR_10->rx_gain_max;
 else if (VAR_18 < VAR_10->rx_gain_min)
  VAR_18 = VAR_10->rx_gain_min;

 FUNC_1(VAR_8, VAR_18);
 VAR_10->media_connect_0 =
  ((VAR_11->link_state >= VAR_7) ? 1 : 0);
 VAR_10->dig_min_0 = VAR_12;
}
