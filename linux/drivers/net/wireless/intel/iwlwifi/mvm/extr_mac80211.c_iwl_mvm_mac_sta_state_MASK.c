
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iwl_mvm_vif {int he_ru_2mhz_block; int ap_assoc_sta_count; TYPE_4__* phy_ctxt; } ;
struct iwl_mvm_sta {int sta_state; int sta_id; } ;
struct iwl_mvm {int last_ebs_successful; int mutex; int status; int add_stream_wk; } ;
struct TYPE_6__ {int beacon_int; scalar_t__ he_support; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; scalar_t__ p2p; } ;
struct TYPE_7__ {scalar_t__ has_he; } ;
struct ieee80211_sta {int max_rc_amsdu_len; scalar_t__ tdls; int addr; TYPE_2__ he_cap; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;
struct TYPE_10__ {int disable_11ax; } ;
struct TYPE_9__ {TYPE_3__* channel; } ;
struct TYPE_8__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*,char*,int ,int) ;
 struct iwl_mvm* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ieee80211_sta*,int ) ;
 int FUNC_7 (struct ieee80211_sta*,int ) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_10 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_11 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_13 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_14 (struct iwl_mvm*,struct ieee80211_vif*,int,int *) ;
 int FUNC_15 (struct iwl_mvm*) ;
 int FUNC_16 (struct iwl_mvm*,struct ieee80211_vif*,int) ;
 int FUNC_17 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_18 (struct iwl_mvm*,struct ieee80211_sta*,int ,int) ;
 struct iwl_mvm_sta* FUNC_19 (struct ieee80211_sta*) ;
 int FUNC_20 (struct iwl_mvm*,struct ieee80211_vif*,int ,int ) ;
 scalar_t__ FUNC_21 (struct iwl_mvm*,int *) ;
 int FUNC_22 (struct iwl_mvm*) ;
 int FUNC_23 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_24 (struct ieee80211_vif*) ;
 TYPE_5__ VAR_16 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (int ,int *) ;
 scalar_t__ FUNC_28 (int) ;

__attribute__((used)) static int FUNC_29(struct ieee80211_hw *VAR_17,
     struct ieee80211_vif *VAR_18,
     struct ieee80211_sta *VAR_19,
     enum ieee80211_sta_state VAR_20,
     enum ieee80211_sta_state VAR_21)
{
 struct iwl_mvm *VAR_22 = FUNC_2(VAR_17);
 struct iwl_mvm_vif *VAR_23 = FUNC_24(VAR_18);
 struct iwl_mvm_sta *VAR_24 = FUNC_19(VAR_19);
 int VAR_25;

 FUNC_0(VAR_22, "station %pM state change %d->%d\n",
      VAR_19->addr, VAR_20, VAR_21);


 if (FUNC_4(!VAR_23->phy_ctxt))
  return -VAR_1;
 if (VAR_20 == VAR_6 &&
     VAR_21 == VAR_7) {
  FUNC_5(&VAR_22->add_stream_wk);





 }

 FUNC_25(&VAR_22->mutex);

 VAR_24->sta_state = VAR_21;

