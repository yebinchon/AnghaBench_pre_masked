
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_phy_ctxt {int channel; scalar_t__ ref; } ;
struct iwl_mvm {int mutex; int status; } ;
struct cfg80211_chan_def {int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,struct cfg80211_chan_def*,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct iwl_mvm *VAR_2, struct iwl_mvm_phy_ctxt *VAR_3,
    struct cfg80211_chan_def *VAR_4,
    u8 VAR_5, u8 VAR_6)
{
 FUNC_0(!FUNC_3(VAR_1, &VAR_2->status) &&
  VAR_3->ref);
 FUNC_2(&VAR_2->mutex);

 VAR_3->channel = VAR_4->chan;

 return FUNC_1(VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6,
          VAR_0, 0);
}
