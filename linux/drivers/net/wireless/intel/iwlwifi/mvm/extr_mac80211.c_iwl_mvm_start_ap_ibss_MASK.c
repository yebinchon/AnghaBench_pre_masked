
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int ap_ibss_active; int id; struct ieee80211_key_conf** ap_early_keys; scalar_t__ ap_assoc_sta_count; } ;
struct iwl_mvm {int mutex; scalar_t__ p2p_device_vif; TYPE_1__* fw; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;
struct ieee80211_key_conf {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int FUNC_0 (struct ieee80211_key_conf**) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ieee80211_hw*,int ,struct ieee80211_vif*,int *,struct ieee80211_key_conf*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_10 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_11 (struct iwl_mvm*,scalar_t__,int,int *) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_13 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_14 (struct iwl_mvm*) ;
 int FUNC_15 (struct iwl_mvm*) ;
 int FUNC_16 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_17 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_18 (struct iwl_mvm*,int,int ) ;
 int FUNC_19 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_20 (struct iwl_mvm*) ;
 int FUNC_21 (struct iwl_mvm*,int,int *) ;
 struct iwl_mvm_vif* FUNC_22 (struct ieee80211_vif*) ;
 int FUNC_23 (struct iwl_mvm_vif*,int,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(struct ieee80211_hw *VAR_4,
     struct ieee80211_vif *VAR_5)
{
 struct iwl_mvm *VAR_6 = FUNC_1(VAR_4);
 struct iwl_mvm_vif *VAR_7 = FUNC_22(VAR_5);
 int VAR_8, VAR_9;

 FUNC_24(&VAR_6->mutex);


 VAR_8 = FUNC_10(VAR_6, VAR_5);
 if (VAR_8)
  goto out_unlock;





 if (VAR_5->type == VAR_2)
  FUNC_12(VAR_6, VAR_5);

 VAR_7->ap_assoc_sta_count = 0;


 VAR_8 = FUNC_9(VAR_6, VAR_5);
 if (VAR_8)
  goto out_unlock;


 VAR_8 = FUNC_5(VAR_6, VAR_5);
 if (VAR_8)
  goto out_remove;
 if (FUNC_3(&VAR_6->fw->ucode_capa, VAR_0)) {
  VAR_8 = FUNC_4(VAR_6, VAR_5);
  if (VAR_8)
   goto out_unbind;




  VAR_8 = FUNC_17(VAR_6, VAR_5);
  if (VAR_8) {
   FUNC_16(VAR_6, VAR_5);
   goto out_unbind;
  }
 } else {




  VAR_8 = FUNC_17(VAR_6, VAR_5);
  if (VAR_8)
   goto out_unbind;
  VAR_8 = FUNC_4(VAR_6, VAR_5);
  if (VAR_8) {
   FUNC_19(VAR_6, VAR_5);
   goto out_unbind;
  }
 }


 VAR_7->ap_ibss_active = 1;


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7->ap_early_keys); VAR_9++) {
  struct ieee80211_key_conf *VAR_10 = VAR_7->ap_early_keys[VAR_9];

  if (!VAR_10)
   continue;

  VAR_7->ap_early_keys[VAR_9] = ((void*)0);

  VAR_8 = FUNC_2(VAR_4, VAR_3, VAR_5, ((void*)0), VAR_10);
  if (VAR_8)
   goto out_quota_failed;
 }

 if (VAR_5->type == VAR_2 && !VAR_5->p2p) {
  FUNC_23(VAR_7, 1,
         VAR_1);
  FUNC_18(VAR_6, 1, VAR_7->id);
 }


 FUNC_15(VAR_6);

 VAR_8 = FUNC_21(VAR_6, 0, ((void*)0));
 if (VAR_8)
  goto out_quota_failed;


 if (VAR_5->p2p && VAR_6->p2p_device_vif)
  FUNC_11(VAR_6, VAR_6->p2p_device_vif, 0, ((void*)0));

 FUNC_7(VAR_6);


 if (FUNC_14(VAR_6) > 1)
  FUNC_20(VAR_6);

 FUNC_8(VAR_6, VAR_5);

 goto out_unlock;

out_quota_failed:
 FUNC_15(VAR_6);
 VAR_7->ap_ibss_active = 0;
 FUNC_19(VAR_6, VAR_5);
 FUNC_16(VAR_6, VAR_5);
out_unbind:
 FUNC_6(VAR_6, VAR_5);
out_remove:
 FUNC_13(VAR_6, VAR_5);
out_unlock:
 FUNC_25(&VAR_6->mutex);
 return VAR_8;
}
