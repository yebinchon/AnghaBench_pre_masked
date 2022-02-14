
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct vmxnet3_adapter {int num_rx_queues; int state; TYPE_4__* rx_queue; TYPE_5__* netdev; int cmd_lock; int shared_pa; TYPE_2__* tx_queue; int rx_buf_per_pkt; int skb_buf_size; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_11__ {int napi; TYPE_3__* rx_ring; } ;
struct TYPE_10__ {int next2fill; int size; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_9__ {TYPE_1__ tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vmxnet3_adapter*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct vmxnet3_adapter*,scalar_t__,int ) ;
 int FUNC_4 (struct vmxnet3_adapter*,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_5__*,char*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct vmxnet3_adapter*,int) ;
 int FUNC_12 (struct vmxnet3_adapter*) ;
 int FUNC_13 (struct vmxnet3_adapter*) ;
 int FUNC_14 (struct vmxnet3_adapter*) ;
 int FUNC_15 (struct vmxnet3_adapter*) ;
 int FUNC_16 (struct vmxnet3_adapter*) ;
 int FUNC_17 (struct vmxnet3_adapter*) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (struct vmxnet3_adapter*) ;
 int FUNC_20 (struct vmxnet3_adapter*) ;

int
FUNC_21(struct vmxnet3_adapter *VAR_9)
{
 int VAR_10, VAR_11;
 u32 VAR_12;
 unsigned long VAR_13;

 FUNC_7(VAR_9->netdev, "%s: skb_buf_size %d, rx_buf_per_pkt %d,"
  " ring sizes %u %u %u\n", VAR_9->netdev->name,
  VAR_9->skb_buf_size, VAR_9->rx_buf_per_pkt,
  VAR_9->tx_queue[0].tx_ring.size,
  VAR_9->rx_queue[0].rx_ring[0].size,
  VAR_9->rx_queue[0].rx_ring[1].size);

 FUNC_20(VAR_9);
 VAR_10 = FUNC_17(VAR_9);
 if (VAR_10) {
  FUNC_8(VAR_9->netdev,
      "Failed to init rx queue error %d\n", VAR_10);
  goto rq_err;
 }

 VAR_10 = FUNC_15(VAR_9);
 if (VAR_10) {
  FUNC_8(VAR_9->netdev,
      "Failed to setup irq for error %d\n", VAR_10);
  goto irq_err;
 }

 FUNC_19(VAR_9);

 FUNC_4(VAR_9, VAR_5, FUNC_1(
          VAR_9->shared_pa));
 FUNC_4(VAR_9, VAR_4, FUNC_0(
          VAR_9->shared_pa));
 FUNC_9(&VAR_9->cmd_lock, VAR_13);
 FUNC_4(VAR_9, VAR_3,
          VAR_1);
 VAR_12 = FUNC_2(VAR_9, VAR_3);
 FUNC_10(&VAR_9->cmd_lock, VAR_13);

 if (VAR_12 != 0) {
  FUNC_8(VAR_9->netdev,
      "Failed to activate dev: error %u\n", VAR_12);
  VAR_10 = -VAR_0;
  goto activate_err;
 }

 FUNC_14(VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_9->num_rx_queues; VAR_11++) {
  FUNC_3(VAR_9,
    VAR_6 + VAR_11 * VAR_2,
    VAR_9->rx_queue[VAR_11].rx_ring[0].next2fill);
  FUNC_3(VAR_9, (VAR_7 +
    (VAR_11 * VAR_2)),
    VAR_9->rx_queue[VAR_11].rx_ring[1].next2fill);
 }


 FUNC_18(VAR_9->netdev);





 FUNC_11(VAR_9, 1);
 for (VAR_11 = 0; VAR_11 < VAR_9->num_rx_queues; VAR_11++)
  FUNC_6(&VAR_9->rx_queue[VAR_11].napi);
 FUNC_12(VAR_9);
 FUNC_5(VAR_8, &VAR_9->state);
 return 0;

activate_err:
 FUNC_4(VAR_9, VAR_5, 0);
 FUNC_4(VAR_9, VAR_4, 0);
 FUNC_13(VAR_9);
irq_err:
rq_err:

 FUNC_16(VAR_9);
 return VAR_10;
}
