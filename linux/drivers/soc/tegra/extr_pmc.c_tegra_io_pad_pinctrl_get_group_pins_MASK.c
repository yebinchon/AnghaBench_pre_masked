
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_pmc {TYPE_2__* soc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* io_pads; } ;
struct TYPE_3__ {unsigned int id; } ;


 struct tegra_pmc* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
            unsigned int VAR_1,
            const unsigned int **VAR_2,
            unsigned int *VAR_3)
{
 struct tegra_pmc *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = &VAR_4->soc->io_pads[VAR_1].id;
 *VAR_3 = 1;

 return 0;
}
