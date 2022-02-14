
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int id; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
typedef enum iwl_mvm_low_latency_cause { ____Placeholder_iwl_mvm_low_latency_cause } iwl_mvm_low_latency_cause ;


 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*,int,int ) ;
 int FUNC_3 (struct iwl_mvm*,int,int *) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_mvm_vif*) ;
 int FUNC_6 (struct iwl_mvm_vif*,int,int) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iwl_mvm *VAR_0, struct ieee80211_vif *VAR_1,
          bool VAR_2,
          enum iwl_mvm_low_latency_cause VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;
 bool VAR_6;

 FUNC_7(&VAR_0->mutex);

 VAR_6 = FUNC_5(VAR_4);
 FUNC_6(VAR_4, VAR_2, VAR_3);

 VAR_2 = FUNC_5(VAR_4);

 if (VAR_2 == VAR_6)
  return 0;

 FUNC_2(VAR_0, VAR_2, VAR_4->id);

 VAR_5 = FUNC_3(VAR_0, 0, ((void*)0));
 if (VAR_5)
  return VAR_5;

 FUNC_0(VAR_0);

 return FUNC_1(VAR_0);
}
