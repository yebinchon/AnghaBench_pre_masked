
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx150x_pinctrl {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct sx150x_pinctrl*,unsigned int,int) ;
 struct sx150x_pinctrl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct sx150x_pinctrl*,int) ;
 scalar_t__ FUNC_3 (struct sx150x_pinctrl*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0, unsigned int VAR_1,
       int VAR_2)
{
 struct sx150x_pinctrl *VAR_3 = FUNC_1(VAR_0);

 if (FUNC_3(VAR_3, VAR_1))
  FUNC_2(VAR_3, VAR_2);
 else
  FUNC_0(VAR_3, VAR_1, VAR_2);

}
