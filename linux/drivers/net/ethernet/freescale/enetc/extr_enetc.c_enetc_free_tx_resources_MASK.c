
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_ndev_priv {int num_tx_rings; int * tx_ring; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct enetc_ndev_priv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_rings; VAR_1++)
  FUNC_0(VAR_0->tx_ring[VAR_1]);
}
