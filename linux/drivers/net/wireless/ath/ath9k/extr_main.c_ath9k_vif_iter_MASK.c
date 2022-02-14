
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int enable_beacon; int use_short_slot; } ;
struct ieee80211_vif {int type; TYPE_1__ bss_conf; scalar_t__ drv_priv; } ;
struct ath_vif {int assoc; } ;
struct ath9k_vif_iter_data {int has_hw_macaddr; int* mask; int* hw_macaddr; int slottime; int nwds; int nmeshes; int nadhocs; int nocbs; struct ieee80211_vif* primary_sta; int nstations; int naps; } ;


 int VAR_0 ;






 int FUNC_0 (struct ath9k_vif_iter_data*,struct ieee80211_vif*) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void FUNC_2(struct ath9k_vif_iter_data *VAR_1,
      u8 *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct ath_vif *VAR_4 = (struct ath_vif *)VAR_3->drv_priv;
 int VAR_5;

 if (VAR_1->has_hw_macaddr) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_1->mask[VAR_5] &=
    ~(VAR_1->hw_macaddr[VAR_5] ^ VAR_2[VAR_5]);
 } else {
  FUNC_1(VAR_1->hw_macaddr, VAR_2, VAR_0);
  VAR_1->has_hw_macaddr = 1;
 }

 if (!VAR_3->bss_conf.use_short_slot)
  VAR_1->slottime = 20;

 switch (VAR_3->type) {
 case 132:
  VAR_1->naps++;
  if (VAR_3->bss_conf.enable_beacon)
   FUNC_0(VAR_1, VAR_3);
  break;
 case 129:
  VAR_1->nstations++;
  if (VAR_4->assoc && !VAR_1->primary_sta)
   VAR_1->primary_sta = VAR_3;
  break;
 case 130:
  VAR_1->nocbs++;
  break;
 case 133:
  VAR_1->nadhocs++;
  if (VAR_3->bss_conf.enable_beacon)
   FUNC_0(VAR_1, VAR_3);
  break;
 case 131:
  VAR_1->nmeshes++;
  if (VAR_3->bss_conf.enable_beacon)
   FUNC_0(VAR_1, VAR_3);
  break;
 case 128:
  VAR_1->nwds++;
  break;
 default:
  break;
 }
}
