
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct wl1271_station {size_t hlid; } ;
struct wl1271 {TYPE_1__* links; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_2__ {int fw_rate_mbps; } ;



__attribute__((used)) static u32 FUNC_0(struct ieee80211_hw *VAR_0,
          struct ieee80211_sta *VAR_1)
{
 struct wl1271_station *VAR_2 = (struct wl1271_station *)VAR_1->drv_priv;
 struct wl1271 *VAR_3 = VAR_0->priv;
 u8 VAR_4 = VAR_2->hlid;


 return (VAR_3->links[VAR_4].fw_rate_mbps * 1000);
}
