
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vht_cap {int supp_mcs; int vht_cap_info; } ;
struct ieee80211_sta_vht_cap {int vht_mcs; int cap; } ;
struct ieee80211_sta {int bandwidth; int rx_nss; struct ieee80211_sta_vht_cap vht_cap; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_vht_cap*,int ,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct ieee80211_sta *VAR_5)
{
 struct ieee80211_sta_vht_cap *VAR_6 = &VAR_5->vht_cap;
 struct ieee80211_vht_cap VAR_7 = {
  .vht_cap_info = FUNC_0(VAR_6->cap),
  .supp_mcs = VAR_6->vht_mcs,
 };

 switch (VAR_5->bandwidth) {
 case 131:
  if (FUNC_1(&VAR_7,
           VAR_0,
           0, 1) < VAR_5->rx_nss)
   return VAR_4;
  return VAR_1;
 case 128:
  return VAR_4;
 case 129:
  return VAR_3;
 case 130:
 default:
  return VAR_2;
 }
}
