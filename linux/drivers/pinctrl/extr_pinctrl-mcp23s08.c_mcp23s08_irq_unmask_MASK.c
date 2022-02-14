
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp23s08 {int dummy; } ;
struct irq_data {unsigned int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct mcp23s08* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct mcp23s08*,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_1(VAR_1);
 struct mcp23s08 *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = VAR_1->hwirq;

 FUNC_2(VAR_3, VAR_0, VAR_4, 1);
}
