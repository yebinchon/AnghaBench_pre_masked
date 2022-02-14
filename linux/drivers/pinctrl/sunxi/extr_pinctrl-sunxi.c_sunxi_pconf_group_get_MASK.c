
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_pinctrl_group {int pin; } ;
struct sunxi_pinctrl {struct sunxi_pinctrl_group* groups; } ;
struct pinctrl_dev {int dummy; } ;


 struct sunxi_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pinctrl_dev*,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
     unsigned VAR_1,
     unsigned long *VAR_2)
{
 struct sunxi_pinctrl *VAR_3 = FUNC_0(VAR_0);
 struct sunxi_pinctrl_group *VAR_4 = &VAR_3->groups[VAR_1];


 return FUNC_1(VAR_0, VAR_4->pin, VAR_2);
}
