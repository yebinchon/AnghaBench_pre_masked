
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vht_cap {int supp_mcs; int vht_cap_info; } ;
struct ieee80211_sta_vht_cap {int vht_supported; int vht_mcs; int cap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(const u8 *VAR_0,
        struct ieee80211_sta_vht_cap *VAR_1)
{
 const struct ieee80211_vht_cap *VAR_2 =
  (const struct ieee80211_vht_cap *)VAR_0;

 VAR_1->vht_supported = 1;
 VAR_1->cap = FUNC_0(VAR_2->vht_cap_info);
 FUNC_1(&VAR_1->vht_mcs, &VAR_2->supp_mcs, sizeof(VAR_1->vht_mcs));
}
