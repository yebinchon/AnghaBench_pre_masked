
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct meth_private {int tx_skb_dmas; int tx_skbs; int tx_ring_dma; scalar_t__ tx_write; scalar_t__ tx_read; scalar_t__ tx_count; int tx_ring; TYPE_2__* pdev; } ;
struct TYPE_4__ {int tx_ring_base; } ;
struct TYPE_6__ {TYPE_1__ eth; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct meth_private *VAR_4)
{

 VAR_4->tx_ring = FUNC_0(&VAR_4->pdev->dev,
   VAR_2, &VAR_4->tx_ring_dma, VAR_1);
 if (!VAR_4->tx_ring)
  return -VAR_0;

 VAR_4->tx_count = VAR_4->tx_read = VAR_4->tx_write = 0;
 VAR_3->eth.tx_ring_base = VAR_4->tx_ring_dma;

 FUNC_1(VAR_4->tx_skbs, 0, sizeof(VAR_4->tx_skbs));
 FUNC_1(VAR_4->tx_skb_dmas, 0, sizeof(VAR_4->tx_skb_dmas));
 return 0;
}
