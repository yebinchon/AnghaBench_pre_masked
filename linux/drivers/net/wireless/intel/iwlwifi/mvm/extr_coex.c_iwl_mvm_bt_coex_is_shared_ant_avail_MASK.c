
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bt_activity_grading; } ;
struct iwl_mvm {TYPE_2__ last_bt_notif; TYPE_1__* cfg; } ;
struct TYPE_3__ {scalar_t__ bt_shared_single_ant; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

bool FUNC_1(struct iwl_mvm *VAR_1)
{

 if (VAR_1->cfg->bt_shared_single_ant)
  return 1;

 return FUNC_0(VAR_1->last_bt_notif.bt_activity_grading) < VAR_0;
}
