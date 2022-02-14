
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {int mutex; struct b43_wldev* current_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 scalar_t__ FUNC_2 (struct b43_wldev*) ;
 struct b43_wl* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_2,
       struct ieee80211_vif *VAR_3,
       const u8 *VAR_4)
{
 struct b43_wl *VAR_5 = FUNC_3(VAR_2);
 struct b43_wldev *VAR_6;

 FUNC_4(&VAR_5->mutex);
 VAR_6 = VAR_5->current_dev;
 if (VAR_6 && (FUNC_2(VAR_6) >= VAR_1)) {

  FUNC_1(VAR_6, FUNC_0(VAR_6) | VAR_0);
 }
 FUNC_5(&VAR_5->mutex);
}
