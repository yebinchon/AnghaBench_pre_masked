
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_vif {int bslot; } ;
struct TYPE_2__ {struct ieee80211_vif** bslot; } ;
struct ath9k_htc_priv {int beacon_lock; TYPE_1__ beacon; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,int ,char*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ath9k_htc_priv *VAR_2,
       struct ieee80211_vif *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_2->ah);
 struct ath9k_htc_vif *VAR_5 = (struct ath9k_htc_vif *)VAR_3->drv_priv;
 int VAR_6 = 0;

 FUNC_2(&VAR_2->beacon_lock);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2->beacon.bslot[VAR_6] == ((void*)0)) {
   VAR_5->bslot = VAR_6;
   break;
  }
 }

 VAR_2->beacon.bslot[VAR_5->bslot] = VAR_3;
 FUNC_3(&VAR_2->beacon_lock);

 FUNC_1(VAR_4, VAR_1, "Added interface at beacon slot: %d\n",
  VAR_5->bslot);
}
