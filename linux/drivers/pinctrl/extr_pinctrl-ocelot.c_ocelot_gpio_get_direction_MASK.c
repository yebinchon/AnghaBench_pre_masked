
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_pinctrl {int map; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ocelot_pinctrl*,unsigned int) ;
 struct ocelot_pinctrl* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1,
         unsigned int VAR_2)
{
 struct ocelot_pinctrl *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4;

 FUNC_3(VAR_3->map, FUNC_1(VAR_0, VAR_3, VAR_2), &VAR_4);

 return !(VAR_4 & FUNC_0(VAR_2 % 32));
}
