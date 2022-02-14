
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct p54_common {int tx_queue; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int FUNC_0 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_1 (struct p54_common*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct ieee80211_hw *VAR_0, struct sk_buff *VAR_1)
{
 struct p54_common *VAR_2 = VAR_0->priv;
 if (FUNC_3(!VAR_1))
  return ;

 FUNC_2(VAR_1, &VAR_2->tx_queue);
 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_0, VAR_1);
}
