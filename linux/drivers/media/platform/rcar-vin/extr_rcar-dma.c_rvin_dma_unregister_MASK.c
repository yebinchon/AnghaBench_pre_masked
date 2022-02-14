
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvin_dev {int v4l2_dev; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct rvin_dev *VAR_0)
{
 FUNC_0(&VAR_0->lock);

 FUNC_1(&VAR_0->v4l2_dev);
}
