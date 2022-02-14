
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {scalar_t__ type; } ;
struct ath9k_vif_iter_data {int beacons; int nbcnvifs; struct ieee80211_vif* primary_beacon_vif; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ath9k_vif_iter_data *VAR_1,
          struct ieee80211_vif *VAR_2)
{

 if (!VAR_1->primary_beacon_vif) {
  VAR_1->primary_beacon_vif = VAR_2;
 } else {
  if (VAR_1->primary_beacon_vif->type != VAR_0 &&
      VAR_2->type == VAR_0)
   VAR_1->primary_beacon_vif = VAR_2;
 }

 VAR_1->beacons = 1;
 VAR_1->nbcnvifs += 1;
}
