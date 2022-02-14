
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {int irq_domain; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct samsung_pin_bank* FUNC_0 (struct gpio_chip*) ;
 unsigned int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct samsung_pin_bank *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;

 if (!VAR_3->irq_domain)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3->irq_domain, VAR_2);

 return (VAR_4) ? : -VAR_0;
}
