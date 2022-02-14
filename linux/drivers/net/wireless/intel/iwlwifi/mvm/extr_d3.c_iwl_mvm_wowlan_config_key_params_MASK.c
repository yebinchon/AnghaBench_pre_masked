
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int tkip_cmd ;
struct wowlan_key_data {int configure_keys; int use_rsc_tsc; int use_tkip; struct iwl_wowlan_tkip_params_cmd* rsc_tsc; scalar_t__ error; struct iwl_wowlan_tkip_params_cmd* tkip; } ;
struct iwl_wowlan_tkip_params_cmd {int replay_ctr; void* kek_len; int kek; void* kck_len; int kck; } ;
struct iwl_wowlan_kek_kck_material_cmd {int replay_ctr; void* kek_len; int kek; void* kck_len; int kck; } ;
struct TYPE_4__ {int replay_ctr; int kek; int kck; scalar_t__ valid; } ;
struct iwl_mvm_vif {TYPE_2__ rekey_data; } ;
struct iwl_mvm {TYPE_1__* fw; int hw; } ;
struct ieee80211_vif {int dummy; } ;
typedef int kek_kck_cmd ;
struct TYPE_3__ {int ucode_capa; } ;


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
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,struct ieee80211_vif*,int ,struct wowlan_key_data*) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,int,struct iwl_wowlan_tkip_params_cmd*) ;
 struct iwl_mvm_vif* FUNC_5 (struct ieee80211_vif*) ;
 int VAR_10 ;
 int FUNC_6 (struct iwl_wowlan_tkip_params_cmd*) ;
 struct iwl_wowlan_tkip_params_cmd* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct iwl_wowlan_tkip_params_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct iwl_mvm *VAR_11,
         struct ieee80211_vif *VAR_12,
         u32 VAR_13)
{
 struct iwl_wowlan_kek_kck_material_cmd VAR_14 = {};
 struct iwl_wowlan_tkip_params_cmd VAR_15 = {};
 bool VAR_16 = FUNC_2(&VAR_11->fw->ucode_capa,
       VAR_4);
 struct wowlan_key_data VAR_17 = {
  .configure_keys = !VAR_16,
  .use_rsc_tsc = 0,
  .tkip = &VAR_15,
  .use_tkip = 0,
 };
 struct iwl_mvm_vif *VAR_18 = FUNC_5(VAR_12);
 int VAR_19;

 VAR_17.rsc_tsc = FUNC_7(sizeof(*VAR_17.rsc_tsc), VAR_2);
 if (!VAR_17.rsc_tsc)
  return -VAR_1;
 FUNC_3(VAR_11->hw, VAR_12, VAR_10,
       &VAR_17);

 if (VAR_17.error) {
  VAR_19 = -VAR_0;
  goto out;
 }

 if (VAR_17.use_rsc_tsc) {
  VAR_19 = FUNC_4(VAR_11,
        VAR_9, VAR_13,
        sizeof(*VAR_17.rsc_tsc),
        VAR_17.rsc_tsc);
  if (VAR_19)
   goto out;
 }

 if (VAR_17.use_tkip &&
     !FUNC_1(&VAR_11->fw->ucode_capa,
   VAR_3)) {
  VAR_19 = FUNC_4(VAR_11,
        VAR_8,
        VAR_13, sizeof(VAR_15),
        &VAR_15);
  if (VAR_19)
   goto out;
 }


 if (VAR_18->rekey_data.valid) {
  FUNC_9(&VAR_14, 0, sizeof(VAR_14));
  FUNC_8(VAR_14.kck, VAR_18->rekey_data.kck,
         VAR_5);
  VAR_14.kck_len = FUNC_0(VAR_5);
  FUNC_8(VAR_14.kek, VAR_18->rekey_data.kek,
         VAR_6);
  VAR_14.kek_len = FUNC_0(VAR_6);
  VAR_14.replay_ctr = VAR_18->rekey_data.replay_ctr;

  VAR_19 = FUNC_4(VAR_11,
        VAR_7, VAR_13,
        sizeof(VAR_14),
        &VAR_14);
  if (VAR_19)
   goto out;
 }
 VAR_19 = 0;
out:
 FUNC_6(VAR_17.rsc_tsc);
 return VAR_19;
}
