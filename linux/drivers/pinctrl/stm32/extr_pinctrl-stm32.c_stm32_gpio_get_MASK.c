
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_gpio_bank {int clk; scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct stm32_gpio_bank* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct stm32_gpio_bank *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 FUNC_2(VAR_3->clk);

 VAR_4 = !!(FUNC_4(VAR_3->base + VAR_0) & FUNC_0(VAR_2));

 FUNC_1(VAR_3->clk);

 return VAR_4;
}
