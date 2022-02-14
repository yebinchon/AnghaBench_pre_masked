
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmk_gpio_chip {int clk; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ) ;
 struct nmk_gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static unsigned int FUNC_3(struct irq_data *VAR_0)
{
 struct nmk_gpio_chip *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk);
 FUNC_2(VAR_0);
 return 0;
}
