
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
struct ieee80211_chanctx_conf {struct cfg80211_chan_def def; } ;



__attribute__((used)) static void
FUNC_0(struct ieee80211_hw *VAR_0,
    struct ieee80211_chanctx_conf *VAR_1,
    void *VAR_2)
{
 struct cfg80211_chan_def **VAR_3 = VAR_2;

 *VAR_3 = &VAR_1->def;
}
