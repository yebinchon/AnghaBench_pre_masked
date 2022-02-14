
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {scalar_t__ bss_type; } ;
struct wl1271 {int dummy; } ;
struct cfg80211_wowlan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wl1271*,struct wl12xx_vif*,struct cfg80211_wowlan*) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*,struct cfg80211_wowlan*) ;

__attribute__((used)) static int FUNC_2(struct wl1271 *VAR_2,
        struct wl12xx_vif *VAR_3,
        struct cfg80211_wowlan *VAR_4)
{
 if (VAR_3->bss_type == VAR_1)
  return FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_3->bss_type == VAR_0)
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 return 0;
}
