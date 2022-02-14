
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_vif {int const type; int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_common {int op_flags; } ;
struct ath9k_htc_vif {int index; } ;
struct ath9k_htc_target_vif {int index; int rtsthreshold; int opmode; int myaddr; } ;
struct ath9k_htc_priv {int vif_slot; int mutex; TYPE_1__* ah; int nvifs; } ;
struct TYPE_3__ {int const opmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath9k_htc_priv*,int const) ;




 int FUNC_1 (int ,struct ath9k_htc_target_vif*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ath9k_htc_priv*,struct ieee80211_vif*,int *) ;
 int FUNC_3 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_4 (struct ath9k_htc_priv*) ;
 int FUNC_5 (struct ath9k_htc_priv*) ;
 int FUNC_6 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (struct ath_common*,int ,char*,int const,int) ;
 int FUNC_12 (struct ath_common*,char*,int const) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (struct ath9k_htc_target_vif*,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int *) ;

__attribute__((used)) static int FUNC_20(struct ieee80211_hw *VAR_10,
       struct ieee80211_vif *VAR_11)
{
 struct ath9k_htc_priv *VAR_12 = VAR_10->priv;
 struct ath9k_htc_vif *VAR_13 = (void *)VAR_11->drv_priv;
 struct ath_common *VAR_14 = FUNC_9(VAR_12->ah);
 struct ath9k_htc_target_vif VAR_15;
 int VAR_16 = 0;
 u8 VAR_17;

 FUNC_17(&VAR_12->mutex);

 FUNC_5(VAR_12);
 FUNC_16(&VAR_15, 0, sizeof(struct ath9k_htc_target_vif));
 FUNC_15(&VAR_15.myaddr, VAR_11->addr, VAR_3);

 switch (VAR_11->type) {
 case 128:
  VAR_15.opmode = VAR_6;
  break;
 case 131:
  VAR_15.opmode = VAR_5;
  break;
 case 130:
  VAR_15.opmode = VAR_4;
  break;
 case 129:
  VAR_15.opmode = VAR_7;
  break;
 default:
  FUNC_12(VAR_14,
   "Interface type %d not yet supported\n", VAR_11->type);
  VAR_16 = -VAR_2;
  goto out;
 }


 VAR_13->index = VAR_15.index = FUNC_14(VAR_12->vif_slot);
 VAR_15.rtsthreshold = FUNC_13(2304);
 FUNC_1(VAR_8, &VAR_15);
 if (VAR_16)
  goto out;





 VAR_16 = FUNC_2(VAR_12, VAR_11, ((void*)0));
 if (VAR_16) {
  FUNC_1(VAR_9, &VAR_15);
  goto out;
 }

 FUNC_6(VAR_12, VAR_11);

 VAR_12->vif_slot |= (1 << VAR_13->index);
 VAR_12->nvifs++;

 FUNC_0(VAR_12, VAR_11->type);

 if ((VAR_11->type == 130) ||
     (VAR_11->type == 129) ||
     (VAR_11->type == 131))
  FUNC_3(VAR_12, VAR_11);

 FUNC_7(VAR_12);

 if ((VAR_12->ah->opmode == 130) &&
     !FUNC_19(VAR_0, &VAR_14->op_flags)) {
  FUNC_10(VAR_12->ah, 1);
  FUNC_8(VAR_12);
 }

 FUNC_11(VAR_14, VAR_1, "Attach a VIF of type: %d at idx: %d\n",
  VAR_11->type, VAR_13->index);

out:
 FUNC_4(VAR_12);
 FUNC_18(&VAR_12->mutex);

 return VAR_16;
}
