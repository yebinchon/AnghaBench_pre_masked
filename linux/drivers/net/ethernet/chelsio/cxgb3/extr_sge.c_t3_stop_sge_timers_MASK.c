
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ function; } ;
struct sge_qset {TYPE_2__ rx_reclaim_timer; TYPE_2__ tx_reclaim_timer; } ;
struct TYPE_3__ {struct sge_qset* qs; } ;
struct adapter {TYPE_1__ sge; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(struct adapter *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  struct sge_qset *VAR_3 = &VAR_1->sge.qs[VAR_2];

  if (VAR_3->tx_reclaim_timer.function)
   FUNC_0(&VAR_3->tx_reclaim_timer);
  if (VAR_3->rx_reclaim_timer.function)
   FUNC_0(&VAR_3->rx_reclaim_timer);
 }
}
