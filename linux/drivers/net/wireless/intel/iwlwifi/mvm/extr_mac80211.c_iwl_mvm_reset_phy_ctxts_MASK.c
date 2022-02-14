
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {TYPE_1__* phy_ctxts; } ;
struct TYPE_2__ {int id; scalar_t__ ref; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct iwl_mvm *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->phy_ctxts, 0, sizeof(VAR_1->phy_ctxts));
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->phy_ctxts[VAR_2].id = VAR_2;
  VAR_1->phy_ctxts[VAR_2].ref = 0;
 }
}
