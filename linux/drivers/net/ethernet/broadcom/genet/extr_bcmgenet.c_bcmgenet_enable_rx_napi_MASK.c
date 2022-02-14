
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcmgenet_rx_ring {int (* int_enable ) (struct bcmgenet_rx_ring*) ;int napi; } ;
struct bcmgenet_priv {struct bcmgenet_rx_ring* rx_rings; TYPE_1__* hw_params; } ;
struct TYPE_2__ {unsigned int rx_queues; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bcmgenet_rx_ring*) ;
 int FUNC_2 (struct bcmgenet_rx_ring*) ;

__attribute__((used)) static void FUNC_3(struct bcmgenet_priv *VAR_1)
{
 unsigned int VAR_2;
 struct bcmgenet_rx_ring *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->hw_params->rx_queues; ++VAR_2) {
  VAR_3 = &VAR_1->rx_rings[VAR_2];
  FUNC_0(&VAR_3->napi);
  VAR_3->int_enable(VAR_3);
 }

 VAR_3 = &VAR_1->rx_rings[VAR_0];
 FUNC_0(&VAR_3->napi);
 VAR_3->int_enable(VAR_3);
}
