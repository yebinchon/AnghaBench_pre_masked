
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_pinctrl_group {int pin; } ;
struct pxa_pinctrl {struct pxa_pinctrl_group* groups; } ;
struct pinctrl_dev {int dummy; } ;


 struct pxa_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
           unsigned VAR_1,
           const unsigned **VAR_2,
           unsigned *VAR_3)
{
 struct pxa_pinctrl *VAR_4 = FUNC_0(VAR_0);
 struct pxa_pinctrl_group *VAR_5 = VAR_4->groups + VAR_1;

 *VAR_2 = (unsigned *)&VAR_5->pin;
 *VAR_3 = 1;

 return 0;
}
