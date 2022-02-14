
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xgbe_ring_desc {int dummy; } ;
struct TYPE_3__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct xgbe_ring_data {TYPE_1__ tx; struct xgbe_ring_desc* rdesc; } ;
struct TYPE_4__ {int queue_stopped; } ;
struct xgbe_ring {unsigned int cur; unsigned int dirty; TYPE_2__ tx; } ;
struct xgbe_desc_if {int (* unmap_rdata ) (struct xgbe_prv_data*,struct xgbe_ring_data*) ;} ;
struct xgbe_hw_if {int (* tx_desc_reset ) (struct xgbe_ring_data*) ;scalar_t__ (* is_last_desc ) (struct xgbe_ring_desc*) ;int (* tx_complete ) (struct xgbe_ring_desc*) ;} ;
struct xgbe_prv_data {struct net_device* netdev; struct xgbe_desc_if desc_if; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {int queue_index; struct xgbe_ring* tx_ring; struct xgbe_prv_data* pdata; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 struct netdev_queue* FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct netdev_queue*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct xgbe_ring_desc*) ;
 scalar_t__ FUNC_9 (struct xgbe_ring_desc*) ;
 int FUNC_10 (struct xgbe_prv_data*,struct xgbe_ring_data*) ;
 int FUNC_11 (struct xgbe_ring_data*) ;
 int FUNC_12 (struct xgbe_prv_data*,struct xgbe_ring*,unsigned int,int,int ) ;
 scalar_t__ FUNC_13 (struct xgbe_ring*) ;

__attribute__((used)) static int FUNC_14(struct xgbe_channel *VAR_2)
{
 struct xgbe_prv_data *VAR_3 = VAR_2->pdata;
 struct xgbe_hw_if *VAR_4 = &VAR_3->hw_if;
 struct xgbe_desc_if *VAR_5 = &VAR_3->desc_if;
 struct xgbe_ring *VAR_6 = VAR_2->tx_ring;
 struct xgbe_ring_data *VAR_7;
 struct xgbe_ring_desc *VAR_8;
 struct net_device *VAR_9 = VAR_3->netdev;
 struct netdev_queue *VAR_10;
 int VAR_11 = 0;
 unsigned int VAR_12 = 0, VAR_13 = 0;
 unsigned int VAR_14;

 FUNC_0("-->xgbe_tx_poll\n");


 if (!VAR_6)
  return 0;

 VAR_14 = VAR_6->cur;


 FUNC_7();

 VAR_10 = FUNC_3(VAR_9, VAR_2->queue_index);

 while ((VAR_11 < VAR_0) &&
        (VAR_6->dirty != VAR_14)) {
  VAR_7 = FUNC_1(VAR_6, VAR_6->dirty);
  VAR_8 = VAR_7->rdesc;

  if (!VAR_4->tx_complete(VAR_8))
   break;



  FUNC_2();

  if (FUNC_5(VAR_3))
   FUNC_12(VAR_3, VAR_6, VAR_6->dirty, 1, 0);

  if (VAR_4->is_last_desc(VAR_8)) {
   VAR_12 += VAR_7->tx.packets;
   VAR_13 += VAR_7->tx.bytes;
  }


  VAR_5->unmap_rdata(VAR_3, VAR_7);
  VAR_4->tx_desc_reset(VAR_7);

  VAR_11++;
  VAR_6->dirty++;
 }

 if (!VAR_11)
  return 0;

 FUNC_4(VAR_10, VAR_12, VAR_13);

 if ((VAR_6->tx.queue_stopped == 1) &&
     (FUNC_13(VAR_6) > VAR_1)) {
  VAR_6->tx.queue_stopped = 0;
  FUNC_6(VAR_10);
 }

 FUNC_0("<--xgbe_tx_poll: processed=%d\n", VAR_11);

 return VAR_11;
}
