
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iwl_mvm_vif {struct iwl_mvm* mvm; } ;
struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {size_t dbgfs_rx_phyinfo; int mutex; struct iwl_mvm_phy_ctxt* phy_ctxts; } ;
struct ieee80211_vif {int chanctx_conf; } ;
struct ieee80211_chanctx_conf {int rx_chains_dynamic; int rx_chains_static; int min_def; scalar_t__ drv_priv; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,int *,int ,int ) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (char*,int ,size_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ieee80211_chanctx_conf* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static ssize_t FUNC_8(struct ieee80211_vif *VAR_1, char *VAR_2,
       size_t VAR_3, loff_t *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_1(VAR_1);
 struct iwl_mvm *VAR_6 = VAR_5->mvm;
 struct ieee80211_chanctx_conf *VAR_7;
 struct iwl_mvm_phy_ctxt *VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_2, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_3(&VAR_6->mutex);
 FUNC_6();

 VAR_7 = FUNC_5(VAR_1->chanctx_conf);

 if (!VAR_7) {
  FUNC_7();
  FUNC_4(&VAR_6->mutex);
  return -VAR_0;
 }

 VAR_8 = &VAR_6->phy_ctxts[*(u16 *)VAR_7->drv_priv];
 FUNC_7();

 VAR_6->dbgfs_rx_phyinfo = VAR_9;

 VAR_10 = FUNC_0(VAR_6, VAR_8, &VAR_7->min_def,
           VAR_7->rx_chains_static,
           VAR_7->rx_chains_dynamic);
 FUNC_4(&VAR_6->mutex);

 return VAR_10 ?: VAR_3;
}
