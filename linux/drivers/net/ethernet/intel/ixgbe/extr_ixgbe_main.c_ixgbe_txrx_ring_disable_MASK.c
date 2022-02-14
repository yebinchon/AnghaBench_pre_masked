
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_ring {TYPE_1__* q_vector; } ;
struct ixgbe_adapter {struct ixgbe_ring** xdp_ring; struct ixgbe_ring** tx_ring; struct ixgbe_ring** rx_ring; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (struct ixgbe_ring*) ;
 int FUNC_1 (struct ixgbe_ring*) ;
 int FUNC_2 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_3 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_4 (struct ixgbe_ring*) ;
 int FUNC_5 (struct ixgbe_ring*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

void FUNC_8(struct ixgbe_adapter *VAR_0, int VAR_1)
{
 struct ixgbe_ring *VAR_2, *VAR_3, *VAR_4;

 VAR_2 = VAR_0->rx_ring[VAR_1];
 VAR_3 = VAR_0->tx_ring[VAR_1];
 VAR_4 = VAR_0->xdp_ring[VAR_1];

 FUNC_3(VAR_0, VAR_3);
 if (VAR_4)
  FUNC_3(VAR_0, VAR_4);
 FUNC_2(VAR_0, VAR_2);

 if (VAR_4)
  FUNC_7();


 FUNC_6(&VAR_2->q_vector->napi);

 FUNC_1(VAR_3);
 if (VAR_4)
  FUNC_1(VAR_4);
 FUNC_0(VAR_2);

 FUNC_5(VAR_3);
 if (VAR_4)
  FUNC_5(VAR_4);
 FUNC_4(VAR_2);
}
