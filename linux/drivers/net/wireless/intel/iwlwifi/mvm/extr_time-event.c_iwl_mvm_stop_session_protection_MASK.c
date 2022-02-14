
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_mvm_time_event_data {scalar_t__ id; } ;
struct iwl_mvm_vif {struct iwl_mvm_time_event_data time_event_data; } ;
struct iwl_mvm {int time_event_lock; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mvm_vif*,struct iwl_mvm_time_event_data*) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct iwl_mvm *VAR_1,
         struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_2(VAR_2);
 struct iwl_mvm_time_event_data *VAR_4 = &VAR_3->time_event_data;
 u32 VAR_5;

 FUNC_3(&VAR_1->mutex);

 FUNC_4(&VAR_1->time_event_lock);
 VAR_5 = VAR_4->id;
 FUNC_5(&VAR_1->time_event_lock);

 if (VAR_5 != VAR_0) {
  FUNC_0(VAR_1,
        "don't remove TE with id=%u (not session protection)\n",
        VAR_5);
  return;
 }

 FUNC_1(VAR_1, VAR_3, VAR_4);
}
