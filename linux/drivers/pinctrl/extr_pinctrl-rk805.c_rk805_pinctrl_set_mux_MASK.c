
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk805_pctrl_info {TYPE_1__* functions; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int mux_option; } ;


 int FUNC_0 (struct pinctrl_dev*,int,int) ;
 struct rk805_pctrl_info* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
     unsigned int VAR_1,
     unsigned int VAR_2)
{
 struct rk805_pctrl_info *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = VAR_3->functions[VAR_1].mux_option;
 int VAR_5 = VAR_2;

 return FUNC_0(VAR_0, VAR_5, VAR_4);
}
