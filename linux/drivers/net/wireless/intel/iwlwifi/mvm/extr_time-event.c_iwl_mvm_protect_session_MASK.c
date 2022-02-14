
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_time_event_cmd {int repeat; int policy; void* duration; void* interval; void* max_delay; int max_frags; void* apply_time; void* id; void* id_and_color; void* action; } ;
struct iwl_notification_wait {int dummy; } ;
struct iwl_mvm_time_event_data {scalar_t__ end_jiffies; int uid; scalar_t__ running; } ;
struct iwl_mvm_vif {int color; int id; struct iwl_mvm_time_event_data time_event_data; } ;
struct iwl_mvm {int notif_wait; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct iwl_mvm*,char*,int ,...) ;
 int FUNC_3 (struct iwl_mvm*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int *,struct iwl_notification_wait*,int const*,int ,int ,struct iwl_mvm_time_event_data*) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mvm_time_event_data*,struct iwl_time_event_cmd*) ;
 struct iwl_mvm_vif* FUNC_11 (struct ieee80211_vif*) ;
 int FUNC_12 (int *,struct iwl_notification_wait*) ;
 scalar_t__ FUNC_13 (int *,struct iwl_notification_wait*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;

void FUNC_17(struct iwl_mvm *VAR_9,
        struct ieee80211_vif *VAR_10,
        u32 VAR_11, u32 VAR_12,
        u32 VAR_13, bool VAR_14)
{
 struct iwl_mvm_vif *VAR_15 = FUNC_11(VAR_10);
 struct iwl_mvm_time_event_data *VAR_16 = &VAR_15->time_event_data;
 const u16 VAR_17[] = { VAR_6 };
 struct iwl_notification_wait VAR_18;
 struct iwl_time_event_cmd VAR_19 = {};

 FUNC_15(&VAR_9->mutex);

 if (VAR_16->running &&
     FUNC_16(VAR_16->end_jiffies, FUNC_4(VAR_12))) {
  FUNC_2(VAR_9, "We have enough time in the current TE: %u\n",
        FUNC_14(VAR_16->end_jiffies - VAR_8));
  return;
 }

 if (VAR_16->running) {
  FUNC_2(VAR_9, "extend 0x%x: only %u ms left\n",
        VAR_16->uid,
        FUNC_14(VAR_16->end_jiffies - VAR_8));
  FUNC_9(VAR_9, VAR_10);
 }

 VAR_19.action = FUNC_7(VAR_0);
 VAR_19.id_and_color =
  FUNC_7(FUNC_1(VAR_15->id, VAR_15->color));
 VAR_19.id = FUNC_7(VAR_1);

 VAR_19.apply_time = FUNC_7(0);

 VAR_19.max_frags = VAR_2;
 VAR_19.max_delay = FUNC_7(VAR_13);

 VAR_19.interval = FUNC_7(1);
 VAR_19.duration = FUNC_7(VAR_11);
 VAR_19.repeat = 1;
 VAR_19.policy = FUNC_6(VAR_4 |
          VAR_3 |
          VAR_5);

 if (!VAR_14) {
  FUNC_10(VAR_9, VAR_10, VAR_16, &VAR_19);
  return;
 }





 FUNC_8(&VAR_9->notif_wait, &VAR_18,
       VAR_17,
       FUNC_0(VAR_17),
       VAR_7, VAR_16);


 if (FUNC_10(VAR_9, VAR_10, VAR_16, &VAR_19)) {
  FUNC_3(VAR_9, "Failed to add TE to protect session\n");
  FUNC_12(&VAR_9->notif_wait, &VAR_18);
 } else if (FUNC_13(&VAR_9->notif_wait, &VAR_18,
      FUNC_5(VAR_13))) {
  FUNC_3(VAR_9, "Failed to protect session until TE\n");
 }
}
