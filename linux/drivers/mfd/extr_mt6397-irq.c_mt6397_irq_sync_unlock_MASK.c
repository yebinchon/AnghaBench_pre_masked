
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt6397_chip {int irqlock; int * irq_masks_cur; int * int_con; int regmap; } ;
struct irq_data {int dummy; } ;


 struct mt6397_chip* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct mt6397_chip *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->regmap, VAR_1->int_con[0],
       VAR_1->irq_masks_cur[0]);
 FUNC_2(VAR_1->regmap, VAR_1->int_con[1],
       VAR_1->irq_masks_cur[1]);

 FUNC_1(&VAR_1->irqlock);
}
