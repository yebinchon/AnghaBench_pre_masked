
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_lq_sta {int active_mimo2_rate; int active_siso_rate; } ;
struct ieee80211_sta_vht_cap {int dummy; } ;
struct ieee80211_sta {scalar_t__ bandwidth; int rx_nss; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ieee80211_sta_vht_cap*,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_sta *VAR_4,
         struct ieee80211_sta_vht_cap *VAR_5,
         struct iwl_lq_sta *VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_1(VAR_5, 1);

 if (VAR_8 >= VAR_2) {
  for (VAR_7 = VAR_2; VAR_7 <= VAR_8; VAR_7++) {
   if (VAR_7 == VAR_1)
    continue;


   if (VAR_7 == VAR_3 &&
       VAR_4->bandwidth == VAR_0)
    continue;

   VAR_6->active_siso_rate |= FUNC_0(VAR_7);
  }
 }

 if (VAR_4->rx_nss < 2)
  return;

 VAR_8 = FUNC_1(VAR_5, 2);
 if (VAR_8 >= VAR_2) {
  for (VAR_7 = VAR_2; VAR_7 <= VAR_8; VAR_7++) {
   if (VAR_7 == VAR_1)
    continue;


   if (VAR_7 == VAR_3 &&
       VAR_4->bandwidth == VAR_0)
    continue;

   VAR_6->active_mimo2_rate |= FUNC_0(VAR_7);
  }
 }
}
