
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc16is7xx_port {int irq_work; int kworker; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct sc16is7xx_port *VAR_3 = (struct sc16is7xx_port *)VAR_2;

 FUNC_0(&VAR_3->kworker, &VAR_3->irq_work);

 return VAR_0;
}
