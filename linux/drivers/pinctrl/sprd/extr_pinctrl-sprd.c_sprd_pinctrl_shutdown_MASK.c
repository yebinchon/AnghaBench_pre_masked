
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct pinctrl_state {int dummy; } ;
typedef struct pinctrl_state pinctrl ;


 scalar_t__ FUNC_0 (struct pinctrl_state*) ;
 struct pinctrl_state* FUNC_1 (int *) ;
 struct pinctrl_state* FUNC_2 (struct pinctrl_state*,char*) ;
 int FUNC_3 (struct pinctrl_state*,struct pinctrl_state*) ;

void FUNC_4(struct platform_device *VAR_0)
{
 struct pinctrl *VAR_1;
 struct pinctrl_state *VAR_2;

 VAR_1 = FUNC_1(&VAR_0->dev);
 if (FUNC_0(VAR_1))
  return;
 VAR_2 = FUNC_2(VAR_1, "shutdown");
 if (FUNC_0(VAR_2))
  return;
 FUNC_3(VAR_1, VAR_2);
}
