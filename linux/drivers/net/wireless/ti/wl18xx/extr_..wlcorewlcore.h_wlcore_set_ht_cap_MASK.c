
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int * ht_cap; } ;
struct ieee80211_sta_ht_cap {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int FUNC_0 (int *,struct ieee80211_sta_ht_cap*,int) ;

__attribute__((used)) static inline void
FUNC_1(struct wl1271 *VAR_0, enum nl80211_band VAR_1,
    struct ieee80211_sta_ht_cap *VAR_2)
{
 FUNC_0(&VAR_0->ht_cap[VAR_1], VAR_2, sizeof(*VAR_2));
}
