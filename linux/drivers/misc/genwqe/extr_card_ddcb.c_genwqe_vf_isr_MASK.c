
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int queue_waitq; int irqs_processed; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct genwqe_dev *VAR_3 = (struct genwqe_dev *)VAR_2;

 VAR_3->irqs_processed++;
 FUNC_0(&VAR_3->queue_waitq);

 return VAR_0;
}
