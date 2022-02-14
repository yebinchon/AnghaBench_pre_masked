
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sense; int masked; } ;
struct sx150x_pinctrl {int lock; TYPE_2__ irq; TYPE_1__* data; int regmap; } ;
struct irq_data {int dummy; } ;
struct TYPE_3__ {int reg_sense; int reg_irq_mask; } ;


 struct sx150x_pinctrl* FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct sx150x_pinctrl *VAR_1 =
   FUNC_0(FUNC_1(VAR_0));

 FUNC_3(VAR_1->regmap, VAR_1->data->reg_irq_mask, VAR_1->irq.masked);
 FUNC_3(VAR_1->regmap, VAR_1->data->reg_sense, VAR_1->irq.sense);
 FUNC_2(&VAR_1->lock);
}
