
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_gpio {int pinmux_is_supported; } ;
struct gpio_chip {unsigned int base; } ;


 struct iproc_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct iproc_gpio *VAR_2 = FUNC_0(VAR_0);
 unsigned VAR_3 = VAR_0->base + VAR_1;

 if (!VAR_2->pinmux_is_supported)
  return;

 FUNC_1(VAR_3);
}
