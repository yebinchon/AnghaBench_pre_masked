
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iwl_mvm_phy_ctxt {int ref; } ;
struct iwl_mvm {struct iwl_mvm_phy_ctxt* phy_ctxts; int mutex; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct iwl_mvm_phy_ctxt *FUNC_2(struct iwl_mvm *VAR_1)
{
 u16 VAR_2;

 FUNC_1(&VAR_1->mutex);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (!VAR_1->phy_ctxts[VAR_2].ref)
   return &VAR_1->phy_ctxts[VAR_2];

 FUNC_0(VAR_1, "No available PHY context\n");
 return ((void*)0);
}
