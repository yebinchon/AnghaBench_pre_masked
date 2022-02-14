
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ixgbe_adapter {int num_q_vectors; int num_rx_queues; int num_tx_queues; int num_xdp_queues; int flags; TYPE_3__** xdp_ring; TYPE_2__** tx_ring; TYPE_1__** rx_ring; } ;
struct TYPE_6__ {int ring_idx; } ;
struct TYPE_5__ {int ring_idx; } ;
struct TYPE_4__ {int ring_idx; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_adapter*,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (struct ixgbe_adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct ixgbe_adapter *VAR_2)
{
 int VAR_3 = VAR_2->num_q_vectors;
 int VAR_4 = VAR_2->num_rx_queues;
 int VAR_5 = VAR_2->num_tx_queues;
 int VAR_6 = VAR_2->num_xdp_queues;
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 int VAR_11, VAR_12;


 if (!(VAR_2->flags & VAR_1))
  VAR_3 = 1;

 if (VAR_3 >= (VAR_4 + VAR_5 + VAR_6)) {
  for (; VAR_4; VAR_10++) {
   VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_10,
         0, 0, 0, 0, 1, VAR_7);

   if (VAR_11)
    goto err_out;


   VAR_4--;
   VAR_7++;
  }
 }

 for (; VAR_10 < VAR_3; VAR_10++) {
  int VAR_13 = FUNC_0(VAR_4, VAR_3 - VAR_10);
  int VAR_14 = FUNC_0(VAR_5, VAR_3 - VAR_10);
  int VAR_15 = FUNC_0(VAR_6, VAR_3 - VAR_10);

  VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_10,
        VAR_14, VAR_8,
        VAR_15, VAR_9,
        VAR_13, VAR_7);

  if (VAR_11)
   goto err_out;


  VAR_4 -= VAR_13;
  VAR_5 -= VAR_14;
  VAR_6 -= VAR_15;
  VAR_7++;
  VAR_8++;
  VAR_9 += VAR_15;
 }

 for (VAR_12 = 0; VAR_12 < VAR_2->num_rx_queues; VAR_12++) {
  if (VAR_2->rx_ring[VAR_12])
   VAR_2->rx_ring[VAR_12]->ring_idx = VAR_12;
 }

 for (VAR_12 = 0; VAR_12 < VAR_2->num_tx_queues; VAR_12++) {
  if (VAR_2->tx_ring[VAR_12])
   VAR_2->tx_ring[VAR_12]->ring_idx = VAR_12;
 }

 for (VAR_12 = 0; VAR_12 < VAR_2->num_xdp_queues; VAR_12++) {
  if (VAR_2->xdp_ring[VAR_12])
   VAR_2->xdp_ring[VAR_12]->ring_idx = VAR_12;
 }

 return 0;

err_out:
 VAR_2->num_tx_queues = 0;
 VAR_2->num_xdp_queues = 0;
 VAR_2->num_rx_queues = 0;
 VAR_2->num_q_vectors = 0;

 while (VAR_10--)
  FUNC_2(VAR_2, VAR_10);

 return -VAR_0;
}
