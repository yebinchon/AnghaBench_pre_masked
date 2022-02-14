
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_target_aggr {int tidno; int aggr_enable; int sta_index; } ;
struct ath9k_htc_sta {int * tid_state; int index; } ;
struct TYPE_2__ {int tx_lock; } ;
struct ath9k_htc_priv {TYPE_1__ tx; int ah; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct ath9k_htc_target_aggr*) ;
 int VAR_6 ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,char*,int ,int) ;
 int FUNC_3 (struct ath9k_htc_target_aggr*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ath9k_htc_priv *VAR_7,
      struct ieee80211_vif *VAR_8,
      struct ieee80211_sta *VAR_9,
      enum ieee80211_ampdu_mlme_action VAR_10,
      u16 VAR_11)
{
 struct ath_common *VAR_12 = FUNC_1(VAR_7->ah);
 struct ath9k_htc_target_aggr VAR_13;
 struct ath9k_htc_sta *VAR_14;
 int VAR_15 = 0;
 u8 VAR_16;

 if (VAR_11 >= VAR_2)
  return -VAR_4;

 FUNC_3(&VAR_13, 0, sizeof(struct ath9k_htc_target_aggr));
 VAR_14 = (struct ath9k_htc_sta *) VAR_9->drv_priv;

 VAR_13.sta_index = VAR_14->index;
 VAR_13.tidno = VAR_11 & 0xf;
 VAR_13.aggr_enable = (VAR_10 == VAR_5) ? 1 : 0;

 FUNC_0(VAR_6, &VAR_13);
 if (VAR_15)
  FUNC_2(VAR_12, VAR_3,
   "Unable to %s TX aggregation for (%pM, %d)\n",
   (VAR_13.aggr_enable) ? "start" : "stop", VAR_9->addr, VAR_11);
 else
  FUNC_2(VAR_12, VAR_3,
   "%s TX aggregation for (%pM, %d)\n",
   (VAR_13.aggr_enable) ? "Starting" : "Stopping",
   VAR_9->addr, VAR_11);

 FUNC_4(&VAR_7->tx.tx_lock);
 VAR_14->tid_state[VAR_11] = (VAR_13.aggr_enable && !VAR_15) ? VAR_0 : VAR_1;
 FUNC_5(&VAR_7->tx.tx_lock);

 return VAR_15;
}
