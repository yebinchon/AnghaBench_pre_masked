
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;
struct ieee80211_channel {size_t hw_value; } ;
struct cfg80211_chan_def {struct ieee80211_channel* chan; } ;
struct ath_hw {struct ath9k_channel* channels; } ;
struct ath9k_channel {int dummy; } ;


 int FUNC_0 (struct ath9k_channel*,struct cfg80211_chan_def*) ;

struct ath9k_channel *FUNC_1(struct ieee80211_hw *VAR_0,
         struct ath_hw *VAR_1,
         struct cfg80211_chan_def *VAR_2)
{
 struct ieee80211_channel *VAR_3 = VAR_2->chan;
 struct ath9k_channel *VAR_4;

 VAR_4 = &VAR_1->channels[VAR_3->hw_value];
 FUNC_0(VAR_4, VAR_2);

 return VAR_4;
}
