
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb {int dev; int wq; int lock; int ctl; TYPE_1__* cm_ops; } ;
struct TYPE_2__ {int (* stop ) (struct tb*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tb*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct tb *VAR_0)
{
 FUNC_2(&VAR_0->lock);
 if (VAR_0->cm_ops->stop)
  VAR_0->cm_ops->stop(VAR_0);

 FUNC_5(VAR_0->ctl);
 FUNC_3(&VAR_0->lock);

 FUNC_1(VAR_0->wq);
 FUNC_0(&VAR_0->dev);
}
