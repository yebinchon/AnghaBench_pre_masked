
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct gb_gpio_controller {int dummy; } ;


 int FUNC_0 (struct gb_gpio_controller*,int ) ;
 struct gb_gpio_controller* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct gb_gpio_controller *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, (u8)VAR_1);
}
