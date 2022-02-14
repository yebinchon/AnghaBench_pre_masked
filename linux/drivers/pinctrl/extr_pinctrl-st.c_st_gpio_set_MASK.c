
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_gpio_bank {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct st_gpio_bank*,unsigned int,int) ;
 struct st_gpio_bank* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct st_gpio_bank *VAR_3 = FUNC_1(VAR_0);
 FUNC_0(VAR_3, VAR_1, VAR_2);
}
