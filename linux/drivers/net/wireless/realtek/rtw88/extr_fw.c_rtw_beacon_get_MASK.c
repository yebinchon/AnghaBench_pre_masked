
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 struct sk_buff* FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ieee80211_hw *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct sk_buff *VAR_5;

 if (VAR_4->type != VAR_2 &&
     VAR_4->type != VAR_1 &&
     !FUNC_2(VAR_4)) {
  VAR_5 = FUNC_0(1, VAR_0);
  if (!VAR_5)
   return ((void*)0);
  FUNC_3(VAR_5, 1);
 } else {
  VAR_5 = FUNC_1(VAR_3, VAR_4);
 }

 return VAR_5;
}
