
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_pinctrl {scalar_t__* irq_array; int pctl_dev; int dev; TYPE_1__* desc; int chip; } ;
struct sunxi_desc_function {int muxval; } ;
struct irq_data {size_t hwirq; } ;
struct TYPE_2__ {scalar_t__ pin_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct sunxi_pinctrl* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 struct sunxi_desc_function* FUNC_4 (struct sunxi_pinctrl*,scalar_t__,char*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_1)
{
 struct sunxi_pinctrl *VAR_2 = FUNC_2(VAR_1);
 struct sunxi_desc_function *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_2,
     VAR_2->irq_array[VAR_1->hwirq], "irq");
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2->chip,
   VAR_2->irq_array[VAR_1->hwirq] - VAR_2->desc->pin_base);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "unable to lock HW IRQ %lu for IRQ\n",
   FUNC_3(VAR_1));
  return VAR_4;
 }


 FUNC_5(VAR_2->pctl_dev, VAR_2->irq_array[VAR_1->hwirq], VAR_3->muxval);

 return 0;
}
