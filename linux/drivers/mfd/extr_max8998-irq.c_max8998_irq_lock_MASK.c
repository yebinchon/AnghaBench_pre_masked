
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8998_dev {int irqlock; } ;
struct irq_data {int dummy; } ;


 struct max8998_dev* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct max8998_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->irqlock);
}
