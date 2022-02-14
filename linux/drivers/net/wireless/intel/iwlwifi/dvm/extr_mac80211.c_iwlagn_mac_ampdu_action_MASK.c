
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_12__ {int flags; } ;
struct TYPE_14__ {TYPE_5__ general_params; } ;
struct TYPE_13__ {TYPE_7__ lq; } ;
struct iwl_station_priv {TYPE_6__ lq_sta; } ;
struct TYPE_11__ {int use_rts_for_aggregation; } ;
struct iwl_priv {int mutex; TYPE_4__ hw_params; int agg_tids_count; TYPE_3__* trans; TYPE_1__* nvm_data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_ampdu_params {int action; int buf_size; int ssn; int tid; struct ieee80211_sta* sta; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;
struct TYPE_10__ {TYPE_2__* ops; } ;
struct TYPE_9__ {int txq_enable; } ;
struct TYPE_8__ {int sku_cap_11n_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct iwl_priv*,char*,...) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_priv*,int ,TYPE_7__*,int ,int) ;
 int FUNC_7 (struct iwl_priv*,struct ieee80211_sta*,int ,int ) ;
 int FUNC_8 (struct iwl_priv*,struct ieee80211_sta*,int ) ;
 int FUNC_9 (struct iwl_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int ) ;
 int FUNC_10 (struct iwl_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int ,int ) ;
 int FUNC_11 (struct iwl_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int ,int *) ;
 int FUNC_12 (struct iwl_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct ieee80211_hw *VAR_4,
       struct ieee80211_vif *VAR_5,
       struct ieee80211_ampdu_params *VAR_6)
{
 struct iwl_priv *VAR_7 = FUNC_2(VAR_4);
 int VAR_8 = -VAR_2;
 struct ieee80211_sta *VAR_9 = VAR_6->sta;
 enum ieee80211_ampdu_mlme_action VAR_10 = VAR_6->action;
 u16 VAR_11 = VAR_6->tid;
 u16 *VAR_12 = &VAR_6->ssn;
 u8 VAR_13 = VAR_6->buf_size;
 struct iwl_station_priv *VAR_14 = (void *) VAR_9->drv_priv;

 FUNC_0(VAR_7, "A-MPDU action on addr %pM tid %d\n",
       VAR_9->addr, VAR_11);

 if (!(VAR_7->nvm_data->sku_cap_11n_enable))
  return -VAR_1;

 FUNC_1(VAR_7, "enter\n");
 FUNC_13(&VAR_7->mutex);

 switch (VAR_10) {
 case 134:
  if (!FUNC_3())
   break;
  FUNC_0(VAR_7, "start Rx\n");
  VAR_8 = FUNC_7(VAR_7, VAR_9, VAR_11, *VAR_12);
  break;
 case 133:
  FUNC_0(VAR_7, "stop Rx\n");
  VAR_8 = FUNC_8(VAR_7, VAR_9, VAR_11);
  break;
 case 131:
  if (!VAR_7->trans->ops->txq_enable)
   break;
  if (!FUNC_4())
   break;
  FUNC_0(VAR_7, "start Tx\n");
  VAR_8 = FUNC_11(VAR_7, VAR_5, VAR_9, VAR_11, VAR_12);
  break;
 case 129:
 case 128:
  FUNC_0(VAR_7, "Flush Tx\n");
  VAR_8 = FUNC_9(VAR_7, VAR_5, VAR_9, VAR_11);
  break;
 case 130:
  FUNC_0(VAR_7, "stop Tx\n");
  VAR_8 = FUNC_12(VAR_7, VAR_5, VAR_9, VAR_11);
  if ((VAR_8 == 0) && (VAR_7->agg_tids_count > 0)) {
   VAR_7->agg_tids_count--;
   FUNC_0(VAR_7, "priv->agg_tids_count = %u\n",
         VAR_7->agg_tids_count);
  }
  if (!VAR_7->agg_tids_count &&
      VAR_7->hw_params.use_rts_for_aggregation) {



   VAR_14->lq_sta.lq.general_params.flags &=
    ~VAR_3;
   FUNC_6(VAR_7, FUNC_5(VAR_5),
     &VAR_14->lq_sta.lq, VAR_0, 0);
  }
  break;
 case 132:
  VAR_8 = FUNC_10(VAR_7, VAR_5, VAR_9, VAR_11, VAR_13);
  break;
 }
 FUNC_14(&VAR_7->mutex);
 FUNC_1(VAR_7, "leave\n");
 return VAR_8;
}
