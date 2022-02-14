
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmt_pinctrl_data {int dummy; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wmt_pinctrl_data* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct wmt_pinctrl_data*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_2,
          struct pinctrl_gpio_range *VAR_3,
          unsigned VAR_4,
          bool VAR_5)
{
 struct wmt_pinctrl_data *VAR_6 = FUNC_0(VAR_2);

 FUNC_1(VAR_6, (VAR_5 ? VAR_0 : VAR_1),
         VAR_4);

 return 0;
}
