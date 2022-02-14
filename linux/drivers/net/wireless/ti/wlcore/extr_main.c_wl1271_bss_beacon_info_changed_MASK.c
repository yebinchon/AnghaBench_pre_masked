
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {scalar_t__ bss_type; int flags; int basic_rate_set; int beacon_int; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_bss_conf {int beacon_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct wl1271*,int,struct ieee80211_vif*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct wl1271*,int ) ;
 struct wl12xx_vif* FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_7 (struct wl1271*,struct ieee80211_vif*,int) ;

__attribute__((used)) static int FUNC_8(struct wl1271 *VAR_6,
       struct ieee80211_vif *VAR_7,
       struct ieee80211_bss_conf *VAR_8,
       u32 VAR_9)
{
 struct wl12xx_vif *VAR_10 = FUNC_5(VAR_7);
 bool VAR_11 = (VAR_10->bss_type == VAR_3);
 int VAR_12 = 0;

 if (VAR_9 & VAR_2) {
  FUNC_2(VAR_4, "beacon interval updated: %d",
   VAR_8->beacon_int);

  VAR_10->beacon_int = VAR_8->beacon_int;
 }

 if ((VAR_9 & VAR_0) && VAR_11) {
  u32 VAR_13 = FUNC_4(VAR_6, VAR_10->basic_rate_set);

  FUNC_1(VAR_6, VAR_13, VAR_7);
 }

 if (VAR_9 & VAR_1) {
  VAR_12 = FUNC_7(VAR_6, VAR_7, VAR_11);
  if (VAR_12 < 0)
   goto out;

  if (FUNC_0(VAR_5,
           &VAR_10->flags)) {
   VAR_12 = FUNC_6(VAR_6, VAR_10);
   if (VAR_12 < 0)
    goto out;
  }
 }
out:
 if (VAR_12 != 0)
  FUNC_3("beacon info change failed: %d", VAR_12);
 return VAR_12;
}
