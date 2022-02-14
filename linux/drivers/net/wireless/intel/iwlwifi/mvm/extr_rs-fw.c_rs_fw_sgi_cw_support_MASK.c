
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_sta_vht_cap {int cap; } ;
struct ieee80211_sta_ht_cap {int cap; } ;
struct ieee80211_sta_he_cap {scalar_t__ has_he; } ;
struct ieee80211_sta {struct ieee80211_sta_he_cap he_cap; struct ieee80211_sta_vht_cap vht_cap; struct ieee80211_sta_ht_cap ht_cap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static u8 FUNC_1(struct ieee80211_sta *VAR_8)
{
 struct ieee80211_sta_ht_cap *VAR_9 = &VAR_8->ht_cap;
 struct ieee80211_sta_vht_cap *VAR_10 = &VAR_8->vht_cap;
 struct ieee80211_sta_he_cap *VAR_11 = &VAR_8->he_cap;
 u8 VAR_12 = 0;

 if (VAR_11->has_he)
  return 0;

 if (VAR_9->cap & VAR_0)
  VAR_12 |= FUNC_0(VAR_5);
 if (VAR_9->cap & VAR_1)
  VAR_12 |= FUNC_0(VAR_6);
 if (VAR_10->cap & VAR_3)
  VAR_12 |= FUNC_0(VAR_7);
 if (VAR_10->cap & VAR_2)
  VAR_12 |= FUNC_0(VAR_4);

 return VAR_12;
}
