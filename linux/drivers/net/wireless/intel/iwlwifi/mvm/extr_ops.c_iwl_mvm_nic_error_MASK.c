
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {TYPE_1__* trans; } ;
struct TYPE_2__ {int status; } ;


 struct iwl_mvm* FUNC_0 (struct iwl_op_mode*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct iwl_op_mode *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_1);

 if (!FUNC_3(VAR_0, &VAR_2->trans->status))
  FUNC_1(VAR_2);

 FUNC_2(VAR_2, 1);
}
