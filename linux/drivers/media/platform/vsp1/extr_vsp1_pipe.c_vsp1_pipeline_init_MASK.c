
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_pipeline {int state; int entities; int kref; int wq; int irqlock; int lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct vsp1_pipeline *VAR_1)
{
 FUNC_3(&VAR_1->lock);
 FUNC_4(&VAR_1->irqlock);
 FUNC_1(&VAR_1->wq);
 FUNC_2(&VAR_1->kref);

 FUNC_0(&VAR_1->entities);
 VAR_1->state = VAR_0;
}
