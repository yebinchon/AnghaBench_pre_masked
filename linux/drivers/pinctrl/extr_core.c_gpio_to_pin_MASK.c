
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {unsigned int base; int* pins; int pin_base; } ;



__attribute__((used)) static inline int FUNC_0(struct pinctrl_gpio_range *VAR_0,
    unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_1 - VAR_0->base;
 if (VAR_0->pins)
  return VAR_0->pins[VAR_2];
 else
  return VAR_0->pin_base + VAR_2;
}
