
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcmgenet_tx_ring {int napi; } ;
struct bcmgenet_priv {struct bcmgenet_tx_ring* tx_rings; TYPE_1__* hw_params; } ;
struct TYPE_2__ {unsigned int tx_queues; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bcmgenet_priv *VAR_1)
{
 unsigned int VAR_2;
 struct bcmgenet_tx_ring *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->hw_params->tx_queues; ++VAR_2) {
  VAR_3 = &VAR_1->tx_rings[VAR_2];
  FUNC_0(&VAR_3->napi);
 }

 VAR_3 = &VAR_1->tx_rings[VAR_0];
 FUNC_0(&VAR_3->napi);
}
