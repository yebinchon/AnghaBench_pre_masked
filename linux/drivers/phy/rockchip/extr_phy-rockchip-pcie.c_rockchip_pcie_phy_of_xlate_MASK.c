
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_pcie_phy {TYPE_1__* phys; } ;
struct phy {int dummy; } ;
struct of_phandle_args {scalar_t__ args_count; size_t* args; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct phy* phy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct rockchip_pcie_phy* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_2,
           struct of_phandle_args *VAR_3)
{
 struct rockchip_pcie_phy *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3->args_count == 0)
  return VAR_4->phys[0].phy;

 if (FUNC_1(VAR_3->args[0] >= VAR_1))
  return FUNC_0(-VAR_0);

 return VAR_4->phys[VAR_3->args[0]].phy;
}
