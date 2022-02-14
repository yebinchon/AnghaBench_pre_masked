
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271 {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int FUNC_0 (struct wl1271*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
       u32 VAR_2, bool VAR_3)
{
 struct wl1271 *VAR_4 = VAR_0->priv;

 FUNC_0(VAR_4);
}
