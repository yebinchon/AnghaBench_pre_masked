
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct imx1_pinctrl_soc_info {TYPE_1__* functions; } ;
struct imx1_pinctrl {struct imx1_pinctrl_soc_info* info; } ;
struct TYPE_2__ {char** groups; unsigned int num_groups; } ;


 struct imx1_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0, unsigned VAR_1,
          const char * const **VAR_2,
          unsigned * const VAR_3)
{
 struct imx1_pinctrl *VAR_4 = FUNC_0(VAR_0);
 const struct imx1_pinctrl_soc_info *VAR_5 = VAR_4->info;

 *VAR_2 = VAR_5->functions[VAR_1].groups;
 *VAR_3 = VAR_5->functions[VAR_1].num_groups;

 return 0;
}
