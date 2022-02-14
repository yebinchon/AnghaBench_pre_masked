
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_mc_reset_ops {int (* reset_status ) (struct tegra_mc*,struct tegra_mc_reset const*) ;} ;
struct tegra_mc_reset {int dummy; } ;
struct tegra_mc {TYPE_1__* soc; } ;
struct reset_controller_dev {int dummy; } ;
struct TYPE_2__ {struct tegra_mc_reset_ops* reset_ops; } ;


 int VAR_0 ;
 struct tegra_mc* FUNC_0 (struct reset_controller_dev*) ;
 int FUNC_1 (struct tegra_mc*,struct tegra_mc_reset const*) ;
 struct tegra_mc_reset* FUNC_2 (struct tegra_mc*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_1,
        unsigned long VAR_2)
{
 struct tegra_mc *VAR_3 = FUNC_0(VAR_1);
 const struct tegra_mc_reset_ops *VAR_4;
 const struct tegra_mc_reset *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = VAR_3->soc->reset_ops;
 if (!VAR_4)
  return -VAR_0;

 return VAR_4->reset_status(VAR_3, VAR_5);
}
