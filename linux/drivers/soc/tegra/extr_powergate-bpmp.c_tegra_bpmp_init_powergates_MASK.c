
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_powergate_info {struct tegra_powergate_info* name; } ;
struct TYPE_2__ {int xlate; } ;
struct tegra_bpmp {TYPE_1__ genpd; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct tegra_powergate_info*) ;
 int FUNC_3 (struct device_node*,TYPE_1__*) ;
 int FUNC_4 (struct tegra_bpmp*,struct tegra_powergate_info*,unsigned int) ;
 int FUNC_5 (struct tegra_bpmp*,struct tegra_powergate_info**) ;
 int FUNC_6 (struct tegra_bpmp*) ;
 int VAR_0 ;

int FUNC_7(struct tegra_bpmp *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev->of_node;
 struct tegra_powergate_info *VAR_3;
 struct device *VAR_4 = VAR_1->dev;
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_1, &VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5 = VAR_7;

 FUNC_0(VAR_4, "%u power domains probed\n", VAR_5);

 VAR_7 = FUNC_4(VAR_1, VAR_3, VAR_5);
 if (VAR_7 < 0)
  goto free;

 VAR_1->genpd.xlate = VAR_0;

 VAR_7 = FUNC_3(VAR_2, &VAR_1->genpd);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4, "failed to add power domain provider: %d\n", VAR_7);
  FUNC_6(VAR_1);
 }

free:
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_2(VAR_3[VAR_6].name);

 FUNC_2(VAR_3);
 return VAR_7;
}
