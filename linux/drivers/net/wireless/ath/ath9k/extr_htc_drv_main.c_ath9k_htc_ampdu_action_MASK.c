
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; int addr; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ieee80211_ampdu_params {int action; size_t tid; struct ieee80211_sta* sta; } ;
struct ath9k_htc_sta {int * tid_state; } ;
struct TYPE_2__ {int tx_lock; } ;
struct ath9k_htc_priv {int mutex; int ah; TYPE_1__ tx; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_6 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_3,
      struct ieee80211_vif *VAR_4,
      struct ieee80211_ampdu_params *VAR_5)
{
 struct ath9k_htc_priv *VAR_6 = VAR_3->priv;
 struct ath9k_htc_sta *VAR_7;
 int VAR_8 = 0;
 struct ieee80211_sta *VAR_9 = VAR_5->sta;
 enum ieee80211_ampdu_mlme_action VAR_10 = VAR_5->action;
 u16 VAR_11 = VAR_5->tid;

 FUNC_7(&VAR_6->mutex);
 FUNC_1(VAR_6);

 switch (VAR_10) {
 case 134:
  break;
 case 133:
  break;
 case 131:
  VAR_8 = FUNC_2(VAR_6, VAR_4, VAR_9, VAR_10, VAR_11);
  if (!VAR_8)
   FUNC_5(VAR_4, VAR_9->addr, VAR_11);
  break;
 case 130:
 case 129:
 case 128:
  FUNC_2(VAR_6, VAR_4, VAR_9, VAR_10, VAR_11);
  FUNC_6(VAR_4, VAR_9->addr, VAR_11);
  break;
 case 132:
  if (VAR_11 >= VAR_1) {
   VAR_8 = -VAR_2;
   break;
  }
  VAR_7 = (struct ath9k_htc_sta *) VAR_9->drv_priv;
  FUNC_9(&VAR_6->tx.tx_lock);
  VAR_7->tid_state[VAR_11] = VAR_0;
  FUNC_10(&VAR_6->tx.tx_lock);
  break;
 default:
  FUNC_4(FUNC_3(VAR_6->ah), "Unknown AMPDU action\n");
 }

 FUNC_0(VAR_6);
 FUNC_8(&VAR_6->mutex);

 return VAR_8;
}
