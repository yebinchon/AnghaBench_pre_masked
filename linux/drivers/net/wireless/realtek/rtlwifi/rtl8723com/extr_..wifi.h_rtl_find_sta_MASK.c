
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_mac {int vif; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_sta* FUNC_0 (int ,int *) ;
 struct rtl_mac* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static inline struct ieee80211_sta *FUNC_3(struct ieee80211_hw *VAR_0,
       u8 *VAR_1)
{
 struct rtl_mac *VAR_2 = FUNC_1(FUNC_2(VAR_0));

 return FUNC_0(VAR_2->vif, VAR_1);
}
