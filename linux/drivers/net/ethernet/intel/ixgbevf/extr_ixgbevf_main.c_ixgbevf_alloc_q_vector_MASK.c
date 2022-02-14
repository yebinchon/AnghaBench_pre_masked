
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbevf_ring {int queue_index; int reg_idx; int count; struct ixgbevf_q_vector* q_vector; int netdev; int * dev; } ;
struct ixgbevf_q_vector {int v_idx; int rx; int tx; struct ixgbevf_ring* ring; struct ixgbevf_adapter* adapter; int napi; } ;
struct ixgbevf_adapter {struct ixgbevf_ring** rx_ring; int rx_ring_count; int netdev; TYPE_1__* pdev; struct ixgbevf_ring** xdp_ring; int tx_ring_count; struct ixgbevf_ring** tx_ring; struct ixgbevf_q_vector** q_vector; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbevf_ring*,int *) ;
 int VAR_2 ;
 struct ixgbevf_q_vector* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int ,int) ;
 int FUNC_3 (struct ixgbevf_ring*) ;

__attribute__((used)) static int FUNC_4(struct ixgbevf_adapter *VAR_3, int VAR_4,
      int VAR_5, int VAR_6,
      int VAR_7, int VAR_8,
      int VAR_9, int VAR_10)
{
 struct ixgbevf_q_vector *VAR_11;
 int VAR_12 = VAR_6 + VAR_8;
 struct ixgbevf_ring *VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = VAR_5 + VAR_7 + VAR_9;
 VAR_15 = sizeof(*VAR_11) + (sizeof(*VAR_13) * VAR_14);


 VAR_11 = FUNC_1(VAR_15, VAR_1);
 if (!VAR_11)
  return -VAR_0;


 FUNC_2(VAR_3->netdev, &VAR_11->napi, VAR_2, 64);


 VAR_3->q_vector[VAR_4] = VAR_11;
 VAR_11->adapter = VAR_3;
 VAR_11->v_idx = VAR_4;


 VAR_13 = VAR_11->ring;

 while (VAR_5) {

  VAR_13->dev = &VAR_3->pdev->dev;
  VAR_13->netdev = VAR_3->netdev;


  VAR_13->q_vector = VAR_11;


  FUNC_0(VAR_13, &VAR_11->tx);


  VAR_13->count = VAR_3->tx_ring_count;
  VAR_13->queue_index = VAR_6;
  VAR_13->reg_idx = VAR_12;


   VAR_3->tx_ring[VAR_6] = VAR_13;


  VAR_5--;
  VAR_6++;
  VAR_12++;


  VAR_13++;
 }

 while (VAR_7) {

  VAR_13->dev = &VAR_3->pdev->dev;
  VAR_13->netdev = VAR_3->netdev;


  VAR_13->q_vector = VAR_11;


  FUNC_0(VAR_13, &VAR_11->tx);


  VAR_13->count = VAR_3->tx_ring_count;
  VAR_13->queue_index = VAR_8;
  VAR_13->reg_idx = VAR_12;
  FUNC_3(VAR_13);


  VAR_3->xdp_ring[VAR_8] = VAR_13;


  VAR_7--;
  VAR_8++;
  VAR_12++;


  VAR_13++;
 }

 while (VAR_9) {

  VAR_13->dev = &VAR_3->pdev->dev;
  VAR_13->netdev = VAR_3->netdev;


  VAR_13->q_vector = VAR_11;


  FUNC_0(VAR_13, &VAR_11->rx);


  VAR_13->count = VAR_3->rx_ring_count;
  VAR_13->queue_index = VAR_10;
  VAR_13->reg_idx = VAR_10;


  VAR_3->rx_ring[VAR_10] = VAR_13;


  VAR_9--;
  VAR_10++;


  VAR_13++;
 }

 return 0;
}
