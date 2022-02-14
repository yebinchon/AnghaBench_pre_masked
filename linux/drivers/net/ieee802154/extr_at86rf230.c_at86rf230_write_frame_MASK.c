
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int data; } ;
struct TYPE_3__ {int len; } ;
struct TYPE_4__ {int complete; } ;
struct at86rf230_state_change {int* buf; TYPE_1__ trx; TYPE_2__ msg; struct at86rf230_local* lp; } ;
struct at86rf230_local {int is_tx; int spi; struct sk_buff* tx_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,struct at86rf230_state_change*,int) ;
 int VAR_2 ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct at86rf230_state_change *VAR_4 = VAR_3;
 struct at86rf230_local *VAR_5 = VAR_4->lp;
 struct sk_buff *VAR_6 = VAR_5->tx_skb;
 u8 *VAR_7 = VAR_4->buf;
 int VAR_8;

 VAR_5->is_tx = 1;

 VAR_7[0] = VAR_0 | VAR_1;
 VAR_7[1] = VAR_6->len + 2;
 FUNC_1(VAR_7 + 2, VAR_6->data, VAR_6->len);
 VAR_4->trx.len = VAR_6->len + 2;
 VAR_4->msg.complete = VAR_2;
 VAR_8 = FUNC_2(VAR_5->spi, &VAR_4->msg);
 if (VAR_8) {
  VAR_4->trx.len = 2;
  FUNC_0(VAR_5, VAR_4, VAR_8);
 }
}