 if (VAR_20 == VAR_7 &&
     VAR_21 == VAR_6) {







  if (VAR_18->type == VAR_12 &&
      VAR_18->bss_conf.beacon_int < 16) {
   FUNC_1(VAR_22,
    "AP %pM beacon interval is %d, refusing due to firmware bug!\n",
    VAR_19->addr, VAR_18->bss_conf.beacon_int);
   VAR_25 = -VAR_1;
   goto out_unlock;
  }

  if (VAR_19->tdls &&
      (VAR_18->p2p ||
       FUNC_21(VAR_22, ((void*)0)) ==
      VAR_10 ||
       FUNC_15(VAR_22) > 1)) {
   FUNC_0(VAR_22, "refusing TDLS sta\n");
   VAR_25 = -VAR_0;
   goto out_unlock;
  }

  VAR_25 = FUNC_8(VAR_22, VAR_18, VAR_19);
  if (VAR_19->tdls && VAR_25 == 0) {
   FUNC_16(VAR_22, VAR_18, 1);
   FUNC_20(VAR_22, VAR_18, VAR_19->addr,
         VAR_15);
  }

  VAR_19->max_rc_amsdu_len = 1;
 } else if (VAR_20 == VAR_6 &&
     VAR_21 == VAR_4) {




  VAR_22->last_ebs_successful = 1;
  FUNC_11(VAR_22, VAR_18, VAR_19->addr);
  VAR_25 = 0;
 } else if (VAR_20 == VAR_4 &&
     VAR_21 == VAR_3) {
  if (VAR_18->type == VAR_11) {
   VAR_18->bss_conf.he_support = VAR_19->he_cap.has_he;
   VAR_23->ap_assoc_sta_count++;
   FUNC_14(VAR_22, VAR_18, 0, ((void*)0));
   if (VAR_18->bss_conf.he_support &&
       !VAR_16.disable_11ax)
    FUNC_9(VAR_22, VAR_18, VAR_24->sta_id);
  } else if (VAR_18->type == VAR_12) {
   VAR_18->bss_conf.he_support = VAR_19->he_cap.has_he;

   VAR_23->he_ru_2mhz_block = 0;
   if (VAR_19->he_cap.has_he)
    FUNC_10(VAR_17, VAR_18);

   FUNC_14(VAR_22, VAR_18, 0, ((void*)0));
  }

  FUNC_18(VAR_22, VAR_19, VAR_23->phy_ctxt->channel->band,
         0);
  VAR_25 = FUNC_23(VAR_22, VAR_18, VAR_19);
 } else if (VAR_20 == VAR_3 &&
     VAR_21 == VAR_5) {
  VAR_25 = 0;


  if (FUNC_15(VAR_22) > 1)
   FUNC_22(VAR_22);

  if (VAR_19->tdls)
   FUNC_20(VAR_22, VAR_18, VAR_19->addr,
         VAR_14);


  FUNC_3(FUNC_13(VAR_22, VAR_18, 0));






  FUNC_14(VAR_22, VAR_18, 0, ((void*)0));

  FUNC_18(VAR_22, VAR_19, VAR_23->phy_ctxt->channel->band,
         1);
 } else if (VAR_20 == VAR_5 &&
     VAR_21 == VAR_3) {

  FUNC_14(VAR_22, VAR_18, 0, ((void*)0));


  VAR_25 = FUNC_12(VAR_22, VAR_18, 0);
  FUNC_3(VAR_25 &&
   !FUNC_27(VAR_8,
      &VAR_22->status));
  VAR_25 = 0;
 } else if (VAR_20 == VAR_3 &&
     VAR_21 == VAR_4) {
  if (VAR_18->type == VAR_11) {
   VAR_23->ap_assoc_sta_count--;
   FUNC_14(VAR_22, VAR_18, 0, ((void*)0));
  }
  VAR_25 = 0;
 } else if (VAR_20 == VAR_4 &&
     VAR_21 == VAR_6) {
  VAR_25 = 0;
 } else if (VAR_20 == VAR_6 &&
     VAR_21 == VAR_7) {
  VAR_25 = FUNC_17(VAR_22, VAR_18, VAR_19);
  if (VAR_19->tdls) {
   FUNC_16(VAR_22, VAR_18, 0);
   FUNC_20(VAR_22, VAR_18, VAR_19->addr,
         VAR_13);
  }

  if (FUNC_28(VAR_25 &&
        FUNC_27(VAR_8,
          &VAR_22->status)))
   VAR_25 = 0;
 } else {
  VAR_25 = -VAR_2;
 }
 out_unlock:
 FUNC_26(&VAR_22->mutex);

 if (VAR_19->tdls && VAR_25 == 0) {
  if (VAR_20 == VAR_7 &&
      VAR_21 == VAR_6)
   FUNC_6(VAR_19, VAR_9);
  else if (VAR_20 == VAR_6 &&
    VAR_21 == VAR_7)
   FUNC_7(VAR_19, VAR_9);
 }

 return VAR_25;
}
