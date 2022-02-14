
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct ieee80211_ampdu_params {int action; size_t tid; size_t ssn; struct ieee80211_sta* sta; } ;
struct carl9170_sta_tid {size_t hsn; size_t bsn; size_t snx; size_t tid; int state; int bitmap; int list; int lock; int queue; int tmp_list; struct ieee80211_vif* vif; struct ieee80211_sta* sta; int max; } ;
struct carl9170_sta_info {TYPE_1__* stats; int * agg; int ampdu_max_len; int ht_sta; } ;
struct ar9170 {int ampdu_work; int hw; int tx_ampdu_list_lock; int tx_ampdu_list; int tx_ampdu_list_len; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;
struct TYPE_2__ {int clear; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_6 (struct ieee80211_vif*,int ,size_t) ;
 struct carl9170_sta_tid* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int ,struct carl9170_sta_tid*) ;
 struct carl9170_sta_tid* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct ieee80211_hw *VAR_9,
        struct ieee80211_vif *VAR_10,
        struct ieee80211_ampdu_params *VAR_11)
{
 struct ieee80211_sta *VAR_12 = VAR_11->sta;
 enum ieee80211_ampdu_mlme_action VAR_13 = VAR_11->action;
 u16 VAR_14 = VAR_11->tid;
 u16 *VAR_15 = &VAR_11->ssn;
 struct ar9170 *VAR_16 = VAR_9->priv;
 struct carl9170_sta_info *VAR_17 = (void *) VAR_12->drv_priv;
 struct carl9170_sta_tid *VAR_18;

 if (VAR_8)
  return -VAR_6;

 switch (VAR_13) {
 case 131:
  if (!VAR_17->ht_sta)
   return -VAR_6;

  VAR_18 = FUNC_7(sizeof(struct carl9170_sta_tid),
       VAR_7);
  if (!VAR_18)
   return -VAR_5;

  VAR_18->hsn = VAR_18->bsn = VAR_18->snx = (*VAR_15);
  VAR_18->state = VAR_2;
  VAR_18->tid = VAR_14;
  VAR_18->max = VAR_17->ampdu_max_len;
  VAR_18->sta = VAR_12;
  VAR_18->vif = VAR_10;

  FUNC_0(&VAR_18->list);
  FUNC_0(&VAR_18->tmp_list);
  FUNC_13(&VAR_18->queue);
  FUNC_15(&VAR_18->lock);

  FUNC_14(&VAR_16->tx_ampdu_list_lock);
  VAR_16->tx_ampdu_list_len++;
  FUNC_8(&VAR_18->list, &VAR_16->tx_ampdu_list);
  FUNC_9(VAR_17->agg[VAR_14], VAR_18);
  FUNC_16(&VAR_16->tx_ampdu_list_lock);

  FUNC_5(VAR_10, VAR_12->addr, VAR_14);
  break;

 case 130:
 case 129:
 case 128:
  FUNC_11();
  VAR_18 = FUNC_10(VAR_17->agg[VAR_14]);
  if (VAR_18) {
   FUNC_14(&VAR_16->tx_ampdu_list_lock);
   if (VAR_18->state > VAR_3)
    VAR_18->state = VAR_3;
   FUNC_16(&VAR_16->tx_ampdu_list_lock);
  }

  FUNC_1(VAR_17->agg[VAR_14], ((void*)0));
  FUNC_12();

  FUNC_6(VAR_10, VAR_12->addr, VAR_14);
  FUNC_4(VAR_16->hw, &VAR_16->ampdu_work);
  break;

 case 132:
  FUNC_11();
  VAR_18 = FUNC_10(VAR_17->agg[VAR_14]);

  VAR_17->stats[VAR_14].clear = 1;
  VAR_17->stats[VAR_14].req = 0;

  if (VAR_18) {
   FUNC_3(VAR_18->bitmap, VAR_0);
   VAR_18->state = VAR_1;
  }
  FUNC_12();

  if (FUNC_2(!VAR_18))
   return -VAR_4;

  break;

 case 134:
 case 133:

  break;

 default:
  return -VAR_6;
 }

 return 0;
}
