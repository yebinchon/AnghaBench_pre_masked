
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_pmx {struct spear_pinctrl_machdata* machdata; } ;
struct spear_pinctrl_machdata {int (* gpio_request_endisable ) (struct spear_pmx*,unsigned int,int) ;} ;
struct spear_gpio_pingroup {int nmuxregs; int muxregs; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 struct spear_gpio_pingroup* FUNC_0 (struct spear_pmx*,unsigned int) ;
 int FUNC_1 (struct spear_pmx*,int ,int ,int) ;
 struct spear_pmx* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct spear_pmx*,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_0,
  struct pinctrl_gpio_range *VAR_1, unsigned VAR_2, bool VAR_3)
{
 struct spear_pmx *VAR_4 = FUNC_2(VAR_0);
 struct spear_pinctrl_machdata *VAR_5 = VAR_4->machdata;
 struct spear_gpio_pingroup *VAR_6;





 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (VAR_6)
  FUNC_1(VAR_4, VAR_6->muxregs,
    VAR_6->nmuxregs, VAR_3);





 if (VAR_5->gpio_request_endisable)
  VAR_5->gpio_request_endisable(VAR_4, VAR_2, VAR_3);

 return 0;
}
