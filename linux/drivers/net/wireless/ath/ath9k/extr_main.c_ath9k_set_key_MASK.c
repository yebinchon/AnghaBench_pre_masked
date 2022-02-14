
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {scalar_t__ cipher; int flags; int hw_key_idx; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int mutex; TYPE_1__* sc_ah; } ;
struct ath_node {int* key_idx; } ;
struct ath_common {int dummy; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_2__ {int sw_mgmt_crypto_tx; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

 int FUNC_1 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct ath_softc*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 struct ath_common* FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ath_common*,int ,char*,int) ;
 int FUNC_7 (struct ath_common*,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;
 int FUNC_8 (struct ath_common*,struct ieee80211_key_conf*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_13,
    enum set_key_cmd VAR_14,
    struct ieee80211_vif *VAR_15,
    struct ieee80211_sta *VAR_16,
    struct ieee80211_key_conf *VAR_17)
{
 struct ath_softc *VAR_18 = VAR_13->priv;
 struct ath_common *VAR_19 = FUNC_3(VAR_18->sc_ah);
 struct ath_node *VAR_20 = ((void*)0);
 int VAR_21 = 0, VAR_22;

 if (VAR_12)
  return -VAR_2;

 if ((VAR_15->type == VAR_8 ||
      VAR_15->type == VAR_9) &&
     (VAR_17->cipher == VAR_11 ||
      VAR_17->cipher == VAR_10) &&
     !(VAR_17->flags & VAR_6)) {







  return -VAR_3;
 }

 FUNC_9(&VAR_18->mutex);
 FUNC_5(VAR_18);
 FUNC_6(VAR_19, VAR_0, "Set HW Key %d\n", VAR_14);
 if (VAR_16)
  VAR_20 = (struct ath_node *)VAR_16->drv_priv;

 switch (VAR_14) {
 case 128:
  if (VAR_16)
   FUNC_2(VAR_18, VAR_15, VAR_16);

  VAR_17->hw_key_idx = 0;
  VAR_21 = FUNC_7(VAR_19, VAR_15, VAR_16, VAR_17);
  if (VAR_21 >= 0) {
   VAR_17->hw_key_idx = VAR_21;

   VAR_17->flags |= VAR_4;
   if (VAR_17->cipher == VAR_11)
    VAR_17->flags |= VAR_5;
   if (VAR_18->sc_ah->sw_mgmt_crypto_tx &&
       VAR_17->cipher == VAR_10)
    VAR_17->flags |= VAR_7;
   VAR_21 = 0;
  }
  if (VAR_20 && VAR_17->hw_key_idx) {
   for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_20->key_idx); VAR_22++) {
    if (VAR_20->key_idx[VAR_22])
     continue;
    VAR_20->key_idx[VAR_22] = VAR_17->hw_key_idx;
    break;
   }
   FUNC_1(VAR_22 == FUNC_0(VAR_20->key_idx));
  }
  break;
 case 129:
  FUNC_8(VAR_19, VAR_17);
  if (VAR_20) {
   for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_20->key_idx); VAR_22++) {
    if (VAR_20->key_idx[VAR_22] != VAR_17->hw_key_idx)
     continue;
    VAR_20->key_idx[VAR_22] = 0;
    break;
   }
  }
  VAR_17->hw_key_idx = 0;
  break;
 default:
  VAR_21 = -VAR_1;
 }

 FUNC_4(VAR_18);
 FUNC_10(&VAR_18->mutex);

 return VAR_21;
}
