
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct emac_ring_header {unsigned int size; scalar_t__ used; scalar_t__ dma_addr; int * v_addr; } ;
struct TYPE_9__ {unsigned int count; } ;
struct TYPE_14__ {TYPE_2__ tpd; } ;
struct TYPE_11__ {unsigned int count; } ;
struct TYPE_10__ {unsigned int count; } ;
struct TYPE_12__ {TYPE_4__ rfd; TYPE_3__ rrd; } ;
struct emac_adapter {unsigned int tx_desc_cnt; unsigned int rx_desc_cnt; int tpd_size; int rfd_size; int rrd_size; TYPE_6__* netdev; TYPE_7__ tx_q; TYPE_5__ rx_q; struct emac_ring_header ring_header; } ;
struct device {int dummy; } ;
struct TYPE_8__ {struct device* parent; } ;
struct TYPE_13__ {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct device*,unsigned int,scalar_t__*,int ) ;
 int FUNC_2 (struct device*,unsigned int,int *,scalar_t__) ;
 int FUNC_3 (struct emac_adapter*) ;
 int FUNC_4 (struct emac_adapter*) ;
 int FUNC_5 (struct emac_adapter*,TYPE_7__*) ;
 int FUNC_6 (TYPE_6__*,char*) ;

int FUNC_7(struct emac_adapter *VAR_2)
{
 struct emac_ring_header *VAR_3 = &VAR_2->ring_header;
 struct device *VAR_4 = VAR_2->netdev->dev.parent;
 unsigned int VAR_5 = VAR_2->tx_desc_cnt;
 unsigned int VAR_6 = VAR_2->rx_desc_cnt;
 int VAR_7;

 VAR_2->tx_q.tpd.count = VAR_2->tx_desc_cnt;

 VAR_2->rx_q.rrd.count = VAR_2->rx_desc_cnt;
 VAR_2->rx_q.rfd.count = VAR_2->rx_desc_cnt;




 VAR_3->size = VAR_5 * (VAR_2->tpd_size * 4) +
       VAR_6 * (VAR_2->rfd_size * 4) +
       VAR_6 * (VAR_2->rrd_size * 4) +
       8 + 2 * 8;

 VAR_3->used = 0;
 VAR_3->v_addr = FUNC_1(VAR_4, VAR_3->size,
       &VAR_3->dma_addr,
       VAR_1);
 if (!VAR_3->v_addr)
  return -VAR_0;

 VAR_3->used = FUNC_0(VAR_3->dma_addr, 8) -
       VAR_3->dma_addr;

 VAR_7 = FUNC_5(VAR_2, &VAR_2->tx_q);
 if (VAR_7) {
  FUNC_6(VAR_2->netdev, "error: Tx Queue alloc failed\n");
  goto err_alloc_tx;
 }

 VAR_7 = FUNC_3(VAR_2);
 if (VAR_7) {
  FUNC_6(VAR_2->netdev, "error: Rx Queue alloc failed\n");
  goto err_alloc_rx;
 }

 return 0;

err_alloc_rx:
 FUNC_4(VAR_2);
err_alloc_tx:
 FUNC_2(VAR_4, VAR_3->size,
     VAR_3->v_addr, VAR_3->dma_addr);

 VAR_3->v_addr = ((void*)0);
 VAR_3->dma_addr = 0;
 VAR_3->size = 0;
 VAR_3->used = 0;

 return VAR_7;
}
