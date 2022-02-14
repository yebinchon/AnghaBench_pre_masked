
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sta_hlid_map; } ;
struct wl12xx_vif {TYPE_1__ ap; } ;
struct wl1271_station {size_t hlid; int total_freed_pkts; } ;
struct wl1271 {scalar_t__ active_sta_count; scalar_t__ max_ap_stations; TYPE_2__* links; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct TYPE_4__ {int addr; int total_freed_pkts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*,size_t*) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_2,
        struct wl12xx_vif *VAR_3,
        struct ieee80211_sta *VAR_4)
{
 struct wl1271_station *VAR_5;
 int VAR_6;


 if (VAR_2->active_sta_count >= VAR_2->max_ap_stations) {
  FUNC_2("could not allocate HLID - too much stations");
  return -VAR_0;
 }

 VAR_5 = (struct wl1271_station *)VAR_4->drv_priv;
 VAR_6 = FUNC_3(VAR_2, VAR_3, &VAR_5->hlid);
 if (VAR_6 < 0) {
  FUNC_2("could not allocate HLID - too many links");
  return -VAR_0;
 }


 VAR_2->links[VAR_5->hlid].total_freed_pkts = VAR_5->total_freed_pkts;

 FUNC_1(VAR_5->hlid, VAR_3->ap.sta_hlid_map);
 FUNC_0(VAR_2->links[VAR_5->hlid].addr, VAR_4->addr, VAR_1);
 VAR_2->active_sta_count++;
 return 0;
}
