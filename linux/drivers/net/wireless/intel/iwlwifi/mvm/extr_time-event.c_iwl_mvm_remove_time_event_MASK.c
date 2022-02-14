
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int time_cmd ;
struct iwl_time_event_cmd {void* id; void* id_and_color; void* action; } ;
struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm_time_event_data {int dummy; } ;
struct iwl_mvm {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_mvm_time_event_data*,int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_mvm*,int ,int ,int,struct iwl_time_event_cmd*) ;
 int FUNC_6 (void*) ;

void FUNC_7(struct iwl_mvm *VAR_2,
          struct iwl_mvm_vif *VAR_3,
          struct iwl_mvm_time_event_data *VAR_4)
{
 struct iwl_time_event_cmd VAR_5 = {};
 u32 VAR_6;
 int VAR_7;

 if (!FUNC_3(VAR_2, VAR_4, &VAR_6))
  return;


 VAR_5.id = FUNC_4(VAR_6);
 VAR_5.action = FUNC_4(VAR_0);
 VAR_5.id_and_color =
  FUNC_4(FUNC_0(VAR_3->id, VAR_3->color));

 FUNC_1(VAR_2, "Removing TE 0x%x\n", FUNC_6(VAR_5.id));
 VAR_7 = FUNC_5(VAR_2, VAR_1, 0,
       sizeof(VAR_5), &VAR_5);
 if (FUNC_2(VAR_7))
  return;
}
