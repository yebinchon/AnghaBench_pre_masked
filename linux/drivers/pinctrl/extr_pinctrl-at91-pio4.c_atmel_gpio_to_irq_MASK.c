
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct atmel_pioctrl {int irq_domain; } ;


 struct atmel_pioctrl* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct atmel_pioctrl *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->irq_domain, VAR_1);
}
