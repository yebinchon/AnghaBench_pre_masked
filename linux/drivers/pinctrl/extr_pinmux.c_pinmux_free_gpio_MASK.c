
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (struct pinctrl_dev*,unsigned int,struct pinctrl_gpio_range*) ;

void FUNC_2(struct pinctrl_dev *VAR_0, unsigned VAR_1,
        struct pinctrl_gpio_range *VAR_2)
{
 const char *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_3);
}
