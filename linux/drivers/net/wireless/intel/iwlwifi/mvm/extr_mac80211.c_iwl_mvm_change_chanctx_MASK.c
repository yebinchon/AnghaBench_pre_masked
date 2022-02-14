
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct iwl_mvm_phy_ctxt {int ref; scalar_t__ width; } ;
struct iwl_mvm {int mutex; struct iwl_mvm_phy_ctxt* phy_ctxts; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_chan_def {scalar_t__ width; } ;
struct ieee80211_chanctx_conf {int rx_chains_dynamic; int rx_chains_static; struct cfg80211_chan_def min_def; struct cfg80211_chan_def def; scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_chanctx_conf*) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,struct cfg80211_chan_def*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_5,
       struct ieee80211_chanctx_conf *VAR_6,
       u32 VAR_7)
{
 struct iwl_mvm *VAR_8 = FUNC_0(VAR_5);
 u16 *VAR_9 = (u16 *)VAR_6->drv_priv;
 struct iwl_mvm_phy_ctxt *VAR_10 = &VAR_8->phy_ctxts[*VAR_9];
 bool VAR_11 = FUNC_3(VAR_8, VAR_6);
 struct cfg80211_chan_def *VAR_12 = VAR_11 ? &VAR_6->def : &VAR_6->min_def;

 if (FUNC_1((VAR_10->ref > 1) &&
        (VAR_7 & ~(VAR_3 |
       VAR_2 |
       VAR_1 |
       VAR_0)),
        "Cannot change PHY. Ref=%d, changed=0x%X\n",
        VAR_10->ref, VAR_7))
  return;

 FUNC_5(&VAR_8->mutex);


 if (VAR_7 == VAR_0) {
  if (VAR_10->width == VAR_12->width)
   goto out_unlock;


  if (VAR_10->width <= VAR_4 &&
      VAR_12->width <= VAR_4)
   goto out_unlock;
 }

 FUNC_2(VAR_8);
 FUNC_4(VAR_8, VAR_10, VAR_12,
     VAR_6->rx_chains_static,
     VAR_6->rx_chains_dynamic);

out_unlock:
 FUNC_6(&VAR_8->mutex);
}
