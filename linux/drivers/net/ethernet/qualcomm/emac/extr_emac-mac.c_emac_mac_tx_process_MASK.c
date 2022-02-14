
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int consume_idx; scalar_t__ count; } ;
struct emac_tx_queue {int consume_mask; int consume_shift; TYPE_2__ tpd; scalar_t__ consume_reg; } ;
struct emac_buffer {TYPE_6__* skb; scalar_t__ dma_addr; int length; } ;
struct emac_adapter {TYPE_3__* netdev; scalar_t__ base; } ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct emac_buffer* FUNC_0 (struct emac_tx_queue*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (struct emac_tx_queue*) ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (scalar_t__) ;

void FUNC_8(struct emac_adapter *VAR_2, struct emac_tx_queue *VAR_3)
{
 u32 VAR_4 = FUNC_7(VAR_2->base + VAR_3->consume_reg);
 u32 VAR_5, VAR_6 = 0, VAR_7 = 0;
 struct emac_buffer *VAR_8;

 VAR_5 = (VAR_4 & VAR_3->consume_mask) >> VAR_3->consume_shift;

 while (VAR_3->tpd.consume_idx != VAR_5) {
  VAR_8 = FUNC_0(VAR_3, VAR_3->tpd.consume_idx);
  if (VAR_8->dma_addr) {
   FUNC_2(VAR_2->netdev->dev.parent,
           VAR_8->dma_addr, VAR_8->length,
           VAR_0);
   VAR_8->dma_addr = 0;
  }

  if (VAR_8->skb) {
   VAR_6++;
   VAR_7 += VAR_8->skb->len;
   FUNC_1(VAR_8->skb);
   VAR_8->skb = ((void*)0);
  }

  if (++VAR_3->tpd.consume_idx == VAR_3->tpd.count)
   VAR_3->tpd.consume_idx = 0;
 }

 FUNC_4(VAR_2->netdev, VAR_6, VAR_7);

 if (FUNC_5(VAR_2->netdev))
  if (FUNC_3(VAR_3) > (VAR_1 + 1))
   FUNC_6(VAR_2->netdev);
}
