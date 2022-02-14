
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int ampdu_factor; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ieee80211_ampdu_params {int action; int ssn; int tid; struct ieee80211_sta* sta; } ;
struct ath_softc {int mutex; int sc_ah; } ;
struct ath_node {int dummy; } ;
struct ath_common {int op_flags; } ;
struct ath_atx_tid {int baw_size; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_common*,char*) ;
 struct ath_atx_tid* FUNC_5 (struct ath_node*,int ) ;
 int FUNC_6 (struct ath_softc*,struct ieee80211_sta*,int ,int *) ;
 int FUNC_7 (struct ath_softc*,struct ieee80211_sta*,int ) ;
 int FUNC_8 (struct ieee80211_vif*,int ,int ) ;
 int FUNC_9 (struct ieee80211_vif*,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_hw *VAR_3,
         struct ieee80211_vif *VAR_4,
         struct ieee80211_ampdu_params *VAR_5)
{
 struct ath_softc *VAR_6 = VAR_3->priv;
 struct ath_common *VAR_7 = FUNC_0(VAR_6->sc_ah);
 bool VAR_8 = 0;
 int VAR_9 = 0;
 struct ieee80211_sta *VAR_10 = VAR_5->sta;
 struct ath_node *VAR_11 = (struct ath_node *)VAR_10->drv_priv;
 enum ieee80211_ampdu_mlme_action VAR_12 = VAR_5->action;
 u16 VAR_13 = VAR_5->tid;
 u16 *VAR_14 = &VAR_5->ssn;
 struct ath_atx_tid *VAR_15;

 FUNC_10(&VAR_6->mutex);

 switch (VAR_12) {
 case 134:
  break;
 case 133:
  break;
 case 131:
  if (FUNC_1()) {
   if (FUNC_12(VAR_0, &VAR_7->op_flags)) {
    VAR_9 = -VAR_1;
    break;
   }
  }
  FUNC_3(VAR_6);
  VAR_9 = FUNC_6(VAR_6, VAR_10, VAR_13, VAR_14);
  if (!VAR_9)
   FUNC_8(VAR_4, VAR_10->addr, VAR_13);
  FUNC_2(VAR_6);
  break;
 case 129:
 case 128:
  VAR_8 = 1;

 case 130:
  FUNC_3(VAR_6);
  FUNC_7(VAR_6, VAR_10, VAR_13);
  if (!VAR_8)
   FUNC_9(VAR_4, VAR_10->addr, VAR_13);
  FUNC_2(VAR_6);
  break;
 case 132:
  VAR_15 = FUNC_5(VAR_11, VAR_13);
  VAR_15->baw_size = VAR_2 <<
           VAR_10->ht_cap.ampdu_factor;
  break;
 default:
  FUNC_4(FUNC_0(VAR_6->sc_ah), "Unknown AMPDU action\n");
 }

 FUNC_11(&VAR_6->mutex);

 return VAR_9;
}
