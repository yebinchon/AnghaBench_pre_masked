
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_nvm_data {struct ieee80211_channel* channels; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int band; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;



int FUNC_0(struct iwl_nvm_data *VAR_0,
       struct ieee80211_supported_band *VAR_1,
       int VAR_2, enum nl80211_band VAR_3)
{
 struct ieee80211_channel *VAR_4 = &VAR_0->channels[0];
 int VAR_5 = 0, VAR_6 = 0;

 while (VAR_6 < VAR_2 && VAR_4->band != VAR_3)
  VAR_4 = &VAR_0->channels[++VAR_6];

 VAR_1->channels = &VAR_0->channels[VAR_6];

 while (VAR_6 < VAR_2 && VAR_4->band == VAR_3) {
  VAR_4 = &VAR_0->channels[++VAR_6];
  VAR_5++;
 }

 VAR_1->n_channels = VAR_5;

 return VAR_5;
}
