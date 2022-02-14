
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wl12xx_vif {int flags; int role_id; int basic_rate; int basic_rate_set; int band; } ;
struct wl1271 {int * roc_map; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {scalar_t__ width; } ;
struct ieee80211_bss_conf {int basic_rates; int ht_operation_mode; TYPE_1__ chandef; scalar_t__ enable_beacon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_6 (struct wl1271*,struct ieee80211_vif*) ;
 int FUNC_7 (struct wl1271*,int ,struct ieee80211_vif*) ;
 int FUNC_8 (struct wl1271*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_9 (struct wl1271*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_13 (struct wl1271*,int,int ) ;
 int FUNC_14 (struct wl1271*,int ) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_17 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_18 (struct wl1271*,int ) ;
 struct wl12xx_vif* FUNC_19 (struct ieee80211_vif*) ;
 int FUNC_20 (struct wl1271*,struct ieee80211_vif*,int) ;

__attribute__((used)) static void FUNC_21(struct wl1271 *VAR_7,
           struct ieee80211_vif *VAR_8,
           struct ieee80211_bss_conf *VAR_9,
           u32 VAR_10)
{
 struct wl12xx_vif *VAR_11 = FUNC_19(VAR_8);
 int VAR_12 = 0;

 if (VAR_10 & VAR_0) {
  u32 VAR_13 = VAR_9->basic_rates;

  VAR_11->basic_rate_set = FUNC_13(VAR_7, VAR_13,
         VAR_11->band);
  VAR_11->basic_rate = FUNC_14(VAR_7,
       VAR_11->basic_rate_set);

  VAR_12 = FUNC_12(VAR_7, VAR_11);
  if (VAR_12 < 0) {
   FUNC_11("AP rate policy change failed %d", VAR_12);
   goto out;
  }

  VAR_12 = FUNC_6(VAR_7, VAR_8);
  if (VAR_12 < 0)
   goto out;


  if (!FUNC_1(VAR_8)) {
   VAR_12 = FUNC_7(VAR_7,
           VAR_11->basic_rate,
           VAR_8);
   if (VAR_12 < 0)
    goto out;
  }

  VAR_12 = FUNC_20(VAR_7, VAR_8, 1);
  if (VAR_12 < 0)
   goto out;
 }

 VAR_12 = FUNC_8(VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_12 < 0)
  goto out;

 if (VAR_10 & VAR_1) {
  if (VAR_9->enable_beacon) {
   if (!FUNC_3(VAR_6, &VAR_11->flags)) {
    VAR_12 = FUNC_16(VAR_7, VAR_11);
    if (VAR_12 < 0)
     goto out;

    VAR_12 = FUNC_5(VAR_7, VAR_11);
    if (VAR_12 < 0)
     goto out;

    FUNC_2(VAR_6, &VAR_11->flags);
    FUNC_10(VAR_3, "started AP");
   }
  } else {
   if (FUNC_3(VAR_6, &VAR_11->flags)) {




    if (FUNC_3(VAR_11->role_id, VAR_7->roc_map))
     FUNC_18(VAR_7, VAR_11->role_id);

    VAR_12 = FUNC_17(VAR_7, VAR_11);
    if (VAR_12 < 0)
     goto out;

    FUNC_0(VAR_6, &VAR_11->flags);
    FUNC_0(VAR_5,
       &VAR_11->flags);
    FUNC_10(VAR_3, "stopped AP");
   }
  }
 }

 VAR_12 = FUNC_9(VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_12 < 0)
  goto out;


 if ((VAR_10 & VAR_2) &&
     (VAR_9->chandef.width != VAR_4)) {
  VAR_12 = FUNC_4(VAR_7, VAR_11,
     VAR_9->ht_operation_mode);
  if (VAR_12 < 0) {
   FUNC_15("Set ht information failed %d", VAR_12);
   goto out;
  }
 }

out:
 return;
}
