
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm_tt_mgmt {int throttle; int dynamic_smps; int ct_kill_exit; int min_backoff; int params; } ;
struct iwl_mvm {int init_status; TYPE_1__* cfg; struct iwl_mvm_tt_mgmt thermal_throttle; } ;
struct TYPE_2__ {int * thermal_params; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct iwl_mvm*) ;
 int VAR_2 ;
 int FUNC_3 (struct iwl_mvm*) ;

void FUNC_4(struct iwl_mvm *VAR_3, u32 VAR_4)
{
 struct iwl_mvm_tt_mgmt *VAR_5 = &VAR_3->thermal_throttle;

 FUNC_1(VAR_3, "Initialize Thermal Throttling\n");

 if (VAR_3->cfg->thermal_params)
  VAR_5->params = *VAR_3->cfg->thermal_params;
 else
  VAR_5->params = VAR_2;

 VAR_5->throttle = 0;
 VAR_5->dynamic_smps = 0;
 VAR_5->min_backoff = VAR_4;
 FUNC_0(&VAR_5->ct_kill_exit, VAR_1);





 VAR_3->init_status |= VAR_0;
}
