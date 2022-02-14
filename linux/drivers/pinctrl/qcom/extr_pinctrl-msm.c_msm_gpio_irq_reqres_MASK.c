
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_pinctrl {int pctrl; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int owner; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 struct msm_pinctrl* FUNC_1 (struct gpio_chip*) ;
 scalar_t__ FUNC_2 (struct gpio_chip*,int ) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct gpio_chip*,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_3(VAR_2);
 struct msm_pinctrl *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 if (!FUNC_7(VAR_3->owner))
  return -VAR_1;

 VAR_5 = FUNC_6(VAR_4->pctrl, ((void*)0), VAR_2->hwirq);
 if (VAR_5)
  goto out;
 FUNC_5(VAR_3, VAR_2->hwirq);

 if (FUNC_2(VAR_3, VAR_2->hwirq)) {
  FUNC_0(VAR_3->parent,
   "unable to lock HW IRQ %lu for IRQ\n",
   VAR_2->hwirq);
  VAR_5 = -VAR_0;
  goto out;
 }
 return 0;
out:
 FUNC_4(VAR_3->owner);
 return VAR_5;
}
