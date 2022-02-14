
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_state {int dummy; } ;
struct pinctrl {struct pinctrl_state* state; } ;


 int FUNC_0 (struct pinctrl*,struct pinctrl_state*) ;

int FUNC_1(struct pinctrl *VAR_0, struct pinctrl_state *VAR_1)
{
 if (VAR_0->state == VAR_1)
  return 0;

 return FUNC_0(VAR_0, VAR_1);
}
