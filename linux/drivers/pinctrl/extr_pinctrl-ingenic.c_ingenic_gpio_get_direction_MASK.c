
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_pinctrl {scalar_t__ version; } ;
struct ingenic_gpio_chip {struct ingenic_pinctrl* jzpc; } ;
struct gpio_chip {unsigned int base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ingenic_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct ingenic_pinctrl*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_4, unsigned int VAR_5)
{
 struct ingenic_gpio_chip *VAR_6 = FUNC_0(VAR_4);
 struct ingenic_pinctrl *VAR_7 = VAR_6->jzpc;
 unsigned int VAR_8 = VAR_4->base + VAR_5;

 if (VAR_7->version >= VAR_0)
  return FUNC_1(VAR_7, VAR_8, VAR_3);

 if (FUNC_1(VAR_7, VAR_8, VAR_2))
  return 1;

 return !FUNC_1(VAR_7, VAR_8, VAR_1);
}
