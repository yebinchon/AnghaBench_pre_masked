
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int queue_stopped; } ;
struct xlgmac_ring {unsigned int cur; unsigned int dirty; TYPE_2__ tx; } ;
struct xlgmac_hw_ops {int (* tx_desc_reset ) (struct xlgmac_desc_data*) ;scalar_t__ (* is_last_desc ) (struct xlgmac_dma_desc*) ;int (* tx_complete ) (struct xlgmac_dma_desc*) ;} ;
struct xlgmac_desc_ops {int (* unmap_desc_data ) (struct xlgmac_pdata*,struct xlgmac_desc_data*) ;} ;
struct xlgmac_pdata {struct xlgmac_hw_ops hw_ops; struct xlgmac_desc_ops desc_ops; struct net_device* netdev; } ;
struct xlgmac_dma_desc {int dummy; } ;
struct TYPE_3__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct xlgmac_desc_data {TYPE_1__ tx; struct xlgmac_dma_desc* dma_desc; } ;
struct xlgmac_channel {int queue_index; struct xlgmac_ring* tx_ring; struct xlgmac_pdata* pdata; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 struct xlgmac_desc_data* FUNC_0 (struct xlgmac_ring*,unsigned int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 struct netdev_queue* FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct netdev_queue*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (struct xlgmac_pdata*) ;
 int FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct xlgmac_dma_desc*) ;
 scalar_t__ FUNC_9 (struct xlgmac_dma_desc*) ;
 int FUNC_10 (struct xlgmac_pdata*,struct xlgmac_desc_data*) ;
 int FUNC_11 (struct xlgmac_desc_data*) ;
 int FUNC_12 (struct xlgmac_pdata*,struct xlgmac_ring*,unsigned int,int,int ) ;
 scalar_t__ FUNC_13 (struct xlgmac_ring*) ;

__attribute__((used)) static int FUNC_14(struct xlgmac_channel *VAR_2)
{
 struct xlgmac_pdata *VAR_3 = VAR_2->pdata;
 struct xlgmac_ring *VAR_4 = VAR_2->tx_ring;
 struct net_device *VAR_5 = VAR_3->netdev;
 unsigned int VAR_6 = 0, VAR_7 = 0;
 struct xlgmac_desc_data *VAR_8;
 struct xlgmac_dma_desc *VAR_9;
 struct xlgmac_desc_ops *VAR_10;
 struct xlgmac_hw_ops *VAR_11;
 struct netdev_queue *VAR_12;
 int VAR_13 = 0;
 unsigned int VAR_14;

 VAR_10 = &VAR_3->desc_ops;
 VAR_11 = &VAR_3->hw_ops;


 if (!VAR_4)
  return 0;

 VAR_14 = VAR_4->cur;


 FUNC_7();

 VAR_12 = FUNC_3(VAR_5, VAR_2->queue_index);

 while ((VAR_13 < VAR_0) &&
        (VAR_4->dirty != VAR_14)) {
  VAR_8 = FUNC_0(VAR_4, VAR_4->dirty);
  VAR_9 = VAR_8->dma_desc;

  if (!VAR_11->tx_complete(VAR_9))
   break;




  FUNC_2();

  if (FUNC_5(VAR_3))
   FUNC_12(VAR_3, VAR_4, VAR_4->dirty, 1, 0);

  if (VAR_11->is_last_desc(VAR_9)) {
   VAR_6 += VAR_8->tx.packets;
   VAR_7 += VAR_8->tx.bytes;
  }


  VAR_10->unmap_desc_data(VAR_3, VAR_8);
  VAR_11->tx_desc_reset(VAR_8);

  VAR_13++;
  VAR_4->dirty++;
 }

 if (!VAR_13)
  return 0;

 FUNC_4(VAR_12, VAR_6, VAR_7);

 if ((VAR_4->tx.queue_stopped == 1) &&
     (FUNC_13(VAR_4) > VAR_1)) {
  VAR_4->tx.queue_stopped = 0;
  FUNC_6(VAR_12);
 }

 FUNC_1("processed=%d\n", VAR_13);

 return VAR_13;
}
