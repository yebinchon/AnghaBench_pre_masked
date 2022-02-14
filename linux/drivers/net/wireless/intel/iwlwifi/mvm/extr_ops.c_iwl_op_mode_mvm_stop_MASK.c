
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_op_mode {int dummy; } ;
struct TYPE_4__ {int work; } ;
struct iwl_mvm {int hw; int mutex; int fwrt; TYPE_2__ tcm; TYPE_1__* nvm_sections; int * nvm_data; int * phy_db; int trans; int * error_recovery_buf; int * mcast_filter_cmd; int * scan_cmd; } ;
struct TYPE_3__ {int * data; } ;


 struct iwl_mvm* FUNC_0 (struct iwl_op_mode*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct iwl_op_mode *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 FUNC_5(VAR_2);

 FUNC_6(VAR_2);

 FUNC_3(VAR_2->hw);

 FUNC_9(VAR_2->scan_cmd);
 FUNC_9(VAR_2->mcast_filter_cmd);
 VAR_2->mcast_filter_cmd = ((void*)0);

 FUNC_9(VAR_2->error_recovery_buf);
 VAR_2->error_recovery_buf = ((void*)0);

 FUNC_8(VAR_2->trans);

 FUNC_7(VAR_2->phy_db);
 VAR_2->phy_db = ((void*)0);

 FUNC_9(VAR_2->nvm_data);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_9(VAR_2->nvm_sections[VAR_3].data);

 FUNC_1(&VAR_2->tcm.work);

 FUNC_4(&VAR_2->fwrt);
 FUNC_10(&VAR_2->mutex);

 FUNC_2(VAR_2->hw);
}
