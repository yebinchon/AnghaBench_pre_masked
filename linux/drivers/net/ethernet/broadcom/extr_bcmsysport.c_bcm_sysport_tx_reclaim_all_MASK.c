
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_sysport_priv {int * tx_rings; TYPE_1__* netdev; } ;
struct TYPE_2__ {unsigned int num_tx_queues; } ;


 int FUNC_0 (struct bcm_sysport_priv*,int *) ;

__attribute__((used)) static void FUNC_1(struct bcm_sysport_priv *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->netdev->num_tx_queues; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->tx_rings[VAR_1]);
}
