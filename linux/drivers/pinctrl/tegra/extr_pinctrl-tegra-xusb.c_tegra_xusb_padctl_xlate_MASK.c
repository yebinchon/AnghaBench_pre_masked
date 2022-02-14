
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb_padctl {struct phy** phys; } ;
struct phy {int dummy; } ;
struct of_phandle_args {unsigned int* args; scalar_t__ args_count; } ;
struct device {int dummy; } ;


 unsigned int FUNC_0 (struct phy**) ;
 int VAR_0 ;
 struct phy* FUNC_1 (int ) ;
 struct tegra_xusb_padctl* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_1,
        struct of_phandle_args *VAR_2)
{
 struct tegra_xusb_padctl *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4 = VAR_2->args[0];

 if (VAR_2->args_count <= 0)
  return FUNC_1(-VAR_0);

 if (VAR_4 >= FUNC_0(VAR_3->phys))
  return FUNC_1(-VAR_0);

 return VAR_3->phys[VAR_4];
}
