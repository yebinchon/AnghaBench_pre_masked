
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rio_dev {int pef; TYPE_2__* net; TYPE_1__* rswitch; int net_list; int global_list; int dev; int state; } ;
struct TYPE_4__ {int switches; int devices; } ;
struct TYPE_3__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct rio_dev *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_4->state, VAR_0);
 VAR_5 = FUNC_1(&VAR_4->dev);
 if (VAR_5)
  return VAR_5;

 FUNC_3(&VAR_3);
 FUNC_2(&VAR_4->global_list, &VAR_2);
 if (VAR_4->net) {
  FUNC_2(&VAR_4->net_list, &VAR_4->net->devices);
  if (VAR_4->pef & VAR_1)
   FUNC_2(&VAR_4->rswitch->node,
          &VAR_4->net->switches);
 }
 FUNC_4(&VAR_3);

 return 0;
}
