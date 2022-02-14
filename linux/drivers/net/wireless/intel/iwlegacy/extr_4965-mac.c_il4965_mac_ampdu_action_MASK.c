
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct il_priv {int mutex; int status; TYPE_1__* cfg; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
struct ieee80211_ampdu_params {int action; int ssn; int tid; struct ieee80211_sta* sta; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;
struct TYPE_2__ {int sku; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct il_priv*,struct ieee80211_sta*,int ,int ) ;
 int FUNC_2 (struct il_priv*,struct ieee80211_sta*,int ) ;
 int FUNC_3 (struct il_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int ,int *) ;
 int FUNC_4 (struct il_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

int
FUNC_8(struct ieee80211_hw *VAR_4, struct ieee80211_vif *VAR_5,
   struct ieee80211_ampdu_params *VAR_6)
{
 struct il_priv *VAR_7 = VAR_4->priv;
 int VAR_8 = -VAR_1;
 struct ieee80211_sta *VAR_9 = VAR_6->sta;
 enum ieee80211_ampdu_mlme_action VAR_10 = VAR_6->action;
 u16 VAR_11 = VAR_6->tid;
 u16 *VAR_12 = &VAR_6->ssn;

 FUNC_0("A-MPDU action on addr %pM tid %d\n", VAR_9->addr, VAR_11);

 if (!(VAR_7->cfg->sku & VAR_2))
  return -VAR_0;

 FUNC_5(&VAR_7->mutex);

 switch (VAR_10) {
 case 134:
  FUNC_0("start Rx\n");
  VAR_8 = FUNC_1(VAR_7, VAR_9, VAR_11, *VAR_12);
  break;
 case 133:
  FUNC_0("stop Rx\n");
  VAR_8 = FUNC_2(VAR_7, VAR_9, VAR_11);
  if (FUNC_7(VAR_3, &VAR_7->status))
   VAR_8 = 0;
  break;
 case 131:
  FUNC_0("start Tx\n");
  VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_9, VAR_11, VAR_12);
  break;
 case 130:
 case 129:
 case 128:
  FUNC_0("stop Tx\n");
  VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_9, VAR_11);
  if (FUNC_7(VAR_3, &VAR_7->status))
   VAR_8 = 0;
  break;
 case 132:
  VAR_8 = 0;
  break;
 }
 FUNC_6(&VAR_7->mutex);

 return VAR_8;
}
