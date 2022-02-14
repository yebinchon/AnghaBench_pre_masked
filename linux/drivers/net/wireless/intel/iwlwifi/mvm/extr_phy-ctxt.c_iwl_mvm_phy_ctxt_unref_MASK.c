
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm_phy_ctxt {scalar_t__ ref; } ;
struct iwl_mvm {TYPE_2__* hw; int mutex; } ;
struct ieee80211_supported_band {struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cfg80211_chan_def*,struct ieee80211_channel*,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,struct cfg80211_chan_def*,int,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct iwl_mvm *VAR_3, struct iwl_mvm_phy_ctxt *VAR_4)
{
 FUNC_4(&VAR_3->mutex);

 if (FUNC_1(!VAR_4))
  return;

 VAR_4->ref--;






 if (VAR_4->ref == 0) {
  struct ieee80211_channel *VAR_5;
  struct cfg80211_chan_def VAR_6;
  struct ieee80211_supported_band *VAR_7 = ((void*)0);
  enum nl80211_band VAR_8 = VAR_0;

  while (!VAR_7 && VAR_8 < VAR_2)
   VAR_7 = VAR_3->hw->wiphy->bands[VAR_8++];

  if (FUNC_0(!VAR_7))
   return;

  VAR_5 = &VAR_7->channels[0];

  FUNC_2(&VAR_6, VAR_5, VAR_1);
  FUNC_3(VAR_3, VAR_4, &VAR_6, 1, 1);
 }
}
