
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; } ;
struct mcp23s08 {int irq; int irq_chip; struct gpio_chip chip; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gpio_chip*,int *,int ,int ,int ) ;
 int FUNC_2 (struct gpio_chip*,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct mcp23s08 *VAR_2)
{
 struct gpio_chip *VAR_3 = &VAR_2->chip;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3,
        &VAR_2->irq_chip,
        0,
        VAR_1,
        VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_3->parent,
   "could not connect irqchip to gpiochip: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_2(VAR_3,
        &VAR_2->irq_chip,
        VAR_2->irq);

 return 0;
}
