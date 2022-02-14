
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_pipeline {scalar_t__ state; int irqlock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

bool FUNC_2(struct vsp1_pipeline *VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_0(&VAR_1->irqlock, VAR_2);
 VAR_3 = VAR_1->state == VAR_0;
 FUNC_1(&VAR_1->irqlock, VAR_2);

 return VAR_3;
}
