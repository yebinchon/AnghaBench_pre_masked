
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int dummy; } ;
struct iwl_mvm_time_event_data {TYPE_1__* vif; } ;
struct iwl_mvm {int status; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_1 ;
 struct iwl_mvm_time_event_data* FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_mvm_vif*,struct iwl_mvm_time_event_data*) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_mvm_vif*,struct iwl_mvm_time_event_data*) ;
 int FUNC_4 (struct iwl_mvm*) ;
 struct iwl_mvm_vif* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct iwl_mvm *VAR_2)
{
 struct iwl_mvm_vif *VAR_3;
 struct iwl_mvm_time_event_data *VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4) {
  FUNC_0(VAR_2, "No remain on channel event\n");
  return;
 }

 VAR_3 = FUNC_5(VAR_4->vif);

 if (VAR_4->vif->type == VAR_1) {
  FUNC_3(VAR_2, VAR_3, VAR_4);
  FUNC_6(VAR_0, &VAR_2->status);
 } else {
  FUNC_2(VAR_2, VAR_3, VAR_4);
 }

 FUNC_4(VAR_2);
}
