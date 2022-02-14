
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sta_hlid_map; } ;
struct wl12xx_vif {TYPE_1__ ap; } ;
struct wl1271_station {int hlid; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; scalar_t__ aid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*,int) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*,int) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_2,
        struct wl12xx_vif *VAR_3,
        struct ieee80211_sta *VAR_4)
{
 struct wl1271_station *VAR_5;
 int VAR_6 = 0, VAR_7;

 FUNC_2(VAR_0, "mac80211 remove sta %d", (int)VAR_4->aid);

 VAR_5 = (struct wl1271_station *)VAR_4->drv_priv;
 VAR_7 = VAR_5->hlid;
 if (FUNC_0(!FUNC_1(VAR_7, VAR_3->ap.sta_hlid_map)))
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_5->hlid);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_3(VAR_2, VAR_3, VAR_5->hlid);
 return VAR_6;
}
