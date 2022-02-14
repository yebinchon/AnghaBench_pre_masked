
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {int type; int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_vif {int index; } ;
struct ath9k_htc_target_vif {int index; int myaddr; } ;
struct ath9k_htc_priv {int vif_slot; scalar_t__ num_ap_vif; int rearm_ani; int mutex; int hw; struct ieee80211_vif* csa_vif; int nvifs; int ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct ath9k_htc_target_vif*) ;
 int VAR_6 ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_5 (struct ath9k_htc_priv*,struct ieee80211_vif*,int *) ;
 int FUNC_6 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*) ;
 int VAR_7 ;
 struct ath_common* FUNC_9 (int ) ;
 int FUNC_10 (struct ath_common*,int ,char*,int) ;
 int FUNC_11 (struct ath_common*,char*,int) ;
 int FUNC_12 (int ,int ,int ,struct ath9k_htc_priv*) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (struct ath9k_htc_target_vif*,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct ieee80211_hw *VAR_8,
           struct ieee80211_vif *VAR_9)
{
 struct ath9k_htc_priv *VAR_10 = VAR_8->priv;
 struct ath_common *VAR_11 = FUNC_9(VAR_10->ah);
 struct ath9k_htc_vif *VAR_12 = (void *)VAR_9->drv_priv;
 struct ath9k_htc_target_vif VAR_13;
 int VAR_14 = 0;
 u8 VAR_15;

 FUNC_15(&VAR_10->mutex);
 FUNC_3(VAR_10);

 FUNC_14(&VAR_13, 0, sizeof(struct ath9k_htc_target_vif));
 FUNC_13(&VAR_13.myaddr, VAR_9->addr, VAR_1);
 VAR_13.index = VAR_12->index;
 FUNC_1(VAR_6, &VAR_13);
 if (VAR_14) {
  FUNC_11(VAR_11, "Unable to remove interface at idx: %d\n",
   VAR_12->index);
 }
 VAR_10->nvifs--;
 VAR_10->vif_slot &= ~(1 << VAR_12->index);

 if (VAR_10->csa_vif == VAR_9)
  VAR_10->csa_vif = ((void*)0);

 FUNC_5(VAR_10, VAR_9, ((void*)0));

 FUNC_0(VAR_10, VAR_9->type);

 if ((VAR_9->type == VAR_4) ||
      VAR_9->type == VAR_5 ||
     (VAR_9->type == VAR_3))
  FUNC_4(VAR_10, VAR_9);

 FUNC_7(VAR_10);

 FUNC_6(VAR_10, VAR_9);




 if ((VAR_9->type == VAR_4) && (VAR_10->num_ap_vif == 0)) {
  VAR_10->rearm_ani = 0;
  FUNC_12(
   VAR_10->hw, VAR_2,
   VAR_7, VAR_10);
  if (!VAR_10->rearm_ani)
   FUNC_8(VAR_10);
 }

 FUNC_10(VAR_11, VAR_0, "Detach Interface at idx: %d\n", VAR_12->index);

 FUNC_2(VAR_10);
 FUNC_16(&VAR_10->mutex);
}
