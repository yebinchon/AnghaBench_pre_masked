
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wl1251 {int monitor_present; int channel; int joined; int psm_requested; scalar_t__ station_mode; scalar_t__ power_level; int mutex; int dtim_period; int beacon_int; int bss_type; int scanning; int * vif; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_conf {int flags; scalar_t__ power_level; int ps_dtim_period; TYPE_2__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct wl1251* priv; } ;
struct TYPE_3__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wl1251*,int) ;
 int FUNC_4 (struct wl1251*,scalar_t__) ;
 int FUNC_5 (struct wl1251*,int ,int ) ;
 scalar_t__ FUNC_6 (struct ieee80211_conf*,struct wl1251*) ;
 int FUNC_7 (struct wl1251*,int,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct wl1251*,int ,int,int ,int ) ;
 int FUNC_10 (struct wl1251*) ;
 int FUNC_11 (struct wl1251*) ;
 int FUNC_12 (struct wl1251*,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_hw *VAR_12, u32 VAR_13)
{
 struct wl1251 *VAR_14 = VAR_12->priv;
 struct ieee80211_conf *VAR_15 = &VAR_12->conf;
 int VAR_16, VAR_17 = 0;

 VAR_16 = FUNC_0(
   VAR_15->chandef.chan->center_freq);

 FUNC_8(VAR_0,
       "mac80211 config ch %d monitor %s psm %s power %d",
       VAR_16,
       VAR_15->flags & VAR_7 ? "on" : "off",
       VAR_15->flags & VAR_8 ? "on" : "off",
       VAR_15->power_level);

 FUNC_1(&VAR_14->mutex);

 VAR_17 = FUNC_11(VAR_14);
 if (VAR_17 < 0)
  goto out;

 if (VAR_13 & VAR_5) {
  u32 VAR_18;

  if (VAR_15->flags & VAR_7) {
   VAR_14->monitor_present = 1;
   VAR_18 = VAR_3 | VAR_2;
  } else {
   VAR_14->monitor_present = 0;
   VAR_18 = 0;
  }

  VAR_17 = FUNC_3(VAR_14, VAR_18);
  if (VAR_17 < 0)
   goto out_sleep;
 }

 if (VAR_16 != VAR_14->channel) {
  VAR_14->channel = VAR_16;
  if (VAR_14->vif == ((void*)0)) {
   VAR_14->joined = 0;
   VAR_17 = FUNC_7(VAR_14, VAR_14->channel, 1);
  } else {
   VAR_17 = FUNC_9(VAR_14, VAR_14->bss_type, VAR_14->channel,
       VAR_14->beacon_int, VAR_14->dtim_period);
  }
  if (VAR_17 < 0)
   goto out_sleep;
 }

 if (FUNC_6(VAR_15, VAR_14) && !VAR_14->psm_requested) {
  FUNC_8(VAR_1, "psm enabled");

  VAR_14->psm_requested = 1;

  VAR_14->dtim_period = VAR_15->ps_dtim_period;

  VAR_17 = FUNC_5(VAR_14, VAR_14->beacon_int,
        VAR_14->dtim_period);




  VAR_17 = FUNC_12(VAR_14, VAR_11);
  if (VAR_17 < 0)
   goto out_sleep;
 } else if (!FUNC_6(VAR_15, VAR_14) && VAR_14->psm_requested) {
  FUNC_8(VAR_1, "psm disabled");

  VAR_14->psm_requested = 0;

  if (VAR_14->station_mode != VAR_9) {
   VAR_17 = FUNC_12(VAR_14, VAR_9);
   if (VAR_17 < 0)
    goto out_sleep;
  }
 }

 if (VAR_13 & VAR_4 && !VAR_14->scanning) {
  if (VAR_15->flags & VAR_6) {
   VAR_17 = FUNC_12(VAR_14, VAR_10);
   if (VAR_17 < 0)
    goto out_sleep;
  } else {
   VAR_17 = FUNC_12(VAR_14, VAR_9);
   if (VAR_17 < 0)
    goto out_sleep;
   VAR_17 = FUNC_9(VAR_14, VAR_14->bss_type, VAR_14->channel,
       VAR_14->beacon_int, VAR_14->dtim_period);
   if (VAR_17 < 0)
    goto out_sleep;
  }
 }

 if (VAR_15->power_level != VAR_14->power_level) {
  VAR_17 = FUNC_4(VAR_14, VAR_15->power_level);
  if (VAR_17 < 0)
   goto out_sleep;

  VAR_14->power_level = VAR_15->power_level;
 }

out_sleep:
 FUNC_10(VAR_14);

out:
 FUNC_2(&VAR_14->mutex);

 return VAR_17;
}
