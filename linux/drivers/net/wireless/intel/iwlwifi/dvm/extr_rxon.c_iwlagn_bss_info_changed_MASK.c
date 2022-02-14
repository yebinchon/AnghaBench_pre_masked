
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int filter_flags; int bssid_addr; int flags; int assoc_id; } ;
struct TYPE_7__ {int protection; int non_gf_sta_present; scalar_t__ enabled; } ;
struct TYPE_6__ {int qos_active; } ;
struct iwl_rxon_context {scalar_t__ ctxid; int active; TYPE_5__ staging; TYPE_2__ ht; TYPE_1__ qos_data; int vif; } ;
struct TYPE_9__ {scalar_t__ state; } ;
struct iwl_priv {int have_rekey_data; scalar_t__ band; int start_calib; int mutex; struct iwl_rxon_context* beacon_ctx; TYPE_4__ chain_noise_data; int current_ht_config; int timestamp; } ;
struct TYPE_8__ {scalar_t__ enable_beacon; scalar_t__ use_short_preamble; int aid; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_3__ bss_conf; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_bss_conf {int ht_operation_mode; int bssid; scalar_t__ ibss_joined; scalar_t__ assoc; scalar_t__ use_cts_prot; int sync_tsf; int qos; scalar_t__ idle; } ;


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
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (struct iwl_priv*,int) ;
 struct iwl_rxon_context* FUNC_6 (struct ieee80211_vif*) ;
 int FUNC_7 (struct iwl_priv*,int *) ;
 int FUNC_8 (struct iwl_priv*) ;
 int FUNC_9 (struct iwl_priv*) ;
 int FUNC_10 (struct iwl_priv*,struct iwl_rxon_context*,struct ieee80211_bss_conf*) ;
 int FUNC_11 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_12 (struct iwl_priv*) ;
 int FUNC_13 (struct iwl_priv*,struct ieee80211_vif*,scalar_t__) ;
 int FUNC_14 (struct iwl_priv*,struct iwl_rxon_context*) ;
 scalar_t__ FUNC_15 (struct iwl_priv*,struct ieee80211_vif*) ;
 int FUNC_16 (struct iwl_priv*,struct iwl_rxon_context*) ;
 scalar_t__ FUNC_17 (TYPE_5__*,int *,int) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int) ;

void FUNC_22(struct ieee80211_hw *VAR_20,
        struct ieee80211_vif *VAR_21,
        struct ieee80211_bss_conf *VAR_22,
        u32 VAR_23)
{
 struct iwl_priv *VAR_24 = FUNC_2(VAR_20);
 struct iwl_rxon_context *VAR_25 = FUNC_6(VAR_21);
 int VAR_26;
 bool VAR_27 = 0;

 FUNC_19(&VAR_24->mutex);

 if (VAR_23 & VAR_4 && VAR_22->idle) {




  FUNC_12(VAR_24);
 }

 if (FUNC_21(!FUNC_4(VAR_24))) {
  FUNC_0(VAR_24, "leave - not ready\n");
  FUNC_20(&VAR_24->mutex);
  return;
        }

 if (FUNC_21(!VAR_25->vif)) {
  FUNC_0(VAR_24, "leave - vif is NULL\n");
  FUNC_20(&VAR_24->mutex);
  return;
 }

 if (VAR_23 & VAR_2)
  VAR_27 = 1;

 if (VAR_23 & VAR_5) {
  VAR_25->qos_data.qos_active = VAR_22->qos;
  FUNC_16(VAR_24, VAR_25);
 }

 VAR_25->staging.assoc_id = FUNC_3(VAR_21->bss_conf.aid);
 if (VAR_21->bss_conf.use_short_preamble)
  VAR_25->staging.flags |= VAR_18;
 else
  VAR_25->staging.flags &= ~VAR_18;

 if (VAR_23 & VAR_0) {
  if (VAR_22->assoc) {
   VAR_24->timestamp = VAR_22->sync_tsf;
   VAR_25->staging.filter_flags |= VAR_15;
  } else {
   VAR_25->staging.filter_flags &= ~VAR_15;

   if (VAR_25->ctxid == VAR_10)
    VAR_24->have_rekey_data = 0;
  }

  FUNC_8(VAR_24);
 }

 if (VAR_25->ht.enabled) {
  VAR_25->ht.protection = VAR_22->ht_operation_mode &
     VAR_8;
  VAR_25->ht.non_gf_sta_present = !!(VAR_22->ht_operation_mode &
     VAR_7);
  FUNC_10(VAR_24, VAR_25, VAR_22);
  FUNC_7(VAR_24, &VAR_24->current_ht_config);
 }

 FUNC_14(VAR_24, VAR_25);

 if (VAR_22->use_cts_prot && (VAR_24->band != VAR_11))
  VAR_25->staging.flags |= VAR_19;
 else
  VAR_25->staging.flags &= ~VAR_19;

 if (VAR_22->use_cts_prot)
  VAR_25->staging.flags |= VAR_17;
 else
  VAR_25->staging.flags &= ~VAR_17;

 FUNC_18(VAR_25->staging.bssid_addr, VAR_22->bssid, VAR_6);

 if (VAR_21->type == VAR_13 ||
     VAR_21->type == VAR_12) {
  if (VAR_21->bss_conf.enable_beacon) {
   VAR_25->staging.filter_flags |= VAR_15;
   VAR_24->beacon_ctx = VAR_25;
  } else {
   VAR_25->staging.filter_flags &= ~VAR_15;
   VAR_24->beacon_ctx = ((void*)0);
  }
 }
 if (VAR_21->type == VAR_14) {
  if (!VAR_22->assoc)
   VAR_25->staging.filter_flags |= VAR_16;
  else
   VAR_25->staging.filter_flags &=
          ~VAR_16;
 }

 if (VAR_27 || FUNC_17(&VAR_25->staging, &VAR_25->active, sizeof(VAR_25->staging)))
  FUNC_11(VAR_24, VAR_25);

 if (VAR_23 & VAR_0 && VAR_22->assoc) {





  if (VAR_24->chain_noise_data.state == VAR_9)
   FUNC_5(VAR_24, 0);


  FUNC_9(VAR_24);
  VAR_24->start_calib = 1;
 }

 if (VAR_23 & VAR_3) {
  VAR_26 = FUNC_13(VAR_24, VAR_21,
       VAR_22->ibss_joined);
  if (VAR_26)
   FUNC_1(VAR_24, "failed to %s IBSS station %pM\n",
    VAR_22->ibss_joined ? "add" : "remove",
    VAR_22->bssid);
 }

 if (VAR_23 & VAR_1 && VAR_24->beacon_ctx == VAR_25) {
  if (FUNC_15(VAR_24, VAR_21))
   FUNC_1(VAR_24, "Error updating beacon\n");
 }

 FUNC_20(&VAR_24->mutex);
}
