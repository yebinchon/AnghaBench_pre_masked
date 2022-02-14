
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int dev; int node; int lock; int state; scalar_t__ auto_boot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rproc*) ;
 int VAR_2 ;
 int FUNC_5 (struct rproc*) ;

int FUNC_6(struct rproc *VAR_3)
{
 if (!VAR_3)
  return -VAR_0;



 if (VAR_3->auto_boot)
  FUNC_5(VAR_3);

 FUNC_2(&VAR_3->lock);
 VAR_3->state = VAR_1;
 FUNC_3(&VAR_3->lock);

 FUNC_4(VAR_3);


 FUNC_2(&VAR_2);
 FUNC_1(&VAR_3->node);
 FUNC_3(&VAR_2);

 FUNC_0(&VAR_3->dev);

 return 0;
}
