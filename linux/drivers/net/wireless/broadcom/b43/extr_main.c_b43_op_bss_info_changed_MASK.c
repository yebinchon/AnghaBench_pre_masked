
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_bss_conf {scalar_t__ use_short_slot; int basic_rates; int beacon_int; int bssid; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {int mutex; int bssid; struct ieee80211_vif* vif; struct b43_wldev* current_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct b43_wl*,int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 scalar_t__ FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*,int ) ;
 int FUNC_9 (struct b43_wl*) ;
 int FUNC_10 (struct b43_wldev*) ;
 int FUNC_11 (int ) ;
 struct b43_wl* FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct ieee80211_hw *VAR_11,
        struct ieee80211_vif *VAR_12,
        struct ieee80211_bss_conf *VAR_13,
        u32 VAR_14)
{
 struct b43_wl *VAR_15 = FUNC_12(VAR_11);
 struct b43_wldev *VAR_16;

 FUNC_14(&VAR_15->mutex);

 VAR_16 = VAR_15->current_dev;
 if (!VAR_16 || FUNC_7(VAR_16) < VAR_1)
  goto out_unlock_mutex;

 FUNC_0(VAR_15->vif != VAR_12);

 if (VAR_14 & VAR_5) {
  if (VAR_13->bssid)
   FUNC_13(VAR_15->bssid, VAR_13->bssid, VAR_7);
  else
   FUNC_11(VAR_15->bssid);
 }

 if (FUNC_7(VAR_16) >= VAR_0) {
  if (VAR_14 & VAR_3 &&
      (FUNC_1(VAR_15, VAR_9) ||
       FUNC_1(VAR_15, VAR_10) ||
       FUNC_1(VAR_15, VAR_8)))
   FUNC_9(VAR_15);

  if (VAR_14 & VAR_5)
   FUNC_10(VAR_16);
 }

 FUNC_3(VAR_16);


 if (VAR_14 & VAR_4 &&
     (FUNC_1(VAR_15, VAR_9) ||
      FUNC_1(VAR_15, VAR_10) ||
      FUNC_1(VAR_15, VAR_8)) &&
     VAR_13->beacon_int)
  FUNC_4(VAR_16, VAR_13->beacon_int);

 if (VAR_14 & VAR_2)
  FUNC_8(VAR_16, VAR_13->basic_rates);

 if (VAR_14 & VAR_6) {
  if (VAR_13->use_short_slot)
   FUNC_6(VAR_16);
  else
   FUNC_5(VAR_16);
 }

 FUNC_2(VAR_16);
out_unlock_mutex:
 FUNC_15(&VAR_15->mutex);
}
