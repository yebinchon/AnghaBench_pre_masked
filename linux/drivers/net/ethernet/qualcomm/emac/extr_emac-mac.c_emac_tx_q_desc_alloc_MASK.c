
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count; int size; scalar_t__ consume_idx; scalar_t__ produce_idx; scalar_t__ v_addr; scalar_t__ dma_addr; int tpbuff; } ;
struct emac_tx_queue {TYPE_3__ tpd; } ;
struct emac_ring_header {scalar_t__ used; scalar_t__ v_addr; scalar_t__ dma_addr; } ;
struct emac_buffer {int dummy; } ;
struct emac_adapter {int tpd_size; TYPE_2__* netdev; struct emac_ring_header ring_header; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,int ,int) ;

__attribute__((used)) static int FUNC_3(struct emac_adapter *VAR_2,
    struct emac_tx_queue *VAR_3)
{
 struct emac_ring_header *VAR_4 = &VAR_2->ring_header;
 int VAR_5 = FUNC_1(VAR_2->netdev->dev.parent);
 size_t VAR_6;

 VAR_6 = sizeof(struct emac_buffer) * VAR_3->tpd.count;
 VAR_3->tpd.tpbuff = FUNC_2(VAR_6, VAR_1, VAR_5);
 if (!VAR_3->tpd.tpbuff)
  return -VAR_0;

 VAR_3->tpd.size = VAR_3->tpd.count * (VAR_2->tpd_size * 4);
 VAR_3->tpd.dma_addr = VAR_4->dma_addr + VAR_4->used;
 VAR_3->tpd.v_addr = VAR_4->v_addr + VAR_4->used;
 VAR_4->used += FUNC_0(VAR_3->tpd.size, 8);
 VAR_3->tpd.produce_idx = 0;
 VAR_3->tpd.consume_idx = 0;

 return 0;
}
