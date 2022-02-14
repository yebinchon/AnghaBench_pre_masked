
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct dentry {int dummy; } ;
struct ath_node {int dummy; } ;


 int FUNC_0 (char*,int,struct dentry*,struct ath_node*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct ieee80211_hw *VAR_2,
      struct ieee80211_vif *VAR_3,
      struct ieee80211_sta *VAR_4,
      struct dentry *VAR_5)
{
 struct ath_node *VAR_6 = (struct ath_node *)VAR_4->drv_priv;

 FUNC_0("node_aggr", 0444, VAR_5, VAR_6, &VAR_0);
 FUNC_0("node_recv", 0444, VAR_5, VAR_6, &VAR_1);
}
