
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvcs_struct {int lock; int todo_mask; int vdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct hvcs_struct *VAR_4 = VAR_3;

 FUNC_1(&VAR_4->lock);
 FUNC_3(VAR_4->vdev);
 VAR_4->todo_mask |= VAR_0;
 FUNC_2(&VAR_4->lock);
 FUNC_0();

 return VAR_1;
}
