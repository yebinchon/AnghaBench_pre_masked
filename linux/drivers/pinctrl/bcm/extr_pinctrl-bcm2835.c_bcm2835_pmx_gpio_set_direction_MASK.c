
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct bcm2835_pinctrl {int dummy; } ;
typedef enum bcm2835_fsel { ____Placeholder_bcm2835_fsel } bcm2835_fsel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm2835_pinctrl*,unsigned int,int) ;
 struct bcm2835_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_2,
  struct pinctrl_gpio_range *VAR_3,
  unsigned VAR_4,
  bool VAR_5)
{
 struct bcm2835_pinctrl *VAR_6 = FUNC_1(VAR_2);
 enum bcm2835_fsel VAR_7 = VAR_5 ?
  VAR_0 : VAR_1;

 FUNC_0(VAR_6, VAR_4, VAR_7);

 return 0;
}
