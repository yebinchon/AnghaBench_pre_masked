
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct mrf24j40 {struct sk_buff* tx_skb; } ;
struct ieee802154_hw {struct mrf24j40* priv; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct mrf24j40*) ;
 int FUNC_2 (struct mrf24j40*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ieee802154_hw *VAR_0, struct sk_buff *VAR_1)
{
 struct mrf24j40 *VAR_2 = VAR_0->priv;

 FUNC_0(FUNC_1(VAR_2), "tx packet of %d bytes\n", VAR_1->len);
 VAR_2->tx_skb = VAR_1;

 return FUNC_2(VAR_2, 0x000, VAR_1->data, VAR_1->len);
}
