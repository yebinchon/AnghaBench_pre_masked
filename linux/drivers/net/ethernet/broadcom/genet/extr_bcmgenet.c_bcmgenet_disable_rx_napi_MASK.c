
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int work; } ;
struct TYPE_5__ {TYPE_1__ dim; } ;
struct bcmgenet_rx_ring {TYPE_2__ dim; int napi; } ;
struct bcmgenet_priv {struct bcmgenet_rx_ring* rx_rings; TYPE_3__* hw_params; } ;
struct TYPE_6__ {unsigned int rx_queues; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bcmgenet_priv *VAR_1)
{
 unsigned int VAR_2;
 struct bcmgenet_rx_ring *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->hw_params->rx_queues; ++VAR_2) {
  VAR_3 = &VAR_1->rx_rings[VAR_2];
  FUNC_1(&VAR_3->napi);
  FUNC_0(&VAR_3->dim.dim.work);
 }

 VAR_3 = &VAR_1->rx_rings[VAR_0];
 FUNC_1(&VAR_3->napi);
 FUNC_0(&VAR_3->dim.dim.work);
}
