
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lbtf_private {int hw; int tx_work; struct sk_buff* skb_to_tx; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_hw {struct lbtf_private* priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1,
         struct ieee80211_tx_control *VAR_2,
         struct sk_buff *VAR_3)
{
 struct lbtf_private *VAR_4 = VAR_1->priv;

 VAR_4->skb_to_tx = VAR_3;
 FUNC_1(VAR_0, &VAR_4->tx_work);




 FUNC_0(VAR_4->hw);
}
