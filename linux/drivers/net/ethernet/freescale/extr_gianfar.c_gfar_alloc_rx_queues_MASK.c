
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfar_private {int num_rx_queues; int ndev; TYPE_1__** rx_queue; } ;
struct gfar_priv_rx_q {int dummy; } ;
struct TYPE_2__ {int qindex; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct gfar_private *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_rx_queues; VAR_3++) {
  VAR_2->rx_queue[VAR_3] = FUNC_0(sizeof(struct gfar_priv_rx_q),
         VAR_1);
  if (!VAR_2->rx_queue[VAR_3])
   return -VAR_0;

  VAR_2->rx_queue[VAR_3]->qindex = VAR_3;
  VAR_2->rx_queue[VAR_3]->ndev = VAR_2->ndev;
 }
 return 0;
}
