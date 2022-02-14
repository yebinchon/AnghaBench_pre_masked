
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_gpio_bank {scalar_t__ reg_base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 struct pic32_gpio_bank* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1,
       unsigned VAR_2)
{
 struct pic32_gpio_bank *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4 = FUNC_0(VAR_2);

 FUNC_3(VAR_4, VAR_3->reg_base + FUNC_1(VAR_0));

 return 0;
}
