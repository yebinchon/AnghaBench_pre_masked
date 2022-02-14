
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_ring {int state; TYPE_1__* q_vector; } ;
struct ixgbe_adapter {struct ixgbe_ring** xdp_ring; struct ixgbe_ring** tx_ring; struct ixgbe_ring** rx_ring; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_2 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ixgbe_adapter *VAR_1, int VAR_2)
{
 struct ixgbe_ring *VAR_3, *VAR_4, *VAR_5;

 VAR_3 = VAR_1->rx_ring[VAR_2];
 VAR_4 = VAR_1->tx_ring[VAR_2];
 VAR_5 = VAR_1->xdp_ring[VAR_2];


 FUNC_3(&VAR_3->q_vector->napi);

 FUNC_2(VAR_1, VAR_4);
 if (VAR_5)
  FUNC_2(VAR_1, VAR_5);
 FUNC_1(VAR_1, VAR_3);

 FUNC_0(VAR_0, &VAR_4->state);
 if (VAR_5)
  FUNC_0(VAR_0, &VAR_5->state);
}
