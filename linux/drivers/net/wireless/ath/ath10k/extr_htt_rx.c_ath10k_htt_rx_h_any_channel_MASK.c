
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct cfg80211_chan_def {struct ieee80211_channel* chan; } ;
struct ath10k {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct cfg80211_chan_def*) ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_1(struct ath10k *VAR_1)
{
 struct cfg80211_chan_def VAR_2 = {};

 FUNC_0(VAR_1->hw,
         VAR_0,
         &VAR_2);

 return VAR_2.chan;
}
