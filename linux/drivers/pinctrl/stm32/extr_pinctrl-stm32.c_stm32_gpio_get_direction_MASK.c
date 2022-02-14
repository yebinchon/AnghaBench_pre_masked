
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32_gpio_bank {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct stm32_gpio_bank* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct stm32_gpio_bank*,int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct stm32_gpio_bank *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = FUNC_1(VAR_2);
 int VAR_5;
 u32 VAR_6, VAR_7;

 FUNC_2(VAR_3, VAR_4, &VAR_6, &VAR_7);
 if ((VAR_7 == 0) && (VAR_6 == 0))
  VAR_5 = 1;
 else if ((VAR_7 == 0) && (VAR_6 == 1))
  VAR_5 = 0;
 else
  VAR_5 = -VAR_0;

 return VAR_5;
}
