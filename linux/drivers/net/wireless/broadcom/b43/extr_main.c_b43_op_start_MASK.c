
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int wiphy; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {int radiotap_enabled; int beacon0_uploaded; int beacon1_uploaded; int beacon_templates_virgin; int radio_enabled; int mutex; scalar_t__ filter_flags; int mac_addr; int bssid; struct b43_wldev* current_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,int ) ;
 int FUNC_1 (struct b43_wl*) ;
 scalar_t__ FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (int ) ;
 struct b43_wl* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_2)
{
 struct b43_wl *VAR_3 = FUNC_7(VAR_2);
 struct b43_wldev *VAR_4 = VAR_3->current_dev;
 int VAR_5 = 0;
 int VAR_6 = 0;




 FUNC_6(VAR_3->bssid);
 FUNC_6(VAR_3->mac_addr);
 VAR_3->filter_flags = 0;
 VAR_3->radiotap_enabled = 0;
 FUNC_1(VAR_3);
 VAR_3->beacon0_uploaded = 0;
 VAR_3->beacon1_uploaded = 0;
 VAR_3->beacon_templates_virgin = 1;
 VAR_3->radio_enabled = 1;

 FUNC_8(&VAR_3->mutex);

 if (FUNC_2(VAR_4) < VAR_0) {
  VAR_6 = FUNC_4(VAR_4);
  if (VAR_6)
   goto out_mutex_unlock;
  VAR_5 = 1;
 }

 if (FUNC_2(VAR_4) < VAR_1) {
  VAR_6 = FUNC_5(VAR_4);
  if (VAR_6) {
   if (VAR_5)
    FUNC_3(VAR_4);
   goto out_mutex_unlock;
  }
 }


 FUNC_10(VAR_2->wiphy);

 out_mutex_unlock:
 FUNC_9(&VAR_3->mutex);







 if (!VAR_6)
  FUNC_0(VAR_2, ~0);

 return VAR_6;
}
