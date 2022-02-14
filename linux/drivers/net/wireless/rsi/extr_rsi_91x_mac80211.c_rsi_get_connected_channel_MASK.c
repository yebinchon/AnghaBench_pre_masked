
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct ieee80211_channel* chan; } ;
struct ieee80211_bss_conf {TYPE_1__ chandef; } ;
struct ieee80211_vif {struct ieee80211_bss_conf bss_conf; } ;
struct ieee80211_channel {int hw_value; } ;



u16 FUNC_0(struct ieee80211_vif *VAR_0)
{
 struct ieee80211_bss_conf *VAR_1;
 struct ieee80211_channel *VAR_2;

 if (!VAR_0)
  return 0;

 VAR_1 = &VAR_0->bss_conf;
 VAR_2 = VAR_1->chandef.chan;

 if (!VAR_2)
  return 0;

 return VAR_2->hw_value;
}
