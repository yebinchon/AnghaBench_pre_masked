
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int chanctx_conf; } ;
struct ieee80211_channel {int flags; } ;
struct TYPE_2__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_1__ def; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct ieee80211_chanctx_conf* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(struct ieee80211_vif *VAR_1)
{
 struct ieee80211_chanctx_conf *VAR_2;
 struct ieee80211_channel *VAR_3;
 bool VAR_4 = 0;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_1->chanctx_conf);
 FUNC_0(!VAR_2);
 if (VAR_2) {
  VAR_3 = VAR_2->def.chan;
  VAR_4 = VAR_3->flags & VAR_0;
 }
 FUNC_3();

 return VAR_4;
}
