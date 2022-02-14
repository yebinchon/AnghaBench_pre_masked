
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pistachio_gpio_bank {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pistachio_gpio_bank*,int ) ;
 struct pistachio_gpio_bank* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct pistachio_gpio_bank *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6;

 if (FUNC_1(VAR_5, VAR_2) & FUNC_0(VAR_4))
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

 return !!(FUNC_1(VAR_5, VAR_6) & FUNC_0(VAR_4));
}
