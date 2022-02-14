
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm {int fwrt; TYPE_2__* trans; } ;
struct TYPE_3__ {scalar_t__* lmac_error_event_table; } ;
struct TYPE_4__ {TYPE_1__ dbg; int status; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_mvm*,int) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct iwl_mvm *VAR_1)
{
 if (!FUNC_4(VAR_0, &VAR_1->trans->status)) {
  FUNC_0(VAR_1,
   "DEVICE_ENABLED bit is not set. Aborting dump.\n");
  return;
 }

 FUNC_2(VAR_1, 0);

 if (VAR_1->trans->dbg.lmac_error_event_table[1])
  FUNC_2(VAR_1, 1);

 FUNC_3(VAR_1);

 FUNC_1(&VAR_1->fwrt);
}
