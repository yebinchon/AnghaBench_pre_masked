
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cur_fw_img; } ;
struct iwl_mvm {int rfkill_safe_init_done; TYPE_2__ fwrt; int trans; } ;
struct TYPE_5__ {scalar_t__ init_dbg; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int ) ;
 int FUNC_6 (struct iwl_mvm*,int) ;
 int FUNC_7 (struct iwl_mvm*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_10(struct iwl_mvm *VAR_4)
{
 int VAR_5;

 if (FUNC_4(VAR_4))
  return FUNC_7(VAR_4, 0);

 VAR_5 = FUNC_6(VAR_4, 0);

 if (VAR_5) {
  FUNC_0(VAR_4, "Failed to run INIT ucode: %d\n", VAR_5);

  if (VAR_3.init_dbg)
   return 0;
  return VAR_5;
 }

 FUNC_2(&VAR_4->fwrt);
 FUNC_9(VAR_4->trans);
 VAR_5 = FUNC_8(VAR_4->trans);
 if (VAR_5)
  return VAR_5;

 FUNC_1(&VAR_4->fwrt, VAR_1, ((void*)0));

 VAR_4->rfkill_safe_init_done = 0;
 VAR_5 = FUNC_5(VAR_4, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_4->rfkill_safe_init_done = 1;

 FUNC_1(&VAR_4->fwrt, VAR_0,
          ((void*)0));

 return FUNC_3(&VAR_4->fwrt, VAR_4->fwrt.cur_fw_img);
}
