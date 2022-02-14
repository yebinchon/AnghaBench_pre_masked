
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_time_event_notif {int status; int action; } ;
struct iwl_mvm_time_event_data {int id; int vif; } ;
struct iwl_mvm {int fwrt; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_time_event {TYPE_1__* time_events; } ;
struct TYPE_2__ {int status_bitmap; int action_bitmap; int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct iwl_fw_dbg_trigger_tlv*,char*,int,int,int) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct iwl_mvm *VAR_1,
         struct iwl_time_event_notif *VAR_2,
         struct iwl_mvm_time_event_data *VAR_3)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_4;
 struct iwl_fw_dbg_trigger_time_event *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(&VAR_1->fwrt,
         FUNC_2(VAR_3->vif),
         VAR_0);
 if (!VAR_4)
  return;

 VAR_5 = (void *)VAR_4->data;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->time_events); VAR_6++) {
  u32 VAR_7 = FUNC_5(VAR_5->time_events[VAR_6].id);
  u32 VAR_8 =
   FUNC_5(VAR_5->time_events[VAR_6].action_bitmap);
  u32 VAR_9 =
   FUNC_5(VAR_5->time_events[VAR_6].status_bitmap);

  if (VAR_7 != VAR_3->id ||
      !(VAR_8 & FUNC_5(VAR_2->action)) ||
      !(VAR_9 & FUNC_1(FUNC_5(VAR_2->status))))
   continue;

  FUNC_3(&VAR_1->fwrt, VAR_4,
     "Time event %d Action 0x%x received status: %d",
     VAR_3->id,
     FUNC_5(VAR_2->action),
     FUNC_5(VAR_2->status));
  break;
 }
}
