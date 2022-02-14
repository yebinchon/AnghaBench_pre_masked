
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct bcmgenet_priv {int * tx_rings; TYPE_1__* hw_params; } ;
struct TYPE_2__ {int tx_queues; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct bcmgenet_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct bcmgenet_priv *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (FUNC_2(VAR_1)) {
  for (VAR_3 = 0; VAR_3 < VAR_2->hw_params->tx_queues; VAR_3++)
   FUNC_0(VAR_1, &VAR_2->tx_rings[VAR_3]);
 }

 FUNC_0(VAR_1, &VAR_2->tx_rings[VAR_0]);
}
