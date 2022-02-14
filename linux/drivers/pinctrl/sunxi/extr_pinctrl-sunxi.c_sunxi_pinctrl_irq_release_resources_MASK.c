
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_pinctrl {TYPE_1__* desc; scalar_t__* irq_array; int chip; } ;
struct irq_data {size_t hwirq; } ;
struct TYPE_2__ {scalar_t__ pin_base; } ;


 int FUNC_0 (int ,scalar_t__) ;
 struct sunxi_pinctrl* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct sunxi_pinctrl *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->chip,
         VAR_1->irq_array[VAR_0->hwirq] - VAR_1->desc->pin_base);
}
