
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ena_adapter {int requested_tx_ring_size; int requested_rx_ring_size; int netdev; TYPE_2__* rx_ring; TYPE_1__* tx_ring; } ;
struct TYPE_4__ {int ring_size; } ;
struct TYPE_3__ {int ring_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ena_adapter*) ;
 int FUNC_1 (struct ena_adapter*) ;
 int FUNC_2 (struct ena_adapter*) ;
 int FUNC_3 (struct ena_adapter*) ;
 int FUNC_4 (struct ena_adapter*) ;
 int FUNC_5 (struct ena_adapter*) ;
 int FUNC_6 (struct ena_adapter*) ;
 int VAR_2 ;
 int FUNC_7 (struct ena_adapter*,int ,int ,char*,int,...) ;
 int FUNC_8 (struct ena_adapter*,int,int) ;

__attribute__((used)) static int FUNC_9(struct ena_adapter *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;




 FUNC_8(VAR_3, VAR_3->requested_tx_ring_size,
     VAR_3->requested_rx_ring_size);

 while (1) {
  VAR_4 = FUNC_6(VAR_3);
  if (VAR_4)
   goto err_setup_tx;

  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   goto err_create_tx_queues;

  VAR_4 = FUNC_5(VAR_3);
  if (VAR_4)
   goto err_setup_rx;

  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4)
   goto err_create_rx_queues;

  return 0;

err_create_rx_queues:
  FUNC_3(VAR_3);
err_setup_rx:
  FUNC_2(VAR_3);
err_create_tx_queues:
  FUNC_4(VAR_3);
err_setup_tx:
  if (VAR_4 != -VAR_1) {
   FUNC_7(VAR_3, VAR_2, VAR_3->netdev,
      "Queue creation failed with error code %d\n",
      VAR_4);
   return VAR_4;
  }

  VAR_6 = VAR_3->tx_ring[0].ring_size;
  VAR_5 = VAR_3->rx_ring[0].ring_size;

  FUNC_7(VAR_3, VAR_2, VAR_3->netdev,
     "Not enough memory to create queues with sizes TX=%d, RX=%d\n",
     VAR_6, VAR_5);

  VAR_8 = VAR_6;
  VAR_7 = VAR_5;




  if (VAR_5 <= VAR_6)
   VAR_8 = VAR_6 / 2;
  if (VAR_5 >= VAR_6)
   VAR_7 = VAR_5 / 2;

  if (VAR_8 < VAR_0 ||
      VAR_7 < VAR_0) {
   FUNC_7(VAR_3, VAR_2, VAR_3->netdev,
      "Queue creation failed with the smallest possible queue size of %d for both queues. Not retrying with smaller queues\n",
      VAR_0);
   return VAR_4;
  }

  FUNC_7(VAR_3, VAR_2, VAR_3->netdev,
     "Retrying queue creation with sizes TX=%d, RX=%d\n",
     VAR_8,
     VAR_7);

  FUNC_8(VAR_3, VAR_8,
      VAR_7);
 }
}
