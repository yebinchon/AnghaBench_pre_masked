
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_time_event_notif {int unique_id; int action; int status; } ;
struct iwl_mvm_time_event_data {int end_jiffies; int running; scalar_t__ id; TYPE_1__* vif; int duration; } ;
struct iwl_mvm {int hw; int status; int time_event_lock; } ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*) ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct iwl_mvm*) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*,TYPE_1__*,char const*) ;
 int FUNC_8 (struct iwl_mvm*,struct iwl_time_event_notif*,struct iwl_mvm_time_event_data*) ;
 int FUNC_9 (struct iwl_mvm*,struct iwl_mvm_time_event_data*) ;
 int FUNC_10 (struct iwl_mvm*,struct iwl_mvm_time_event_data*,struct iwl_time_event_notif*) ;
 int VAR_5 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(struct iwl_mvm *VAR_6,
        struct iwl_mvm_time_event_data *VAR_7,
        struct iwl_time_event_notif *VAR_8)
{
 FUNC_12(&VAR_6->time_event_lock);

 FUNC_0(VAR_6, "Handle time event notif - UID = 0x%x action %d\n",
       FUNC_11(VAR_8->unique_id),
       FUNC_11(VAR_8->action));

 FUNC_8(VAR_6, VAR_8, VAR_7);
 if (!FUNC_11(VAR_8->status)) {
  const char *VAR_9;

  if (VAR_8->action & FUNC_3(VAR_4))
   VAR_9 = "Time Event start notification failure";
  else
   VAR_9 = "Time Event end notification failure";

  FUNC_0(VAR_6, "%s\n", VAR_9);

  if (FUNC_7(VAR_6, VAR_7->vif, VAR_9)) {
   FUNC_9(VAR_6, VAR_7);
   return;
  }
 }

 if (FUNC_11(VAR_8->action) & VAR_3) {
  FUNC_0(VAR_6,
        "TE ended - current time %lu, estimated end %lu\n",
        VAR_5, VAR_7->end_jiffies);

  switch (VAR_7->vif->type) {
  case 129:
   FUNC_5(VAR_6->hw);
   FUNC_13(VAR_0, &VAR_6->status);
   FUNC_6(VAR_6);
   break;
  case 128:




   FUNC_7(VAR_6, VAR_7->vif,
    "No beacon heard and the time event is over already...");
   break;
  default:
   break;
  }

  FUNC_9(VAR_6, VAR_7);
 } else if (FUNC_11(VAR_8->action) & VAR_4) {
  VAR_7->running = 1;
  VAR_7->end_jiffies = FUNC_2(VAR_7->duration);

  if (VAR_7->vif->type == 129) {
   FUNC_13(VAR_1, &VAR_6->status);
   FUNC_4(VAR_6->hw);
  } else if (VAR_7->id == VAR_2) {
   FUNC_10(VAR_6, VAR_7, VAR_8);
  }
 } else {
  FUNC_1(VAR_6, "Got TE with unknown action\n");
 }
}
