
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_xusb_padctl {TYPE_2__* soc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* functions; } ;
struct TYPE_3__ {unsigned int num_groups; char** groups; } ;


 struct tegra_xusb_padctl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
       unsigned int VAR_1,
       const char * const **VAR_2,
       unsigned * const VAR_3)
{
 struct tegra_xusb_padctl *VAR_4 = FUNC_0(VAR_0);

 *VAR_3 = VAR_4->soc->functions[VAR_1].num_groups;
 *VAR_2 = VAR_4->soc->functions[VAR_1].groups;

 return 0;
}
