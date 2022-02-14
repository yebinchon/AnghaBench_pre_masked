
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct wl12xx_vif {scalar_t__ encryption_type; } ;
struct wl1271_station {int total_freed_pkts; } ;
struct wl1271 {int flags; TYPE_1__* links; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct TYPE_2__ {int total_freed_pkts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
       u8 VAR_6, struct ieee80211_sta *VAR_7)
{
 struct wl1271_station *VAR_8;
 u32 VAR_9 = VAR_2;

 VAR_8 = (void *)VAR_7->drv_priv;
 VAR_8->total_freed_pkts = VAR_4->links[VAR_6].total_freed_pkts;





 if (VAR_5->encryption_type == VAR_0)
  VAR_9 = VAR_3;

 if (FUNC_0(VAR_1, &VAR_4->flags))
  VAR_8->total_freed_pkts += VAR_9;
}
