
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_pinctrl {int map; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ocelot_pinctrl*,unsigned int) ;
 struct ocelot_pinctrl* FUNC_2 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 unsigned int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_3(VAR_1);
 struct ocelot_pinctrl *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4 = FUNC_4(VAR_1);

 FUNC_5(VAR_3->map, FUNC_1(VAR_0, VAR_3, VAR_4),
      FUNC_0(VAR_4 % 32), FUNC_0(VAR_4 % 32));
}
