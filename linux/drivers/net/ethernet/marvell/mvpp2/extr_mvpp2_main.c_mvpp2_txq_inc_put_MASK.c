
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mvpp2_txq_pcpu_buf {scalar_t__ dma; int size; struct sk_buff* skb; } ;
struct mvpp2_txq_pcpu {int txq_put_index; scalar_t__ size; struct mvpp2_txq_pcpu_buf* buffs; } ;
struct mvpp2_tx_desc {int dummy; } ;
struct mvpp2_port {int dummy; } ;


 scalar_t__ FUNC_0 (struct mvpp2_port*,struct mvpp2_tx_desc*) ;
 scalar_t__ FUNC_1 (struct mvpp2_port*,struct mvpp2_tx_desc*) ;
 int FUNC_2 (struct mvpp2_port*,struct mvpp2_tx_desc*) ;

__attribute__((used)) static void FUNC_3(struct mvpp2_port *VAR_0,
         struct mvpp2_txq_pcpu *VAR_1,
         struct sk_buff *VAR_2,
         struct mvpp2_tx_desc *VAR_3)
{
 struct mvpp2_txq_pcpu_buf *VAR_4 =
  VAR_1->buffs + VAR_1->txq_put_index;
 VAR_4->skb = VAR_2;
 VAR_4->size = FUNC_2(VAR_0, VAR_3);
 VAR_4->dma = FUNC_0(VAR_0, VAR_3) +
  FUNC_1(VAR_0, VAR_3);
 VAR_1->txq_put_index++;
 if (VAR_1->txq_put_index == VAR_1->size)
  VAR_1->txq_put_index = 0;
}
