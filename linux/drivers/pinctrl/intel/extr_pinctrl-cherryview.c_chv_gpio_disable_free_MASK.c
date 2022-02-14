
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct chv_pinctrl {int dummy; } ;


 int FUNC_0 (struct chv_pinctrl*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct chv_pinctrl*,unsigned int) ;
 struct chv_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct pinctrl_dev *VAR_1,
      struct pinctrl_gpio_range *VAR_2,
      unsigned int VAR_3)
{
 struct chv_pinctrl *VAR_4 = FUNC_2(VAR_1);
 unsigned long VAR_5;

 FUNC_3(&VAR_0, VAR_5);

 if (!FUNC_1(VAR_4, VAR_3))
  FUNC_0(VAR_4, VAR_3);

 FUNC_4(&VAR_0, VAR_5);
}
