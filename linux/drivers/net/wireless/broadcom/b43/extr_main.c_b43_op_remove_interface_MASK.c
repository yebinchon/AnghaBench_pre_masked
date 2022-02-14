
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int type; } ;
struct ieee80211_hw {int dummy; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {int operating; int mutex; int mac_addr; struct ieee80211_vif* vif; struct b43_wldev* current_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wl*,char*,int ) ;
 int FUNC_4 (int ) ;
 struct b43_wl* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_0,
        struct ieee80211_vif *VAR_1)
{
 struct b43_wl *VAR_2 = FUNC_5(VAR_0);
 struct b43_wldev *VAR_3 = VAR_2->current_dev;

 FUNC_3(VAR_2, "Removing Interface type %d\n", VAR_1->type);

 FUNC_6(&VAR_2->mutex);

 FUNC_0(!VAR_2->operating);
 FUNC_0(VAR_2->vif != VAR_1);
 VAR_2->vif = ((void*)0);

 VAR_2->operating = 0;

 FUNC_1(VAR_3);
 FUNC_4(VAR_2->mac_addr);
 FUNC_2(VAR_3);

 FUNC_7(&VAR_2->mutex);
}
