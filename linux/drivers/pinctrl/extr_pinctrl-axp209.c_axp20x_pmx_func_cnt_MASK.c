
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct axp20x_pctl {int funcs; } ;


 int FUNC_0 (int ) ;
 struct axp20x_pctl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0)
{
 struct axp20x_pctl *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->funcs);
}
