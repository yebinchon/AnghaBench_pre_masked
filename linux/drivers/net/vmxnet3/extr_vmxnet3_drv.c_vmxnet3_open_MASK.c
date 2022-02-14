
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vmxnet3_adapter {int num_tx_queues; int txdata_desc_size; int rxdata_desc_size; int rx_ring2_size; int rx_ring_size; int tx_ring_size; int cmd_lock; TYPE_1__* tx_queue; } ;
struct net_device {int dummy; } ;
struct Vmxnet3_TxDataDesc {int dummy; } ;
struct TYPE_2__ {int tx_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct vmxnet3_adapter*) ;
 int FUNC_2 (struct vmxnet3_adapter*,int ,int ) ;
 struct vmxnet3_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct vmxnet3_adapter*) ;
 int FUNC_8 (struct vmxnet3_adapter*,int ,int ,int ,int,int ) ;
 int FUNC_9 (struct vmxnet3_adapter*) ;
 int FUNC_10 (struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_11(struct net_device *VAR_5)
{
 struct vmxnet3_adapter *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_3(VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_6->num_tx_queues; VAR_8++)
  FUNC_4(&VAR_6->tx_queue[VAR_8].tx_lock);

 if (FUNC_1(VAR_6)) {
  unsigned long VAR_9;
  u16 VAR_10;

  FUNC_5(&VAR_6->cmd_lock, VAR_9);
  FUNC_2(VAR_6, VAR_1,
           VAR_0);
  VAR_10 = FUNC_0(VAR_6,
        VAR_1);
  FUNC_6(&VAR_6->cmd_lock, VAR_9);

  if ((VAR_10 < VAR_3) ||
      (VAR_10 > VAR_2) ||
      (VAR_10 & VAR_4)) {
   VAR_6->txdata_desc_size =
    sizeof(struct Vmxnet3_TxDataDesc);
  } else {
   VAR_6->txdata_desc_size = VAR_10;
  }
 } else {
  VAR_6->txdata_desc_size = sizeof(struct Vmxnet3_TxDataDesc);
 }

 VAR_7 = FUNC_8(VAR_6,
        VAR_6->tx_ring_size,
        VAR_6->rx_ring_size,
        VAR_6->rx_ring2_size,
        VAR_6->txdata_desc_size,
        VAR_6->rxdata_desc_size);
 if (VAR_7)
  goto queue_err;

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7)
  goto activate_err;

 return 0;

activate_err:
 FUNC_9(VAR_6);
 FUNC_10(VAR_6);
queue_err:
 return VAR_7;
}
