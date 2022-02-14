
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_sta* FUNC_0 (struct ieee80211_vif*,int const*) ;

__attribute__((used)) static inline struct ieee80211_sta *FUNC_1(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1,
         const u8 *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2);
}
