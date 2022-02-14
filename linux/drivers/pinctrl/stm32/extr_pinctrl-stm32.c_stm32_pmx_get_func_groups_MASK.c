
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_pinctrl {char** grp_names; unsigned int ngroups; } ;
struct pinctrl_dev {int dummy; } ;


 struct stm32_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
         unsigned VAR_1,
         const char * const **VAR_2,
         unsigned * const VAR_3)
{
 struct stm32_pinctrl *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = VAR_4->grp_names;
 *VAR_3 = VAR_4->ngroups;

 return 0;
}
