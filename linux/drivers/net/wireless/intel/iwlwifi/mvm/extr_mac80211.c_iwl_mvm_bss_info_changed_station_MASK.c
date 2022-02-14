
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ bf_enabled; scalar_t__ last_cqm_event; scalar_t__ ave_beacon_signal; } ;
struct iwl_mvm_vif {TYPE_3__ bf_data; int ap_sta_id; int beacon_stats; scalar_t__ associated; int * bssid; } ;
struct iwl_mvm {TYPE_2__* fw; int status; } ;
struct TYPE_5__ {int beacon_int; scalar_t__ he_support; } ;
struct ieee80211_vif {scalar_t__ mu_mimo_owner; int addr; scalar_t__ p2p; TYPE_1__ bss_conf; } ;
struct ieee80211_bss_conf {int txpower; scalar_t__ assoc; int bssid; } ;
struct TYPE_8__ {int disable_11ax; } ;
struct TYPE_6__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int FUNC_2 (struct iwl_mvm*,char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (struct iwl_mvm*) ;
 int FUNC_10 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_11 (struct iwl_mvm*,struct ieee80211_vif*,int,int *) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_13 (struct iwl_mvm*) ;
 int FUNC_14 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_15 (struct iwl_mvm*,struct ieee80211_vif*,int,int,int,int) ;
 int FUNC_16 (struct iwl_mvm*) ;
 int FUNC_17 (struct iwl_mvm*,int) ;
 int FUNC_18 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_19 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_20 (struct iwl_mvm*,struct ieee80211_vif*,int) ;
 int FUNC_21 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_22 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_23 (struct iwl_mvm*,int,int *) ;
 int FUNC_24 (struct iwl_mvm*,struct ieee80211_vif*,int ,int ) ;
 struct iwl_mvm_vif* FUNC_25 (struct ieee80211_vif*) ;
 TYPE_4__ VAR_19 ;
 int FUNC_26 (int *,int ,int ) ;
 int FUNC_27 (int *,int ,int) ;
 scalar_t__ FUNC_28 (int ,int *) ;

__attribute__((used)) static void FUNC_29(struct iwl_mvm *VAR_20,
          struct ieee80211_vif *VAR_21,
          struct ieee80211_bss_conf *VAR_22,
          u32 VAR_23)
{
 struct iwl_mvm_vif *VAR_24 = FUNC_25(VAR_21);
 int VAR_25;






 if (VAR_23 & VAR_1 && VAR_22->assoc) {
  if (VAR_21->bss_conf.he_support &&
      !VAR_19.disable_11ax)
   FUNC_7(VAR_20, VAR_21, VAR_24->ap_sta_id);

  FUNC_12(VAR_20, VAR_21);
 }


 if (VAR_23 & VAR_8 && VAR_24->associated &&
     VAR_22->assoc && VAR_21->bss_conf.he_support &&
     !VAR_19.disable_11ax)
  FUNC_7(VAR_20, VAR_21, VAR_24->ap_sta_id);







 if (VAR_23 & VAR_3 && !VAR_24->associated)
  FUNC_26(VAR_24->bssid, VAR_22->bssid, VAR_10);

 VAR_25 = FUNC_11(VAR_20, VAR_21, 0, VAR_24->bssid);
 if (VAR_25)
  FUNC_2(VAR_20, "failed to update MAC %pM\n", VAR_21->addr);


 FUNC_26(VAR_24->bssid, VAR_22->bssid, VAR_10);
 VAR_24->associated = VAR_22->assoc;

 if (VAR_23 & VAR_1) {
  if (VAR_22->assoc) {

   FUNC_17(VAR_20, 1);
   FUNC_27(&VAR_24->beacon_stats, 0,
          sizeof(VAR_24->beacon_stats));


   VAR_25 = FUNC_23(VAR_20, 1, ((void*)0));
   if (VAR_25) {
    FUNC_2(VAR_20, "failed to update quotas\n");
    return;
   }

   if (FUNC_28(VAR_17,
         &VAR_20->status)) {
    u32 VAR_26 = (11 * VAR_21->bss_conf.beacon_int) / 10;
    FUNC_15(VAR_20, VAR_21, VAR_26, VAR_26,
       5 * VAR_26, 0);
   }

   FUNC_20(VAR_20, VAR_21, 0);
   FUNC_14(VAR_20, VAR_21);
   if (VAR_21->p2p) {
    FUNC_24(VAR_20, VAR_21,
          VAR_14,
          VAR_12);
   }
  } else if (VAR_24->ap_sta_id != VAR_13) {




   VAR_25 = FUNC_20(VAR_20, VAR_21, 0);
   FUNC_4(VAR_25 &&
      !FUNC_28(VAR_16,
         &VAR_20->status),
      "Failed to update SF upon disassociation\n");
   if (!FUNC_28(VAR_17,
          &VAR_20->status)) {




    VAR_25 = FUNC_18(VAR_20, VAR_21,
       VAR_24->ap_sta_id);
    if (VAR_25)
     FUNC_2(VAR_20,
      "failed to remove AP station\n");

    VAR_24->ap_sta_id = VAR_13;
   }


   VAR_25 = FUNC_23(VAR_20, 0, ((void*)0));
   if (VAR_25)
    FUNC_2(VAR_20, "failed to update quotas\n");


   VAR_25 = FUNC_11(VAR_20, VAR_21, 0, ((void*)0));
   if (VAR_25)
    FUNC_2(VAR_20,
     "failed to update MAC %pM (clear after unassoc)\n",
     VAR_21->addr);
  }





  if (FUNC_28(VAR_17, &VAR_20->status) &&
      (VAR_23 & VAR_5) && VAR_21->mu_mimo_owner) {
   VAR_25 = FUNC_22(VAR_20, VAR_21);
   if (VAR_25)
    FUNC_2(VAR_20,
     "failed to update VHT MU_MIMO groups\n");
  }

  FUNC_16(VAR_20);
  FUNC_9(VAR_20);


  VAR_24->bf_data.ave_beacon_signal = 0;

  FUNC_6(VAR_20);
  FUNC_24(VAR_20, VAR_21, VAR_15,
        VAR_11);
  if (FUNC_5(&VAR_20->fw->ucode_capa,
    VAR_18))
   FUNC_8(VAR_20);
 }

 if (VAR_23 & VAR_2) {




  FUNC_21(VAR_20, VAR_21);

  FUNC_20(VAR_20, VAR_21, 0);
  FUNC_3(FUNC_10(VAR_20, VAR_21, 0));
 }

 if (VAR_23 & (VAR_7 | VAR_6 | VAR_8 |




         VAR_2)) {
  VAR_25 = FUNC_13(VAR_20);
  if (VAR_25)
   FUNC_2(VAR_20, "failed to update power mode\n");
 }

 if (VAR_23 & VAR_9) {
  FUNC_0(VAR_20, "Changing TX Power to %d\n",
    VAR_22->txpower);
  FUNC_19(VAR_20, VAR_21, VAR_22->txpower);
 }

 if (VAR_23 & VAR_4) {
  FUNC_1(VAR_20, "cqm info_changed\n");

  VAR_24->bf_data.last_cqm_event = 0;
  if (VAR_24->bf_data.bf_enabled) {
   VAR_25 = FUNC_10(VAR_20, VAR_21, 0);
   if (VAR_25)
    FUNC_2(VAR_20,
     "failed to update CQM thresholds\n");
  }
 }

 if (VAR_23 & VAR_0) {
  FUNC_1(VAR_20, "arp filter changed\n");
  FUNC_9(VAR_20);
 }
}
