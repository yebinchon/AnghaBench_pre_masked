
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pistachio_gpio_bank {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pistachio_gpio_bank*,int ,unsigned int,int) ;
 struct pistachio_gpio_bank* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2,
          int VAR_3)
{
 struct pistachio_gpio_bank *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4, VAR_0, VAR_2, !!VAR_3);
}
