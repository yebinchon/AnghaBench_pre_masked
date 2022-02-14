
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_gpio_bank {scalar_t__ reg_base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 struct pic32_gpio_bank* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2,
          int VAR_3)
{
 struct pic32_gpio_bank *VAR_4 = FUNC_3(VAR_1);
 u32 VAR_5 = FUNC_0(VAR_2);

 if (VAR_3)
  FUNC_4(VAR_5, VAR_4->reg_base + FUNC_2(VAR_0));
 else
  FUNC_4(VAR_5, VAR_4->reg_base + FUNC_1(VAR_0));
}
