
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sr_pcie_phy_core {TYPE_1__* phys; } ;
struct phy {int dummy; } ;
struct of_phandle_args {int* args; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 struct sr_pcie_phy_core* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_3,
         struct of_phandle_args *VAR_4)
{
 struct sr_pcie_phy_core *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = VAR_4->args[0];

 if (FUNC_1(VAR_6 >= VAR_2))
  return FUNC_0(-VAR_1);

 return VAR_5->phys[VAR_6].phy;
}
