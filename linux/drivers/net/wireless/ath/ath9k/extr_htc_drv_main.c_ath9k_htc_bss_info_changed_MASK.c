
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ieee80211_bss_conf {scalar_t__ use_short_slot; scalar_t__ bssid; scalar_t__ enable_beacon; int aid; scalar_t__ assoc; } ;
struct ath_hw {scalar_t__ opmode; int slottime; } ;
struct ath_common {int curbssid; int curaid; int op_flags; } ;
struct TYPE_4__ {int slottime; int updateslot; } ;
struct TYPE_3__ {int enable_beacon; } ;
struct ath9k_htc_priv {int num_sta_assoc_vif; int num_ap_vif; int num_mbss_vif; int nvifs; int mutex; TYPE_2__ beacon; int op_flags; struct ath_hw* ah; TYPE_1__ cur_beacon_conf; scalar_t__ num_ibss_vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ath9k_htc_priv*) ;
 int FUNC_5 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_6 (struct ath9k_htc_priv*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*,struct ieee80211_vif*,struct ieee80211_bss_conf*) ;
 struct ath_common* FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath_common*,int ,char*,scalar_t__) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,scalar_t__,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(struct ieee80211_hw *VAR_15,
           struct ieee80211_vif *VAR_16,
           struct ieee80211_bss_conf *VAR_17,
           u32 VAR_18)
{
 struct ath9k_htc_priv *VAR_19 = VAR_15->priv;
 struct ath_hw *VAR_20 = VAR_19->ah;
 struct ath_common *VAR_21 = FUNC_9(VAR_20);
 int VAR_22;

 FUNC_14(&VAR_19->mutex);
 FUNC_3(VAR_19);

 if (VAR_18 & VAR_1) {
  FUNC_11(VAR_21, VAR_7, "BSS Changed ASSOC %d\n",
   VAR_17->assoc);

  VAR_17->assoc ?
   VAR_19->num_sta_assoc_vif++ : VAR_19->num_sta_assoc_vif--;

  if (!VAR_17->assoc)
   FUNC_12(VAR_0, &VAR_21->op_flags);

  if (VAR_19->ah->opmode == VAR_12) {
   FUNC_1(VAR_19);
   if (VAR_17->assoc && (VAR_19->num_sta_assoc_vif == 1))
    FUNC_6(VAR_19);
   else if (VAR_19->num_sta_assoc_vif == 0)
    FUNC_7(VAR_19);
  }
 }

 if (VAR_18 & VAR_6) {
  if (VAR_19->ah->opmode == VAR_9) {
   VAR_21->curaid = VAR_17->aid;
   FUNC_13(VAR_21->curbssid, VAR_17->bssid, VAR_8);
   FUNC_4(VAR_19);
  }
 }

 if ((VAR_18 & VAR_2) && VAR_17->enable_beacon) {
  FUNC_11(VAR_21, VAR_7, "Beacon enabled for BSS: %pM\n",
   VAR_17->bssid);
  FUNC_5(VAR_19, VAR_16);
  VAR_19->cur_beacon_conf.enable_beacon = 1;
  FUNC_0(VAR_19, VAR_16);
 }

 if ((VAR_18 & VAR_2) && !VAR_17->enable_beacon) {




  if ((VAR_19->num_ap_vif + VAR_19->num_mbss_vif <= 1) ||
       VAR_19->num_ibss_vif) {
   FUNC_11(VAR_21, VAR_7,
    "Beacon disabled for BSS: %pM\n",
    VAR_17->bssid);
   VAR_19->cur_beacon_conf.enable_beacon = 0;
   FUNC_0(VAR_19, VAR_16);
  }
 }

 if (VAR_18 & VAR_3) {



  if (VAR_19->nvifs == 1 &&
      ((VAR_19->ah->opmode == VAR_10 &&
        VAR_16->type == VAR_10 &&
        VAR_19->num_ap_vif == 1) ||
      (VAR_19->ah->opmode == VAR_11 &&
        VAR_16->type == VAR_11 &&
        VAR_19->num_mbss_vif == 1))) {
   FUNC_16(VAR_13, &VAR_19->op_flags);
  }
  FUNC_11(VAR_21, VAR_7,
   "Beacon interval changed for BSS: %pM\n",
   VAR_17->bssid);
  FUNC_0(VAR_19, VAR_16);
 }

 if (VAR_18 & VAR_4) {
  if (VAR_17->use_short_slot)
   VAR_22 = 9;
  else
   VAR_22 = 20;
  if (VAR_16->type == VAR_10) {





   VAR_19->beacon.slottime = VAR_22;
   VAR_19->beacon.updateslot = VAR_14;
  } else {
   VAR_20->slottime = VAR_22;
   FUNC_10(VAR_20);
  }
 }

 if (VAR_18 & VAR_5)
  FUNC_8(VAR_19, VAR_16, VAR_17);

 FUNC_2(VAR_19);
 FUNC_15(&VAR_19->mutex);
}
