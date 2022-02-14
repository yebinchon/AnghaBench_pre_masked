
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tegra_pmx {TYPE_1__* soc; } ;
struct tegra_pingroup {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
typedef int s8 ;
typedef int s32 ;
typedef enum tegra_pinconf_param { ____Placeholder_tegra_pinconf_param } tegra_pinconf_param ;
struct TYPE_2__ {struct tegra_pingroup* groups; } ;


 unsigned long FUNC_0 (int,int) ;
 int FUNC_1 (unsigned long) ;
 struct tegra_pmx* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct tegra_pmx*,int,int ) ;
 int FUNC_4 (struct tegra_pmx*,struct tegra_pingroup const*,int,int,int*,int *,int*,int*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_0,
       unsigned VAR_1, unsigned long *VAR_2)
{
 struct tegra_pmx *VAR_3 = FUNC_2(VAR_0);
 enum tegra_pinconf_param VAR_4 = FUNC_1(*VAR_2);
 u16 VAR_5;
 const struct tegra_pingroup *VAR_6;
 int VAR_7;
 s8 VAR_8, VAR_9, VAR_10;
 s32 VAR_11;
 u32 VAR_12, VAR_13;

 VAR_6 = &VAR_3->soc->groups[VAR_1];

 VAR_7 = FUNC_4(VAR_3, VAR_6, VAR_4, 1, &VAR_8, &VAR_11, &VAR_9,
    &VAR_10);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_12 = FUNC_3(VAR_3, VAR_8, VAR_11);
 VAR_13 = (1 << VAR_10) - 1;
 VAR_5 = (VAR_12 >> VAR_9) & VAR_13;

 *VAR_2 = FUNC_0(VAR_4, VAR_5);

 return 0;
}
