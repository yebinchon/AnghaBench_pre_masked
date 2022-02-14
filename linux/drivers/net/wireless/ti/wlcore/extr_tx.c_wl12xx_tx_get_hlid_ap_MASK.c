
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int global_hlid; int bcast_hlid; } ;
struct wl12xx_vif {TYPE_1__ ap; int flags; } ;
struct wl1271_station {int hlid; } ;
struct wl1271 {int system_hlid; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static u8 FUNC_3(struct wl1271 *VAR_1, struct wl12xx_vif *VAR_2,
    struct sk_buff *VAR_3, struct ieee80211_sta *VAR_4)
{
 if (VAR_4) {
  struct wl1271_station *VAR_5;

  VAR_5 = (struct wl1271_station *)VAR_4->drv_priv;
  return VAR_5->hlid;
 } else {
  struct ieee80211_hdr *VAR_6;

  if (!FUNC_2(VAR_0, &VAR_2->flags))
   return VAR_1->system_hlid;

  VAR_6 = (struct ieee80211_hdr *)VAR_3->data;
  if (FUNC_1(FUNC_0(VAR_6)))
   return VAR_2->ap.bcast_hlid;
  else
   return VAR_2->ap.global_hlid;
 }
}
