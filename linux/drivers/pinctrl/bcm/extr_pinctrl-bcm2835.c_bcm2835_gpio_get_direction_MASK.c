
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct bcm2835_pinctrl {int dummy; } ;
typedef enum bcm2835_fsel { ____Placeholder_bcm2835_fsel } bcm2835_fsel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm2835_pinctrl*,unsigned int) ;
 struct bcm2835_pinctrl* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3, unsigned int VAR_4)
{
 struct bcm2835_pinctrl *VAR_5 = FUNC_1(VAR_3);
 enum bcm2835_fsel VAR_6 = FUNC_0(VAR_5, VAR_4);


 if (VAR_6 > VAR_1)
  return -VAR_2;

 return (VAR_6 == VAR_0);
}
