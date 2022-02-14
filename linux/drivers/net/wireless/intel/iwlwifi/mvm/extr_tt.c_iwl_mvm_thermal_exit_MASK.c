
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ct_kill_exit; } ;
struct iwl_mvm {int init_status; TYPE_1__ thermal_throttle; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*) ;

void FUNC_4(struct iwl_mvm *VAR_1)
{
 if (!(VAR_1->init_status & VAR_0))
  return;

 FUNC_1(&VAR_1->thermal_throttle.ct_kill_exit);
 FUNC_0(VAR_1, "Exit Thermal Throttling\n");





 VAR_1->init_status &= ~VAR_0;
}
