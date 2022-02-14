
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int data; } ;
struct TYPE_5__ {int produce_idx; scalar_t__ count; } ;
struct emac_rx_queue {scalar_t__ produce_shift; scalar_t__ produce_mask; scalar_t__ produce_reg; TYPE_2__ rfd; } ;
struct emac_buffer {int dma_addr; int length; struct sk_buff* skb; } ;
struct emac_adapter {scalar_t__ base; int rxbuf_size; TYPE_3__* netdev; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct emac_buffer* FUNC_0 (struct emac_rx_queue*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct emac_adapter*,struct emac_rx_queue*,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 struct sk_buff* FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_7(struct emac_adapter *VAR_1,
        struct emac_rx_queue *VAR_2)
{
 struct emac_buffer *VAR_3;
 struct emac_buffer *VAR_4;
 unsigned int VAR_5 = 0;
 u32 VAR_6;

 VAR_6 = VAR_2->rfd.produce_idx + 1;
 if (VAR_6 == VAR_2->rfd.count)
  VAR_6 = 0;

 VAR_3 = FUNC_0(VAR_2, VAR_2->rfd.produce_idx);
 VAR_4 = FUNC_0(VAR_2, VAR_6);


 while (!VAR_4->dma_addr) {
  struct sk_buff *VAR_7;
  int VAR_8;

  VAR_7 = FUNC_6(VAR_1->netdev, VAR_1->rxbuf_size);
  if (!VAR_7)
   break;

  VAR_3->dma_addr =
   FUNC_2(VAR_1->netdev->dev.parent, VAR_7->data,
           VAR_1->rxbuf_size, VAR_0);

  VAR_8 = FUNC_3(VAR_1->netdev->dev.parent,
     VAR_3->dma_addr);
  if (VAR_8) {
   FUNC_1(VAR_7);
   break;
  }
  VAR_3->skb = VAR_7;
  VAR_3->length = VAR_1->rxbuf_size;

  FUNC_4(VAR_1, VAR_2, VAR_3->dma_addr);
  VAR_6 = VAR_2->rfd.produce_idx + 1;
  if (VAR_6 == VAR_2->rfd.count)
   VAR_6 = 0;

  VAR_3 = FUNC_0(VAR_2, VAR_2->rfd.produce_idx);
  VAR_4 = FUNC_0(VAR_2, VAR_6);
  VAR_5++;
 }

 if (VAR_5) {
  u32 VAR_9 = (VAR_2->rfd.produce_idx << VAR_2->produce_shift) &
    VAR_2->produce_mask;
  FUNC_5(VAR_1->base + VAR_2->produce_reg,
      VAR_2->produce_mask, VAR_9);
 }
}
