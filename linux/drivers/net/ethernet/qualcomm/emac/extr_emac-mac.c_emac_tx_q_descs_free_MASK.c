
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int count; size_t size; scalar_t__ produce_idx; scalar_t__ consume_idx; int v_addr; int tpbuff; } ;
struct emac_tx_queue {TYPE_3__ tpd; } ;
struct emac_buffer {int * skb; scalar_t__ dma_addr; int length; } ;
struct emac_adapter {TYPE_2__* netdev; struct emac_tx_queue tx_q; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct emac_buffer* FUNC_0 (struct emac_tx_queue*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static void FUNC_4(struct emac_adapter *VAR_1)
{
 struct emac_tx_queue *VAR_2 = &VAR_1->tx_q;
 unsigned int VAR_3;
 size_t VAR_4;


 if (!VAR_2->tpd.tpbuff)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->tpd.count; VAR_3++) {
  struct emac_buffer *VAR_5 = FUNC_0(VAR_2, VAR_3);

  if (VAR_5->dma_addr) {
   FUNC_2(VAR_1->netdev->dev.parent,
      VAR_5->dma_addr, VAR_5->length,
      VAR_0);
   VAR_5->dma_addr = 0;
  }
  if (VAR_5->skb) {
   FUNC_1(VAR_5->skb);
   VAR_5->skb = ((void*)0);
  }
 }

 VAR_4 = sizeof(struct emac_buffer) * VAR_2->tpd.count;
 FUNC_3(VAR_2->tpd.tpbuff, 0, VAR_4);


 FUNC_3(VAR_2->tpd.v_addr, 0, VAR_2->tpd.size);

 VAR_2->tpd.consume_idx = 0;
 VAR_2->tpd.produce_idx = 0;
}
