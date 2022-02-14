
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {int wiphy; } ;
struct TYPE_2__ {int radio_on; } ;
struct b43_wldev {int radio_hw_enable; TYPE_1__ phy; } ;
struct b43_wl {int mutex; struct b43_wldev* current_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct b43_wldev*) ;
 scalar_t__ FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int) ;
 scalar_t__ FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wl*,char*,char*) ;
 struct b43_wl* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ,int) ;

void FUNC_13(struct ieee80211_hw *VAR_1)
{
 struct b43_wl *VAR_2 = FUNC_8(VAR_1);
 struct b43_wldev *VAR_3 = VAR_2->current_dev;
 bool VAR_4;
 bool VAR_5 = 0;

 FUNC_9(&VAR_2->mutex);
 if (FUNC_11(FUNC_6(VAR_3) < VAR_0)) {
  if (FUNC_1(VAR_3, 0)) {
   FUNC_10(&VAR_2->mutex);
   return;
  }
  FUNC_3(VAR_3, 0);
  VAR_5 = 1;
 }

 VAR_4 = FUNC_4(VAR_3);

 if (FUNC_11(VAR_4 != VAR_3->radio_hw_enable)) {
  VAR_3->radio_hw_enable = VAR_4;
  FUNC_7(VAR_2, "Radio hardware status changed to %s\n",
   VAR_4 ? "ENABLED" : "DISABLED");
  FUNC_12(VAR_1->wiphy, !VAR_4);
  if (VAR_4 != VAR_3->phy.radio_on)
   FUNC_5(VAR_3, !VAR_4);
 }

 if (VAR_5) {
  FUNC_2(VAR_3, 0);
  FUNC_0(VAR_3);
 }

 FUNC_10(&VAR_2->mutex);
}
