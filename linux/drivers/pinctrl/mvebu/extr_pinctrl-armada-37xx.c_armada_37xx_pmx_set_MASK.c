
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct armada_37xx_pinctrl {TYPE_1__* funcs; struct armada_37xx_pin_group* groups; } ;
struct armada_37xx_pin_group {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (struct pinctrl_dev*,char const*,struct armada_37xx_pin_group*) ;
 struct armada_37xx_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2)
{

 struct armada_37xx_pinctrl *VAR_3 = FUNC_1(VAR_0);
 struct armada_37xx_pin_group *VAR_4 = &VAR_3->groups[VAR_2];
 const char *VAR_5 = VAR_3->funcs[VAR_1].name;

 return FUNC_0(VAR_0, VAR_5, VAR_4);
}
