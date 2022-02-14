
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {scalar_t__ state; size_t ssn; int txq_id; } ;
struct iwl_tid_data {size_t next_reclaimed; TYPE_1__ agg; int seq_number; } ;
struct iwl_rxon_context {int * ac_to_queue; } ;
struct iwl_priv {int sta_lock; struct iwl_tid_data** tid_data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {size_t addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct iwl_priv*,char*,size_t,size_t) ;
 int FUNC_2 (struct iwl_priv*,char*,size_t,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct iwl_priv*,char*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (struct ieee80211_vif*,size_t,size_t) ;
 struct iwl_rxon_context* FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (struct ieee80211_sta*) ;
 int FUNC_7 (struct iwl_priv*,int,size_t) ;
 int FUNC_8 (struct iwl_priv*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 size_t* VAR_7 ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct iwl_priv *VAR_8, struct ieee80211_vif *VAR_9,
   struct ieee80211_sta *VAR_10, u16 VAR_11, u16 *VAR_12)
{
 struct iwl_rxon_context *VAR_13 = FUNC_5(VAR_9);
 struct iwl_tid_data *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 FUNC_1(VAR_8, "TX AGG request on ra = %pM tid = %d\n",
       VAR_10->addr, VAR_11);

 VAR_15 = FUNC_6(VAR_10);
 if (VAR_15 == VAR_5) {
  FUNC_3(VAR_8, "Start AGG on invalid station\n");
  return -VAR_1;
 }
 if (FUNC_11(VAR_11 >= VAR_6))
  return -VAR_0;

 if (VAR_8->tid_data[VAR_15][VAR_11].agg.state != VAR_2) {
  FUNC_3(VAR_8, "Start AGG when state is not IWL_AGG_OFF !\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_8(VAR_8, VAR_13->ac_to_queue[VAR_7[VAR_11]]);
 if (VAR_16 < 0) {
  FUNC_2(VAR_8,
   "No free aggregation queue for %pM/%d\n",
   VAR_10->addr, VAR_11);
  return VAR_16;
 }

 VAR_17 = FUNC_7(VAR_8, VAR_15, VAR_11);
 if (VAR_17)
  return VAR_17;

 FUNC_9(&VAR_8->sta_lock);
 VAR_14 = &VAR_8->tid_data[VAR_15][VAR_11];
 VAR_14->agg.ssn = FUNC_0(VAR_14->seq_number);
 VAR_14->agg.txq_id = VAR_16;

 *VAR_12 = VAR_14->agg.ssn;

 if (*VAR_12 == VAR_14->next_reclaimed) {
  FUNC_2(VAR_8, "Can proceed: ssn = next_recl = %d\n",
        VAR_14->agg.ssn);
  VAR_14->agg.state = VAR_3;
  FUNC_4(VAR_9, VAR_10->addr, VAR_11);
 } else {
  FUNC_2(VAR_8, "Can't proceed: ssn %d, "
        "next_reclaimed = %d\n",
        VAR_14->agg.ssn,
        VAR_14->next_reclaimed);
  VAR_14->agg.state = VAR_4;
 }
 FUNC_10(&VAR_8->sta_lock);

 return VAR_17;
}
