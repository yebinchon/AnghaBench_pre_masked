
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct bcm2835_pinctrl {int dummy; } ;


 int FUNC_0 (struct bcm2835_pinctrl*,unsigned int,unsigned int) ;
 struct bcm2835_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
  unsigned VAR_1,
  unsigned VAR_2)
{
 struct bcm2835_pinctrl *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_2, VAR_1);

 return 0;
}
