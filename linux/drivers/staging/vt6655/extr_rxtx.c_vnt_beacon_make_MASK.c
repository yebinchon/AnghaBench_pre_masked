
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int hw; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ,struct ieee80211_vif*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct vnt_private*,struct sk_buff*) ;

int FUNC_3(struct vnt_private *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_0(VAR_2->hw, VAR_3);
 if (!VAR_4)
  return -VAR_1;

 if (FUNC_2(VAR_2, VAR_4)) {
  FUNC_1(VAR_2->hw, VAR_4);
  return -VAR_0;
 }

 return 0;
}
