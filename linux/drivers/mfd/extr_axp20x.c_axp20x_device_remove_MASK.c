
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp20x_dev {int regmap_irqc; int irq; int dev; } ;


 struct axp20x_dev* VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct axp20x_dev *VAR_2)
{
 if (VAR_2 == VAR_0) {
  VAR_0 = ((void*)0);
  VAR_1 = ((void*)0);
 }

 FUNC_0(VAR_2->dev);
 FUNC_1(VAR_2->irq, VAR_2->regmap_irqc);

 return 0;
}
