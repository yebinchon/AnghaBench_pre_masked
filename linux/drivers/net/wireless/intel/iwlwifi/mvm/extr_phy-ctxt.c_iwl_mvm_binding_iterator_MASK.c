
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_vif {TYPE_1__* phy_ctxt; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_2__ {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,unsigned long*) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, u8 *VAR_3,
         struct ieee80211_vif *VAR_4)
{
 unsigned long *VAR_5 = VAR_2;
 struct iwl_mvm_vif *VAR_6 = FUNC_1(VAR_4);

 if (!VAR_6->phy_ctxt)
  return;

 if (VAR_4->type == VAR_1 ||
     VAR_4->type == VAR_0)
  FUNC_0(VAR_6->phy_ctxt->id, VAR_5);
}
