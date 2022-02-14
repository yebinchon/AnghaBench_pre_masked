
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac80211_hwsim_data {int roc_duration; int roc_start; int mutex; struct ieee80211_channel* roc_chan; scalar_t__ hw_scan_request; scalar_t__ tmp_chan; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int wiphy; struct mac80211_hwsim_data* priv; } ;
struct ieee80211_channel {int center_freq; } ;
typedef enum ieee80211_roc_type { ____Placeholder_ieee80211_roc_type } ieee80211_roc_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_2,
         struct ieee80211_vif *VAR_3,
         struct ieee80211_channel *VAR_4,
         int VAR_5,
         enum ieee80211_roc_type VAR_6)
{
 struct mac80211_hwsim_data *VAR_7 = VAR_2->priv;

 FUNC_2(&VAR_7->mutex);
 if (FUNC_0(VAR_7->tmp_chan || VAR_7->hw_scan_request)) {
  FUNC_3(&VAR_7->mutex);
  return -VAR_0;
 }

 VAR_7->roc_chan = VAR_4;
 VAR_7->roc_duration = VAR_5;
 FUNC_3(&VAR_7->mutex);

 FUNC_4(VAR_2->wiphy, "hwsim ROC (%d MHz, %d ms)\n",
    VAR_4->center_freq, VAR_5);
 FUNC_1(VAR_2, &VAR_7->roc_start, VAR_1/50);

 return 0;
}
