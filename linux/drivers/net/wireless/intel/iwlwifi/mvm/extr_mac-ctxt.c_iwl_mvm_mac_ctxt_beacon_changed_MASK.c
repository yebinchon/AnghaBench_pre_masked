
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iwl_mvm {scalar_t__ beacon_inject_active; int hw; } ;
struct ieee80211_vif {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,struct ieee80211_vif*,int *) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct sk_buff*) ;

int FUNC_4(struct iwl_mvm *VAR_4,
        struct ieee80211_vif *VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5->type != VAR_3 &&
  VAR_5->type != VAR_2);

 VAR_6 = FUNC_2(VAR_4->hw, VAR_5, ((void*)0));
 if (!VAR_6)
  return -VAR_1;






 VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_6);
 return VAR_7;
}
