
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_pinctrl {int map; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ocelot_pinctrl*,unsigned int) ;
 struct ocelot_pinctrl* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_2, unsigned int VAR_3,
       int VAR_4)
{
 struct ocelot_pinctrl *VAR_5 = FUNC_2(VAR_2);

 if (VAR_4)
  FUNC_3(VAR_5->map, FUNC_1(VAR_1, VAR_5, VAR_3),
        FUNC_0(VAR_3 % 32));
 else
  FUNC_3(VAR_5->map, FUNC_1(VAR_0, VAR_5, VAR_3),
        FUNC_0(VAR_3 % 32));
}
