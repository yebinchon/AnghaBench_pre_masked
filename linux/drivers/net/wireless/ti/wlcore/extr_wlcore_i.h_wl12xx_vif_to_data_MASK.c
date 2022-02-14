
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int dummy; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct wl12xx_vif *FUNC_1(struct ieee80211_vif *VAR_0)
{
 FUNC_0(!VAR_0);
 return (struct wl12xx_vif *)VAR_0->drv_priv;
}
