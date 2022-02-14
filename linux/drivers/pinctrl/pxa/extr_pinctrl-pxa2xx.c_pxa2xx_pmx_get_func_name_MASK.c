
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_pinctrl_function {char const* name; } ;
struct pxa_pinctrl {struct pxa_pinctrl_function* functions; } ;
struct pinctrl_dev {int dummy; } ;


 struct pxa_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_0,
         unsigned VAR_1)
{
 struct pxa_pinctrl *VAR_2 = FUNC_0(VAR_0);
 struct pxa_pinctrl_function *VAR_3 = VAR_2->functions + VAR_1;

 return VAR_3->name;
}
