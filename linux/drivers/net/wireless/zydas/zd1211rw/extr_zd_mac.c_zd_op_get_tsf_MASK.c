
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zd_mac {int chip; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int *) ;
 struct zd_mac* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static u64 FUNC_2(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct zd_mac *VAR_2 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_2->chip);
}
