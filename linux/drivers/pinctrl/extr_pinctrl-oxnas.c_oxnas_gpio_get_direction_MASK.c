
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct oxnas_gpio_bank {scalar_t__ reg_base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 struct oxnas_gpio_bank* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1,
          unsigned int VAR_2)
{
 struct oxnas_gpio_bank *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = FUNC_0(VAR_2);

 return !(FUNC_2(VAR_3->reg_base + VAR_0) & VAR_4);
}
