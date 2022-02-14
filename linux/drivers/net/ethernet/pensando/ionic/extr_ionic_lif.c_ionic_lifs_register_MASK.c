
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * notifier_call; } ;
struct ionic {TYPE_2__* master_lif; int dev; TYPE_1__ nb; int nb_work; } ;
struct TYPE_4__ {int registered; int netdev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(struct ionic *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->nb_work, VAR_1);

 VAR_2->nb.notifier_call = VAR_0;

 VAR_3 = FUNC_4(&VAR_2->nb);
 if (VAR_3)
  VAR_2->nb.notifier_call = ((void*)0);


 VAR_3 = FUNC_3(VAR_2->master_lif->netdev);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "Cannot register net device, aborting\n");
  return VAR_3;
 }

 FUNC_2(VAR_2->master_lif);
 VAR_2->master_lif->registered = 1;

 return 0;
}
