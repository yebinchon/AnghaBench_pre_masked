
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_vif {int low_latency; size_t id; } ;
struct iwl_mvm_tcm_iter_data {int any_sent; struct iwl_mvm* mvm; } ;
struct TYPE_3__ {int* low_latency; int * change; } ;
struct TYPE_4__ {TYPE_1__ result; } ;
struct iwl_mvm {TYPE_2__ tcm; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,int,int) ;
 int FUNC_1 (struct iwl_mvm*,int,int *) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, u8 *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm_tcm_iter_data *VAR_5 = VAR_2;
 struct iwl_mvm *VAR_6 = VAR_5->mvm;
 struct iwl_mvm_vif *VAR_7 = FUNC_2(VAR_4);
 bool VAR_8, VAR_9 = VAR_7->low_latency & VAR_0;

 if (VAR_7->id >= VAR_1)
  return;

 VAR_8 = VAR_6->tcm.result.low_latency[VAR_7->id];

 if (!VAR_6->tcm.result.change[VAR_7->id] &&
     VAR_9 == VAR_8) {
  FUNC_1(VAR_6, 0, ((void*)0));
  return;
 }

 if (VAR_9 != VAR_8) {

  FUNC_0(VAR_6, VAR_4, VAR_8,
        VAR_0);
 } else {
  FUNC_1(VAR_6, 0, ((void*)0));
 }

 VAR_5->any_sent = 1;
}
