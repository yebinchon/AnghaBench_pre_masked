
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_time_event_cmd {int repeat; int policy; void* duration; void* max_delay; int max_frags; void* interval; void* apply_time; void* id; void* id_and_color; void* action; } ;
struct iwl_mvm_time_event_data {scalar_t__ running; } ;
struct iwl_mvm_vif {int color; int id; struct iwl_mvm_time_event_data time_event_data; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
typedef enum ieee80211_roc_type { ____Placeholder_ieee80211_roc_type } ieee80211_roc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mvm_time_event_data*,struct iwl_time_event_cmd*) ;
 struct iwl_mvm_vif* FUNC_7 (struct ieee80211_vif*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int ) ;

int FUNC_10(struct iwl_mvm *VAR_9, struct ieee80211_vif *VAR_10,
     int VAR_11, enum ieee80211_roc_type VAR_12)
{
 struct iwl_mvm_vif *VAR_13 = FUNC_7(VAR_10);
 struct iwl_mvm_time_event_data *VAR_14 = &VAR_13->time_event_data;
 struct iwl_time_event_cmd VAR_15 = {};

 FUNC_8(&VAR_9->mutex);
 if (VAR_14->running) {
  FUNC_1(VAR_9, "P2P_DEVICE remain on channel already running\n");
  return -VAR_0;
 }

 VAR_15.action = FUNC_5(VAR_2);
 VAR_15.id_and_color =
  FUNC_5(FUNC_0(VAR_13->id, VAR_13->color));

 switch (VAR_12) {
 case 128:
  VAR_15.id = FUNC_5(VAR_4);
  break;
 case 129:
  VAR_15.id = FUNC_5(VAR_3);
  break;
 default:
  FUNC_3(1, "Got an invalid ROC type\n");
  return -VAR_1;
 }

 VAR_15.apply_time = FUNC_5(0);
 VAR_15.interval = FUNC_5(1);







 VAR_15.max_frags = FUNC_9(FUNC_2(VAR_11)/50, VAR_5);
 VAR_15.max_delay = FUNC_5(FUNC_2(VAR_11/2));
 VAR_15.duration = FUNC_5(FUNC_2(VAR_11));
 VAR_15.repeat = 1;
 VAR_15.policy = FUNC_4(VAR_7 |
          VAR_6 |
          VAR_8);

 return FUNC_6(VAR_9, VAR_10, VAR_14, &VAR_15);
}
