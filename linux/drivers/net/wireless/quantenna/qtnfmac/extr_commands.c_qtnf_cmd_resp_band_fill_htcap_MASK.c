
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_sta_ht_cap {int ht_supported; int ampdu_factor; int ampdu_density; int mcs; int cap; } ;
struct ieee80211_ht_cap {int ampdu_params_info; int mcs; int cap_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(const u8 *VAR_3,
       struct ieee80211_sta_ht_cap *VAR_4)
{
 const struct ieee80211_ht_cap *VAR_5 =
  (const struct ieee80211_ht_cap *)VAR_3;

 VAR_4->ht_supported = 1;
 VAR_4->cap = FUNC_0(VAR_5->cap_info);
 VAR_4->ampdu_factor =
  VAR_5->ampdu_params_info & VAR_2;
 VAR_4->ampdu_density =
  (VAR_5->ampdu_params_info & VAR_0) >>
  VAR_1;
 FUNC_1(&VAR_4->mcs, &VAR_5->mcs, sizeof(VAR_4->mcs));
}
