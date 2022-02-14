
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_mvm_phy_ctxt {int id; } ;
struct iwl_mvm {int mutex; } ;
struct cfg80211_chan_def {int dummy; } ;
struct ieee80211_chanctx_conf {int rx_chains_dynamic; int rx_chains_static; struct cfg80211_chan_def min_def; struct cfg80211_chan_def def; scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 struct iwl_mvm_phy_ctxt* FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_chanctx_conf*) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,struct cfg80211_chan_def*,int ,int ) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_1,
     struct ieee80211_chanctx_conf *VAR_2)
{
 u16 *VAR_3 = (u16 *)VAR_2->drv_priv;
 struct iwl_mvm_phy_ctxt *VAR_4;
 bool VAR_5 = FUNC_3(VAR_1, VAR_2);
 struct cfg80211_chan_def *VAR_6 = VAR_5 ? &VAR_2->def : &VAR_2->min_def;
 int VAR_7;

 FUNC_6(&VAR_1->mutex);

 FUNC_0(VAR_1, "Add channel context\n");

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_4(VAR_1, VAR_4, VAR_6,
           VAR_2->rx_chains_static,
           VAR_2->rx_chains_dynamic);
 if (VAR_7) {
  FUNC_1(VAR_1, "Failed to add PHY context\n");
  goto out;
 }

 FUNC_5(VAR_1, VAR_4);
 *VAR_3 = VAR_4->id;
out:
 return VAR_7;
}
