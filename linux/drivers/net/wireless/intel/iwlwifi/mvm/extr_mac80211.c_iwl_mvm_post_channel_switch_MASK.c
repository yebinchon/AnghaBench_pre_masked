
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int csa_failed; int csa_bcn_pending; int ps_disabled; int ap_sta_id; } ;
struct iwl_mvm_sta {int dummy; } ;
struct iwl_mvm {int mutex; TYPE_1__* fw; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,int,int *) ;
 int FUNC_5 (struct iwl_mvm*) ;
 struct iwl_mvm_sta* FUNC_6 (struct iwl_mvm*,int ) ;
 int FUNC_7 (struct iwl_mvm*,struct iwl_mvm_sta*,int) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_9 (struct ieee80211_vif*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_hw *VAR_3,
           struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_9(VAR_4);
 struct iwl_mvm *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 FUNC_10(&VAR_6->mutex);

 if (VAR_5->csa_failed) {
  VAR_5->csa_failed = 0;
  VAR_7 = -VAR_0;
  goto out_unlock;
 }

 if (VAR_4->type == VAR_2) {
  struct iwl_mvm_sta *VAR_8;

  VAR_5->csa_bcn_pending = 0;
  VAR_8 = FUNC_6(VAR_6,
         VAR_5->ap_sta_id);

  if (FUNC_1(!VAR_8)) {
   VAR_7 = -VAR_0;
   goto out_unlock;
  }

  if (!FUNC_2(&VAR_6->fw->ucode_capa,
     VAR_1))
   FUNC_7(VAR_6, VAR_8, 0);

  FUNC_4(VAR_6, VAR_4, 0, ((void*)0));

  if (!FUNC_2(&VAR_6->fw->ucode_capa,
     VAR_1)) {
   VAR_7 = FUNC_3(VAR_6, VAR_4, 0);
   if (VAR_7)
    goto out_unlock;

   FUNC_8(VAR_6, VAR_4);
  }
 }

 VAR_5->ps_disabled = 0;

 VAR_7 = FUNC_5(VAR_6);

out_unlock:
 FUNC_11(&VAR_6->mutex);

 return VAR_7;
}
