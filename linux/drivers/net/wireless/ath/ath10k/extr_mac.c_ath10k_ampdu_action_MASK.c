
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ieee80211_ampdu_params {int action; int tid; struct ieee80211_sta* sta; } ;
struct ath10k_vif {int vdev_id; } ;
struct ath10k {int dummy; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct ath10k*,int ,char*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_3,
          struct ieee80211_vif *VAR_4,
          struct ieee80211_ampdu_params *VAR_5)
{
 struct ath10k *VAR_6 = VAR_3->priv;
 struct ath10k_vif *VAR_7 = (void *)VAR_4->drv_priv;
 struct ieee80211_sta *VAR_8 = VAR_5->sta;
 enum ieee80211_ampdu_mlme_action VAR_9 = VAR_5->action;
 u16 VAR_10 = VAR_5->tid;

 FUNC_0(VAR_6, VAR_0, "mac ampdu vdev_id %i sta %pM tid %hu action %d\n",
     VAR_7->vdev_id, VAR_8->addr, VAR_10, VAR_9);

 switch (VAR_9) {
 case 134:
 case 133:



  return 0;
 case 131:
 case 130:
 case 129:
 case 128:
 case 132:



  return -VAR_2;
 }

 return -VAR_1;
}
