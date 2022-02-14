
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct igc_ring {unsigned int queue_index; int count; struct igc_q_vector* q_vector; int netdev; int * dev; } ;
struct TYPE_4__ {int work_limit; } ;
struct igc_q_vector {int itr_val; TYPE_2__ rx; TYPE_2__ tx; struct igc_ring* ring; scalar_t__ itr_register; struct igc_adapter* adapter; int napi; } ;
struct igc_adapter {int rx_itr_setting; int tx_itr_setting; struct igc_ring** rx_ring; int rx_ring_count; int netdev; TYPE_1__* pdev; struct igc_ring** tx_ring; int tx_ring_count; scalar_t__ io_addr; int tx_work_limit; struct igc_q_vector** q_vector; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct igc_ring*,TYPE_2__*) ;
 int VAR_3 ;
 struct igc_q_vector* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct igc_q_vector*,int ,int ) ;
 int FUNC_4 (int ,int *,int ,int) ;
 int FUNC_5 (struct igc_q_vector*,struct igc_ring*,int) ;

__attribute__((used)) static int FUNC_6(struct igc_adapter *VAR_4,
         unsigned int VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, unsigned int VAR_8,
         unsigned int VAR_9, unsigned int VAR_10)
{
 struct igc_q_vector *VAR_11;
 struct igc_ring *VAR_12;
 int VAR_13;


 if (VAR_7 > 1 || VAR_9 > 1)
  return -VAR_0;

 VAR_13 = VAR_7 + VAR_9;


 VAR_11 = VAR_4->q_vector[VAR_6];
 if (!VAR_11)
  VAR_11 = FUNC_2(FUNC_5(VAR_11, VAR_12, VAR_13),
       VAR_1);
 else
  FUNC_3(VAR_11, 0, FUNC_5(VAR_11, VAR_12, VAR_13));
 if (!VAR_11)
  return -VAR_0;


 FUNC_4(VAR_4->netdev, &VAR_11->napi,
         VAR_3, 64);


 VAR_4->q_vector[VAR_6] = VAR_11;
 VAR_11->adapter = VAR_4;


 VAR_11->tx.work_limit = VAR_4->tx_work_limit;


 VAR_11->itr_register = VAR_4->io_addr + FUNC_0(0);
 VAR_11->itr_val = VAR_2;


 VAR_12 = VAR_11->ring;


 if (VAR_9) {

  if (!VAR_4->rx_itr_setting || VAR_4->rx_itr_setting > 3)
   VAR_11->itr_val = VAR_4->rx_itr_setting;
 } else {

  if (!VAR_4->tx_itr_setting || VAR_4->tx_itr_setting > 3)
   VAR_11->itr_val = VAR_4->tx_itr_setting;
 }

 if (VAR_7) {

  VAR_12->dev = &VAR_4->pdev->dev;
  VAR_12->netdev = VAR_4->netdev;


  VAR_12->q_vector = VAR_11;


  FUNC_1(VAR_12, &VAR_11->tx);


  VAR_12->count = VAR_4->tx_ring_count;
  VAR_12->queue_index = VAR_8;


  VAR_4->tx_ring[VAR_8] = VAR_12;


  VAR_12++;
 }

 if (VAR_9) {

  VAR_12->dev = &VAR_4->pdev->dev;
  VAR_12->netdev = VAR_4->netdev;


  VAR_12->q_vector = VAR_11;


  FUNC_1(VAR_12, &VAR_11->rx);


  VAR_12->count = VAR_4->rx_ring_count;
  VAR_12->queue_index = VAR_10;


  VAR_4->rx_ring[VAR_10] = VAR_12;
 }

 return 0;
}
