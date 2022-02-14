
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct as3722_pctrl_info {int as3722; } ;


 int FUNC_0 (int ,unsigned int) ;
 struct as3722_pctrl_info* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct as3722_pctrl_info *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->as3722, VAR_1);
}
