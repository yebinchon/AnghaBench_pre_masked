
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee802154_hw {struct at86rf230_local* priv; } ;
struct at86rf230_state_change {int dummy; } ;
struct at86rf230_local {int is_tx_from_off; int cal_timeout; scalar_t__ tx_retry; struct sk_buff* tx_skb; struct at86rf230_state_change tx; } ;


 int VAR_0 ;
 int FUNC_0 (struct at86rf230_local*,struct at86rf230_state_change*,int ,int (*) (struct at86rf230_state_change*)) ;
 int FUNC_1 (struct at86rf230_state_change*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ieee802154_hw *VAR_1, struct sk_buff *VAR_2)
{
 struct at86rf230_local *VAR_3 = VAR_1->priv;
 struct at86rf230_state_change *VAR_4 = &VAR_3->tx;

 VAR_3->tx_skb = VAR_2;
 VAR_3->tx_retry = 0;
 if (FUNC_2(VAR_3->cal_timeout)) {
  VAR_3->is_tx_from_off = 1;
  FUNC_0(VAR_3, VAR_4, VAR_0,
          FUNC_1);
 } else {
  VAR_3->is_tx_from_off = 0;
  FUNC_1(VAR_4);
 }

 return 0;
}
