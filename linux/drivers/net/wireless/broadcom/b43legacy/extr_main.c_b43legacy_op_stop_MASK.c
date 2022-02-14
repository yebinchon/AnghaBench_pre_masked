
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;
struct b43legacy_wldev {int dummy; } ;
struct b43legacy_wl {int radio_enabled; int mutex; int beacon_update_trigger; struct b43legacy_wldev* current_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (int *) ;
 struct b43legacy_wl* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_1)
{
 struct b43legacy_wl *VAR_2 = FUNC_4(VAR_1);
 struct b43legacy_wldev *VAR_3 = VAR_2->current_dev;

 FUNC_3(&(VAR_2->beacon_update_trigger));

 FUNC_5(&VAR_2->mutex);
 if (FUNC_0(VAR_3) >= VAR_0)
  FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 VAR_2->radio_enabled = 0;
 FUNC_6(&VAR_2->mutex);
}
