
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {scalar_t__ center_freq; } ;



__attribute__((used)) static bool FUNC_0(struct ieee80211_channel *VAR_0,
          struct ieee80211_channel *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return 0;

 return VAR_0->center_freq == VAR_1->center_freq;
}
