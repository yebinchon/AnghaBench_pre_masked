
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * notifier_call; } ;
struct ionic {TYPE_2__* master_lif; TYPE_3__ nb; int nb_work; } ;
struct TYPE_8__ {scalar_t__ reg_state; } ;
struct TYPE_5__ {int work; } ;
struct TYPE_6__ {TYPE_4__* netdev; int tx_timeout_work; TYPE_1__ deferred; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(struct ionic *VAR_1)
{
 if (VAR_1->nb.notifier_call) {
  FUNC_2(&VAR_1->nb);
  FUNC_0(&VAR_1->nb_work);
  VAR_1->nb.notifier_call = ((void*)0);
 }





 FUNC_0(&VAR_1->master_lif->deferred.work);
 FUNC_0(&VAR_1->master_lif->tx_timeout_work);
 if (VAR_1->master_lif->netdev->reg_state == VAR_0)
  FUNC_1(VAR_1->master_lif->netdev);
}
