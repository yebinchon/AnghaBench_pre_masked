
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32_pinctrl_group {scalar_t__ pin; } ;
struct stm32_pinctrl {int ngroups; struct stm32_pinctrl_group* groups; } ;



__attribute__((used)) static struct stm32_pinctrl_group *
FUNC_0(struct stm32_pinctrl *VAR_0, u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->ngroups; VAR_2++) {
  struct stm32_pinctrl_group *VAR_3 = VAR_0->groups + VAR_2;

  if (VAR_3->pin == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
