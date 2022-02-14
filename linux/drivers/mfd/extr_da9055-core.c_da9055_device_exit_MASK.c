
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9055 {int dev; int irq_data; int chip_irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct da9055 *VAR_0)
{
 FUNC_1(VAR_0->chip_irq, VAR_0->irq_data);
 FUNC_0(VAR_0->dev);
}
