
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_pinctrl {int map; } ;
struct gpio_chip {scalar_t__ base; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ocelot_pinctrl*,unsigned int) ;
 struct ocelot_pinctrl* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_2,
     unsigned int VAR_3, int VAR_4)
{
 struct ocelot_pinctrl *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6 = FUNC_0(VAR_3 % 32);

 if (VAR_4)
  FUNC_4(VAR_5->map, FUNC_1(VAR_1, VAR_5, VAR_3),
        VAR_6);
 else
  FUNC_4(VAR_5->map, FUNC_1(VAR_0, VAR_5, VAR_3),
        VAR_6);

 return FUNC_3(VAR_2->base + VAR_3);
}
