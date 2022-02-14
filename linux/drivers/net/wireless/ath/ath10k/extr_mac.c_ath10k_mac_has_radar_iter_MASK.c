
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;
struct ieee80211_chanctx_conf {scalar_t__ radar_enabled; } ;



__attribute__((used)) static void FUNC_0(struct ieee80211_hw *VAR_0,
          struct ieee80211_chanctx_conf *VAR_1,
          void *VAR_2)
{
 bool *VAR_3 = VAR_2;

 if (!*VAR_3 && VAR_1->radar_enabled)
  *VAR_3 = 1;
}
