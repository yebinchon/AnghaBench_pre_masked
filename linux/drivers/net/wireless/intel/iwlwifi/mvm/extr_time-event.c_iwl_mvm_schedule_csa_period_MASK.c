
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_time_event_cmd {int repeat; int policy; void* interval; void* duration; int max_frags; void* apply_time; void* id; void* id_and_color; void* action; } ;
struct iwl_mvm_time_event_data {scalar_t__ id; scalar_t__ running; } ;
struct iwl_mvm_vif {int color; int id; struct iwl_mvm_time_event_data time_event_data; } ;
struct iwl_mvm {int time_event_lock; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mvm_vif*,struct iwl_mvm_time_event_data*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mvm_time_event_data*,struct iwl_time_event_cmd*) ;
 struct iwl_mvm_vif* FUNC_6 (struct ieee80211_vif*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct iwl_mvm *VAR_7,
    struct ieee80211_vif *VAR_8,
    u32 VAR_9, u32 VAR_10)
{
 struct iwl_mvm_vif *VAR_11 = FUNC_6(VAR_8);
 struct iwl_mvm_time_event_data *VAR_12 = &VAR_11->time_event_data;
 struct iwl_time_event_cmd VAR_13 = {};

 FUNC_7(&VAR_7->mutex);

 if (VAR_12->running) {
  u32 VAR_14;

  FUNC_8(&VAR_7->time_event_lock);
  VAR_14 = VAR_12->id;
  FUNC_9(&VAR_7->time_event_lock);

  if (VAR_14 == VAR_2) {
   FUNC_1(VAR_7, "CS period is already scheduled\n");
   return -VAR_0;
  }






  FUNC_4(VAR_7, VAR_11, VAR_12);
 }

 VAR_13.action = FUNC_3(VAR_1);
 VAR_13.id_and_color =
  FUNC_3(FUNC_0(VAR_11->id, VAR_11->color));
 VAR_13.id = FUNC_3(VAR_2);
 VAR_13.apply_time = FUNC_3(VAR_10);
 VAR_13.max_frags = VAR_4;
 VAR_13.duration = FUNC_3(VAR_9);
 VAR_13.repeat = 1;
 VAR_13.interval = FUNC_3(1);
 VAR_13.policy = FUNC_2(VAR_5 |
          VAR_3);
 if (!VAR_10)
  VAR_13.policy |= FUNC_2(VAR_6);

 return FUNC_5(VAR_7, VAR_8, VAR_12, &VAR_13);
}
