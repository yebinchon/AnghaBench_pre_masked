
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_pio_control {int dummy; } ;
struct st_gpio_bank {scalar_t__ base; struct st_pio_control pc; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 struct st_gpio_bank* FUNC_2 (struct gpio_chip*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (struct st_pio_control*,unsigned int) ;
 int FUNC_5 (struct st_pio_control*,unsigned int,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct st_gpio_bank *VAR_3 = FUNC_2(VAR_1);
 struct st_pio_control VAR_4 = VAR_3->pc;
 unsigned long VAR_5;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 0;


 VAR_7 = FUNC_4(&VAR_4, VAR_2);
 if (VAR_7) {
  FUNC_5(&VAR_4, VAR_2, &VAR_5);
  return !FUNC_1(VAR_5);
 }





 for (VAR_9 = 0; VAR_9 <= 2; VAR_9++) {
  VAR_8 = FUNC_3(VAR_3->base + FUNC_0(VAR_9));
  VAR_6 |= ((VAR_8 >> VAR_2) & 0x1) << VAR_9;
 }

 return (VAR_6 == VAR_0);
}
