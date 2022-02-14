
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wcn36xx {int hw; int dxe_lock; struct sk_buff* tx_ack_skb; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*) ;

void FUNC_7(struct wcn36xx *VAR_2, u32 VAR_3)
{
 struct ieee80211_tx_info *VAR_4;
 struct sk_buff *VAR_5;
 unsigned long VAR_6;

 FUNC_3(&VAR_2->dxe_lock, VAR_6);
 VAR_5 = VAR_2->tx_ack_skb;
 VAR_2->tx_ack_skb = ((void*)0);
 FUNC_4(&VAR_2->dxe_lock, VAR_6);

 if (!VAR_5) {
  FUNC_6("Spurious TX complete indication\n");
  return;
 }

 VAR_4 = FUNC_0(VAR_5);

 if (VAR_3 == 1)
  VAR_4->flags |= VAR_0;

 FUNC_5(VAR_1, "dxe tx ack status: %d\n", VAR_3);

 FUNC_1(VAR_2->hw, VAR_5);
 FUNC_2(VAR_2->hw);
}
