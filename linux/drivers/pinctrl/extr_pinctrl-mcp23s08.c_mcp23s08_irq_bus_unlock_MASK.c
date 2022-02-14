
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp23s08 {int lock; int regmap; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 struct mcp23s08* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_1(VAR_0);
 struct mcp23s08 *VAR_2 = FUNC_0(VAR_1);

 FUNC_3(VAR_2->regmap, 0);
 FUNC_4(VAR_2->regmap);

 FUNC_2(&VAR_2->lock);
}
