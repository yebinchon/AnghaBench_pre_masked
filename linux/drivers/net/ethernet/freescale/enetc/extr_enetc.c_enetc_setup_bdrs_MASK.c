
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_ndev_priv {int num_tx_rings; int num_rx_rings; int * rx_ring; TYPE_1__* si; int * tx_ring; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct enetc_ndev_priv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_rings; VAR_1++)
  FUNC_1(&VAR_0->si->hw, VAR_0->tx_ring[VAR_1]);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_rings; VAR_1++)
  FUNC_0(&VAR_0->si->hw, VAR_0->rx_ring[VAR_1]);
}
