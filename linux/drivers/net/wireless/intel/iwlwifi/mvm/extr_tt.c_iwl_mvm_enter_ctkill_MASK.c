
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ct_kill_duration; } ;
struct iwl_mvm_tt_mgmt {int throttle; int dynamic_smps; int ct_kill_exit; TYPE_1__ params; } ;
struct iwl_mvm {int temperature_test; int status; struct iwl_mvm_tt_mgmt thermal_throttle; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct iwl_mvm *VAR_2)
{
 struct iwl_mvm_tt_mgmt *VAR_3 = &VAR_2->thermal_throttle;
 u32 VAR_4 = VAR_3->params.ct_kill_duration;

 if (FUNC_5(VAR_1, &VAR_2->status))
  return;

 FUNC_0(VAR_2, "Enter CT Kill\n");
 FUNC_2(VAR_2, 1);

 if (!FUNC_1(VAR_2)) {
  VAR_3->throttle = 0;
  VAR_3->dynamic_smps = 0;
 }





 if (!VAR_2->temperature_test)
  FUNC_4(&VAR_3->ct_kill_exit,
          FUNC_3(VAR_4 * VAR_0));
}
