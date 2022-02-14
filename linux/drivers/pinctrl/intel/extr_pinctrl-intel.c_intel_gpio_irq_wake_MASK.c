
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct intel_pinctrl {int dev; int irq; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ,char*,char*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct intel_pinctrl* FUNC_3 (struct gpio_chip*) ;
 unsigned int FUNC_4 (struct intel_pinctrl*,int ,int *,int *) ;
 struct gpio_chip* FUNC_5 (struct irq_data*) ;
 int FUNC_6 (struct irq_data*) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_5(VAR_0);
 struct intel_pinctrl *VAR_3 = FUNC_3(VAR_2);
 unsigned int VAR_4 = FUNC_4(VAR_3, FUNC_6(VAR_0), ((void*)0), ((void*)0));

 if (VAR_1)
  FUNC_2(VAR_3->irq);
 else
  FUNC_1(VAR_3->irq);

 FUNC_0(VAR_3->dev, "%sable wake for pin %u\n", VAR_1 ? "en" : "dis", VAR_4);
 return 0;
}
