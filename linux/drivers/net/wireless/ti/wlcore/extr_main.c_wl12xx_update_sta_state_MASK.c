
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hlid; } ;
struct wl12xx_vif {scalar_t__ bss_type; scalar_t__ role_id; int channel; int band; int total_freed_pkts; TYPE_1__ sta; int flags; } ;
struct wl1271_station {int total_freed_pkts; int hlid; } ;
struct wl1271 {int roc_map; } ;
struct ieee80211_sta {int ht_cap; scalar_t__ drv_priv; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct wl1271*,int *,int,int ) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*,int ) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_8 (struct wl1271*,scalar_t__) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*,scalar_t__,int ,int ) ;
 int FUNC_10 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_11 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*) ;
 int FUNC_12 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*) ;
 int FUNC_13 (struct wl1271*,struct wl12xx_vif*,int ,struct ieee80211_sta*) ;
 int FUNC_14 (struct wl1271*,struct wl12xx_vif*,struct wl1271_station*,int) ;

__attribute__((used)) static int FUNC_15(struct wl1271 *VAR_11,
       struct wl12xx_vif *VAR_12,
       struct ieee80211_sta *VAR_13,
       enum ieee80211_sta_state VAR_14,
       enum ieee80211_sta_state VAR_15)
{
 struct wl1271_station *VAR_16;
 bool VAR_17 = VAR_12->bss_type == VAR_0;
 bool VAR_18 = VAR_12->bss_type == VAR_1;
 int VAR_19;

 VAR_16 = (struct wl1271_station *)VAR_13->drv_priv;


 if (VAR_17 &&
     VAR_14 == VAR_6 &&
     VAR_15 == VAR_5) {
  VAR_19 = FUNC_11(VAR_11, VAR_12, VAR_13);
  if (VAR_19)
   return VAR_19;

  FUNC_14(VAR_11, VAR_12, VAR_16, 1);
 }


 if (VAR_17 &&
     VAR_14 == VAR_5 &&
     VAR_15 == VAR_6) {

  FUNC_12(VAR_11, VAR_12, VAR_13);

  FUNC_14(VAR_11, VAR_12, VAR_16, 0);
 }


 if (VAR_17 &&
     VAR_15 == VAR_4) {
  VAR_19 = FUNC_7(VAR_11, VAR_12, VAR_16->hlid);
  if (VAR_19 < 0)
   return VAR_19;


  VAR_19 = FUNC_6(VAR_11, VAR_12, VAR_13, VAR_16->hlid);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_19 = FUNC_5(VAR_11, &VAR_13->ht_cap, 1,
           VAR_16->hlid);
  if (VAR_19)
   return VAR_19;

  FUNC_14(VAR_11, VAR_12, VAR_16, 0);
 }


 if (VAR_18 &&
     VAR_15 == VAR_4) {
  FUNC_3(VAR_9, &VAR_12->flags);
  VAR_19 = FUNC_10(VAR_11, VAR_12);
  if (VAR_19)
   return VAR_19;
 }

 if (VAR_18 &&
     VAR_14 == VAR_4 &&
     VAR_15 == VAR_2) {
  FUNC_1(VAR_9, &VAR_12->flags);
  FUNC_1(VAR_10, &VAR_12->flags);
 }


 if (VAR_18 &&
     VAR_14 == VAR_2 &&
     VAR_15 == VAR_3) {
  FUNC_13(VAR_11, VAR_12, VAR_12->sta.hlid, VAR_13);
  VAR_12->total_freed_pkts = 0;
 }


 if (VAR_18 &&
     VAR_14 == VAR_3 &&
     VAR_15 == VAR_2) {
  VAR_12->total_freed_pkts = VAR_16->total_freed_pkts;
 }


 if (VAR_18 &&
     (VAR_15 == VAR_4 ||
      VAR_15 == VAR_6)) {
  if (FUNC_4(VAR_12->role_id, VAR_11->roc_map))
   FUNC_8(VAR_11, VAR_12->role_id);
 }

 if (VAR_18 &&
     VAR_14 == VAR_6 &&
     VAR_15 == VAR_5) {
  if (FUNC_2(VAR_11->roc_map,
       VAR_8) >= VAR_8) {
   FUNC_0(VAR_12->role_id == VAR_7);
   FUNC_9(VAR_11, VAR_12, VAR_12->role_id,
       VAR_12->band, VAR_12->channel);
  }
 }
 return 0;
}
