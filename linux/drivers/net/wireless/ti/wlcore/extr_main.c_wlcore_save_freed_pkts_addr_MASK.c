
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct ieee80211_sta* FUNC_1 (struct ieee80211_vif*,scalar_t__ const*) ;
 scalar_t__ FUNC_2 (scalar_t__ const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct ieee80211_vif* FUNC_5 (struct wl12xx_vif*) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*,scalar_t__,struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_7(struct wl1271 *VAR_1,
     struct wl12xx_vif *VAR_2,
     u8 VAR_3, const u8 *VAR_4)
{
 struct ieee80211_sta *VAR_5;
 struct ieee80211_vif *VAR_6 = FUNC_5(VAR_2);

 if (FUNC_0(VAR_3 == VAR_0 ||
      FUNC_2(VAR_4)))
  return;

 FUNC_3();
 VAR_5 = FUNC_1(VAR_6, VAR_4);
 if (VAR_5)
  FUNC_6(VAR_1, VAR_2, VAR_3, VAR_5);
 FUNC_4();
}
