
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int type; } ;
struct ieee80211_hw {int dummy; } ;
struct b43legacy_wldev {int dummy; } ;
struct b43legacy_wl {int operating; int mutex; int irq_lock; int mac_addr; struct ieee80211_vif* vif; struct b43legacy_wldev* current_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wl*,char*,int ) ;
 int FUNC_4 (int ) ;
 struct b43legacy_wl* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_0,
       struct ieee80211_vif *VAR_1)
{
 struct b43legacy_wl *VAR_2 = FUNC_5(VAR_0);
 struct b43legacy_wldev *VAR_3 = VAR_2->current_dev;
 unsigned long VAR_4;

 FUNC_3(VAR_2, "Removing Interface type %d\n", VAR_1->type);

 FUNC_6(&VAR_2->mutex);

 FUNC_0(!VAR_2->operating);
 FUNC_0(VAR_2->vif != VAR_1);
 VAR_2->vif = ((void*)0);

 VAR_2->operating = 0;

 FUNC_8(&VAR_2->irq_lock, VAR_4);
 FUNC_1(VAR_3);
 FUNC_4(VAR_2->mac_addr);
 FUNC_2(VAR_3);
 FUNC_9(&VAR_2->irq_lock, VAR_4);

 FUNC_7(&VAR_2->mutex);
}
