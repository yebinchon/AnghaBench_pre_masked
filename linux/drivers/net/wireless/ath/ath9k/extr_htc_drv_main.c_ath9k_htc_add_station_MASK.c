
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee80211_vif {size_t addr; scalar_t__ drv_priv; } ;
struct TYPE_2__ {int ampdu_factor; } ;
struct ieee80211_sta {size_t addr; TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
struct ath_common {size_t curbssid; } ;
struct ath9k_htc_vif {size_t index; } ;
struct ath9k_htc_target_sta {int is_vif_sta; int sta_index; size_t vif_index; void* maxampdu; int macaddr; int bssid; } ;
struct ath9k_htc_sta {int index; } ;
struct ath9k_htc_priv {int nstations; int sta_slot; int* vif_sta_pos; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ath9k_htc_target_sta*) ;
 int VAR_5 ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,size_t,int) ;
 int FUNC_3 (struct ath_common*,char*,size_t) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,size_t,int ) ;
 int FUNC_7 (struct ath9k_htc_target_sta*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct ath9k_htc_priv *VAR_6,
     struct ieee80211_vif *VAR_7,
     struct ieee80211_sta *VAR_8)
{
 struct ath_common *VAR_9 = FUNC_1(VAR_6->ah);
 struct ath9k_htc_target_sta VAR_10;
 struct ath9k_htc_vif *VAR_11 = (struct ath9k_htc_vif *) VAR_7->drv_priv;
 struct ath9k_htc_sta *VAR_12;
 int VAR_13, VAR_14;
 u8 VAR_15;
 u16 VAR_16;

 if (VAR_6->nstations >= VAR_0)
  return -VAR_2;

 VAR_14 = FUNC_5(VAR_6->sta_slot);
 if ((VAR_14 < 0) || (VAR_14 > VAR_0))
  return -VAR_2;

 FUNC_7(&VAR_10, 0, sizeof(struct ath9k_htc_target_sta));

 if (VAR_8) {
  VAR_12 = (struct ath9k_htc_sta *) VAR_8->drv_priv;
  FUNC_6(&VAR_10.macaddr, VAR_8->addr, VAR_3);
  FUNC_6(&VAR_10.bssid, VAR_9->curbssid, VAR_3);
  VAR_12->index = VAR_14;
  VAR_10.is_vif_sta = 0;
  VAR_16 = 1 << (VAR_4 +
     VAR_8->ht_cap.ampdu_factor);
  VAR_10.maxampdu = FUNC_4(VAR_16);
 } else {
  FUNC_6(&VAR_10.macaddr, VAR_7->addr, VAR_3);
  VAR_10.is_vif_sta = 1;
  VAR_10.maxampdu = FUNC_4(0xffff);
 }

 VAR_10.sta_index = VAR_14;
 VAR_10.vif_index = VAR_11->index;

 FUNC_0(VAR_5, &VAR_10);
 if (VAR_13) {
  if (VAR_8)
   FUNC_3(VAR_9,
    "Unable to add station entry for: %pM\n",
    VAR_8->addr);
  return VAR_13;
 }

 if (VAR_8) {
  FUNC_2(VAR_9, VAR_1,
   "Added a station entry for: %pM (idx: %d)\n",
   VAR_8->addr, VAR_10.sta_index);
 } else {
  FUNC_2(VAR_9, VAR_1,
   "Added a station entry for VIF %d (idx: %d)\n",
   VAR_11->index, VAR_10.sta_index);
 }

 VAR_6->sta_slot |= (1 << VAR_14);
 VAR_6->nstations++;
 if (!VAR_8)
  VAR_6->vif_sta_pos[VAR_11->index] = VAR_14;

 return 0;
}
