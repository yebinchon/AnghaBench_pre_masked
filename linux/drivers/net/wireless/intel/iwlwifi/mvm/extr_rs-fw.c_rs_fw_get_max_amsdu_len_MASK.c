
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_sta_vht_cap {int cap; scalar_t__ vht_supported; } ;
struct ieee80211_sta_ht_cap {int cap; scalar_t__ ht_supported; } ;
struct ieee80211_sta {struct ieee80211_sta_ht_cap ht_cap; struct ieee80211_sta_vht_cap vht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;

__attribute__((used)) static u16 FUNC_0(struct ieee80211_sta *VAR_7)
{
 const struct ieee80211_sta_vht_cap *VAR_8 = &VAR_7->vht_cap;
 const struct ieee80211_sta_ht_cap *VAR_9 = &VAR_7->ht_cap;

 if (VAR_8->vht_supported) {
  switch (VAR_8->cap & VAR_6) {
  case 129:
   return VAR_3;
  case 128:
   return VAR_5;
  default:
   return VAR_4;
 }

 } else if (VAR_9->ht_supported) {
  if (VAR_9->cap & VAR_0)





   return VAR_2;
  else
   return VAR_1;
 }


 return 0;
}
