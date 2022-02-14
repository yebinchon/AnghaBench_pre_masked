
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct bcm2835_pinctrl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm2835_pinctrl*,int ,unsigned int) ;
 struct bcm2835_pinctrl* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 struct bcm2835_pinctrl *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_5, VAR_4 ? VAR_1 : VAR_0, VAR_3);
}
