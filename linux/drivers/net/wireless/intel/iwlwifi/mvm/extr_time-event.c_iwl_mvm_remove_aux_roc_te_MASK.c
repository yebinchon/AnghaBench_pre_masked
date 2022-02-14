
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm_time_event_data {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_hs20_roc_req {void* event_unique_id; void* id_and_color; void* action; } ;
typedef int aux_cmd ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_mvm_time_event_data*,int *) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*,int ,int ,scalar_t__,struct iwl_hs20_roc_req*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static void FUNC_8(struct iwl_mvm *VAR_2,
          struct iwl_mvm_vif *VAR_3,
          struct iwl_mvm_time_event_data *VAR_4)
{
 struct iwl_hs20_roc_req VAR_5 = {};
 u16 VAR_6 = sizeof(VAR_5) - FUNC_5(VAR_2);

 u32 VAR_7;
 int VAR_8;

 if (!FUNC_3(VAR_2, VAR_4, &VAR_7))
  return;

 VAR_5.event_unique_id = FUNC_4(VAR_7);
 VAR_5.action = FUNC_4(VAR_0);
 VAR_5.id_and_color =
  FUNC_4(FUNC_0(VAR_3->id, VAR_3->color));
 FUNC_1(VAR_2, "Removing BSS AUX ROC TE 0x%x\n",
       FUNC_7(VAR_5.event_unique_id));
 VAR_8 = FUNC_6(VAR_2, VAR_1, 0,
       VAR_6, &VAR_5);

 if (FUNC_2(VAR_8))
  return;
}
