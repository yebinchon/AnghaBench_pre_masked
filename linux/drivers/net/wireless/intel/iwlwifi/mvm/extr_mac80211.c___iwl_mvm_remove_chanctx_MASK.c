
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {int mutex; struct iwl_mvm_phy_ctxt* phy_ctxts; } ;
struct ieee80211_chanctx_conf {scalar_t__ drv_priv; } ;


 int FUNC_0 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_0,
         struct ieee80211_chanctx_conf *VAR_1)
{
 u16 *VAR_2 = (u16 *)VAR_1->drv_priv;
 struct iwl_mvm_phy_ctxt *VAR_3 = &VAR_0->phy_ctxts[*VAR_2];

 FUNC_1(&VAR_0->mutex);

 FUNC_0(VAR_0, VAR_3);
}
