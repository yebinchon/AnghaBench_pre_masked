
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk805_pctrl_info {TYPE_1__* functions; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {char const* name; } ;


 struct rk805_pctrl_info* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_0,
            unsigned int VAR_1)
{
 struct rk805_pctrl_info *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->functions[VAR_1].name;
}
