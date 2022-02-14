
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct dentry {int dummy; } ;
struct ath10k {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath10k*) ;
 scalar_t__ FUNC_1 (struct ath10k*) ;
 int FUNC_2 (char*,int,struct dentry*,struct ieee80211_sta*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_3(struct ieee80211_hw *VAR_8, struct ieee80211_vif *VAR_9,
       struct ieee80211_sta *VAR_10, struct dentry *VAR_11)
{
 struct ath10k *VAR_12 = VAR_8->priv;

 FUNC_2("aggr_mode", 0644, VAR_11, VAR_10, &VAR_2);
 FUNC_2("addba", 0200, VAR_11, VAR_10, &VAR_0);
 FUNC_2("addba_resp", 0200, VAR_11, VAR_10, &VAR_1);
 FUNC_2("delba", 0200, VAR_11, VAR_10, &VAR_3);
 FUNC_2("peer_debug_trigger", 0600, VAR_11, VAR_10,
       &VAR_4);
 FUNC_2("dump_tid_stats", 0400, VAR_11, VAR_10,
       &VAR_6);

 if (FUNC_1(VAR_12) &&
     FUNC_0(VAR_12))
  FUNC_2("tx_stats", 0400, VAR_11, VAR_10,
        &VAR_7);
 FUNC_2("peer_ps_state", 0400, VAR_11, VAR_10,
       &VAR_5);
}
