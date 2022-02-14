
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_time_quota_data {void* id_and_color; void* max_duration; void* quota; } ;
struct iwl_time_quota_cmd {int dummy; } ;
struct iwl_mvm_vif {int uploaded; size_t ap_sta_id; TYPE_2__* phy_ctxt; int color; int id; } ;
struct iwl_mvm {int * fw_id_to_mac_id; } ;
struct iwl_binding_cmd_v1 {void** macs; void* phy; void* action; void* id_and_color; } ;
struct TYPE_3__ {int assoc; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sta {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
struct ieee80211_chanctx_conf {int rx_chains_dynamic; int rx_chains_static; struct cfg80211_chan_def def; } ;
struct TYPE_4__ {int color; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_mvm*,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_vif*,int,int *) ;
 int FUNC_10 (struct iwl_mvm*,TYPE_2__*,struct cfg80211_chan_def*,int ,int ) ;
 struct iwl_time_quota_data* FUNC_11 (struct iwl_mvm*,struct iwl_time_quota_cmd*,int) ;
 int FUNC_12 (struct iwl_mvm*) ;
 int FUNC_13 (struct iwl_mvm*,int ,int ,int ,struct iwl_time_quota_cmd*) ;
 int FUNC_14 (struct iwl_mvm*,int ,int ,struct iwl_binding_cmd_v1*,int*) ;
 int FUNC_15 (struct iwl_mvm*,struct ieee80211_sta*,int,int ) ;
 struct iwl_mvm_vif* FUNC_16 (struct ieee80211_vif*) ;
 int FUNC_17 (int ,struct ieee80211_sta*) ;
 struct ieee80211_chanctx_conf* FUNC_18 (int ) ;
 int FUNC_19 () ;
 int FUNC_20 () ;

__attribute__((used)) static int FUNC_21(struct iwl_mvm *VAR_10, struct ieee80211_vif *VAR_11,
    struct ieee80211_sta *VAR_12)
{
 struct iwl_mvm_vif *VAR_13 = FUNC_16(VAR_11);
 struct ieee80211_chanctx_conf *VAR_14;
 u8 VAR_15, VAR_16;
 struct cfg80211_chan_def VAR_17;
 int VAR_18, VAR_19;
 struct iwl_binding_cmd_v1 VAR_20 = {};
 struct iwl_time_quota_cmd VAR_21 = {};
 struct iwl_time_quota_data *VAR_22;
 u32 VAR_23;

 if (FUNC_3(FUNC_6(VAR_10)))
  return -VAR_1;


 if (FUNC_2(!VAR_13->phy_ctxt))
  return -VAR_1;

 FUNC_19();
 VAR_14 = FUNC_18(VAR_11->chanctx_conf);
 if (FUNC_2(!VAR_14)) {
  FUNC_20();
  return -VAR_1;
 }
 VAR_17 = VAR_14->def;
 VAR_15 = VAR_14->rx_chains_static;
 VAR_16 = VAR_14->rx_chains_dynamic;
 FUNC_20();

 VAR_18 = FUNC_10(VAR_10, VAR_13->phy_ctxt, &VAR_17,
       VAR_15, VAR_16);
 if (VAR_18)
  return VAR_18;


 VAR_13->uploaded = 0;

 if (FUNC_2(!VAR_11->bss_conf.assoc))
  return -VAR_1;

 VAR_18 = FUNC_8(VAR_10, VAR_11);
 if (VAR_18)
  return VAR_18;


 VAR_20.id_and_color =
  FUNC_4(FUNC_0(VAR_13->phy_ctxt->id,
      VAR_13->phy_ctxt->color));
 VAR_20.action = FUNC_4(VAR_3);
 VAR_20.phy =
  FUNC_4(FUNC_0(VAR_13->phy_ctxt->id,
      VAR_13->phy_ctxt->color));
 VAR_20.macs[0] = FUNC_4(FUNC_0(VAR_13->id,
             VAR_13->color));
 for (VAR_19 = 1; VAR_19 < VAR_8; VAR_19++)
  VAR_20.macs[VAR_19] = FUNC_4(VAR_4);

 VAR_23 = 0;
 VAR_18 = FUNC_14(VAR_10, VAR_0,
       VAR_5, &VAR_20,
       &VAR_23);
 if (VAR_18) {
  FUNC_1(VAR_10, "Failed to add binding: %d\n", VAR_18);
  return VAR_18;
 }

 if (VAR_23) {
  FUNC_1(VAR_10, "Binding command failed: %u\n", VAR_23);
  return -VAR_2;
 }

 VAR_18 = FUNC_15(VAR_10, VAR_12, 0, 0);
 if (VAR_18)
  return VAR_18;
 FUNC_17(VAR_10->fw_id_to_mac_id[VAR_13->ap_sta_id], VAR_12);

 VAR_18 = FUNC_9(VAR_10, VAR_11, 0, ((void*)0));
 if (VAR_18)
  return VAR_18;


 VAR_22 = FUNC_11(VAR_10, &VAR_21, 0);
 VAR_22->id_and_color =
  FUNC_4(FUNC_0(VAR_13->phy_ctxt->id,
      VAR_13->phy_ctxt->color));
 VAR_22->quota = FUNC_4(VAR_6);
 VAR_22->max_duration = FUNC_4(VAR_6);

 for (VAR_19 = 1; VAR_19 < VAR_7; VAR_19++) {
  VAR_22 = FUNC_11(VAR_10, &VAR_21, VAR_19);
  VAR_22->id_and_color = FUNC_4(VAR_4);
 }

 VAR_18 = FUNC_13(VAR_10, VAR_9, 0,
       FUNC_12(VAR_10), &VAR_21);
 if (VAR_18)
  FUNC_1(VAR_10, "Failed to send quota: %d\n", VAR_18);

 if (FUNC_7(VAR_10) && FUNC_5(VAR_10))
  FUNC_1(VAR_10, "Failed to initialize D3 LAR information\n");

 return 0;
}
