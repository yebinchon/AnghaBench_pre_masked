
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_phy_ctxt {int ref; } ;
struct iwl_mvm {int mutex; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct iwl_mvm *VAR_0, struct iwl_mvm_phy_ctxt *VAR_1)
{
 FUNC_0(&VAR_0->mutex);
 VAR_1->ref++;
}
