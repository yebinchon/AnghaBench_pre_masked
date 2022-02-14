
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int chanctx_conf; } ;
struct cfg80211_chan_def {int dummy; } ;
struct ieee80211_chanctx_conf {struct cfg80211_chan_def def; } ;


 int VAR_0 ;
 struct ieee80211_chanctx_conf* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct ieee80211_vif *VAR_1,
   struct cfg80211_chan_def *VAR_2)
{
 struct ieee80211_chanctx_conf *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_1->chanctx_conf);
 if (!VAR_3) {
  FUNC_2();
  return -VAR_0;
 }

 *VAR_2 = VAR_3->def;
 FUNC_2();

 return 0;
}
