
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {int rx_ring_num; TYPE_1__** rx_cq; int * rx_ring; int port_up; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx4_en_priv *VAR_0)
{
 int VAR_1;

 if (!VAR_0->port_up)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->rx_ring_num; VAR_1++) {
  if (FUNC_2(VAR_0->rx_ring[VAR_1])) {
   FUNC_0();
   FUNC_3(&VAR_0->rx_cq[VAR_1]->napi);
   FUNC_1();
  }
 }
}
