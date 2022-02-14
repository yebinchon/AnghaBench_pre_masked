
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct oxnas_gpio_bank {scalar_t__ reg_base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct oxnas_gpio_bank* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_2, unsigned int VAR_3,
          int VAR_4)
{
 struct oxnas_gpio_bank *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6 = FUNC_0(VAR_3);

 if (VAR_4)
  FUNC_2(VAR_6, VAR_5->reg_base + VAR_1);
 else
  FUNC_2(VAR_6, VAR_5->reg_base + VAR_0);
}
