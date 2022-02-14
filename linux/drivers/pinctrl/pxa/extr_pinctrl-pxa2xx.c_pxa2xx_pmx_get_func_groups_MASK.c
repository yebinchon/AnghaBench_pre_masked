
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_pinctrl_function {char** groups; unsigned int ngroups; } ;
struct pxa_pinctrl {struct pxa_pinctrl_function* functions; } ;
struct pinctrl_dev {int dummy; } ;


 struct pxa_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
          unsigned VAR_1,
          const char * const **VAR_2,
          unsigned * const VAR_3)
{
 struct pxa_pinctrl *VAR_4 = FUNC_0(VAR_0);
 struct pxa_pinctrl_function *VAR_5 = VAR_4->functions + VAR_1;

 *VAR_2 = VAR_5->groups;
 *VAR_3 = VAR_5->ngroups;

 return 0;
}
