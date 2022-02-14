
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int count; int size; scalar_t__ consume_idx; scalar_t__ produce_idx; scalar_t__ v_addr; scalar_t__ dma_addr; int rfbuff; } ;
struct TYPE_7__ {int size; int count; scalar_t__ consume_idx; scalar_t__ produce_idx; scalar_t__ v_addr; scalar_t__ dma_addr; } ;
struct emac_rx_queue {TYPE_4__ rfd; TYPE_3__ rrd; } ;
struct emac_ring_header {scalar_t__ used; scalar_t__ v_addr; scalar_t__ dma_addr; } ;
struct emac_buffer {int dummy; } ;
struct emac_adapter {int rrd_size; int rfd_size; struct emac_rx_queue rx_q; TYPE_2__* netdev; struct emac_ring_header ring_header; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,int ,int) ;

__attribute__((used)) static int FUNC_3(struct emac_adapter *VAR_2)
{
 struct emac_ring_header *VAR_3 = &VAR_2->ring_header;
 int VAR_4 = FUNC_1(VAR_2->netdev->dev.parent);
 struct emac_rx_queue *VAR_5 = &VAR_2->rx_q;
 size_t VAR_6;

 VAR_6 = sizeof(struct emac_buffer) * VAR_5->rfd.count;
 VAR_5->rfd.rfbuff = FUNC_2(VAR_6, VAR_1, VAR_4);
 if (!VAR_5->rfd.rfbuff)
  return -VAR_0;

 VAR_5->rrd.size = VAR_5->rrd.count * (VAR_2->rrd_size * 4);
 VAR_5->rfd.size = VAR_5->rfd.count * (VAR_2->rfd_size * 4);

 VAR_5->rrd.dma_addr = VAR_3->dma_addr + VAR_3->used;
 VAR_5->rrd.v_addr = VAR_3->v_addr + VAR_3->used;
 VAR_3->used += FUNC_0(VAR_5->rrd.size, 8);

 VAR_5->rfd.dma_addr = VAR_3->dma_addr + VAR_3->used;
 VAR_5->rfd.v_addr = VAR_3->v_addr + VAR_3->used;
 VAR_3->used += FUNC_0(VAR_5->rfd.size, 8);

 VAR_5->rrd.produce_idx = 0;
 VAR_5->rrd.consume_idx = 0;

 VAR_5->rfd.produce_idx = 0;
 VAR_5->rfd.consume_idx = 0;

 return 0;
}
