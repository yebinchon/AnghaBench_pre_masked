
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_pcie_ep {TYPE_1__* epc; int max_regions; } ;
struct rockchip_pcie {struct device* dev; } ;
struct device {int of_node; } ;
struct TYPE_2__ {int max_functions; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (struct rockchip_pcie*) ;
 int FUNC_3 (struct rockchip_pcie*) ;

__attribute__((used)) static int FUNC_4(struct rockchip_pcie *VAR_1,
         struct rockchip_pcie_ep *VAR_2)
{
 struct device *VAR_3 = VAR_1->dev;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3->of_node,
       "rockchip,max-outbound-regions",
       &VAR_2->max_regions);
 if (VAR_4 < 0 || VAR_2->max_regions > VAR_0)
  VAR_2->max_regions = VAR_0;

 VAR_4 = FUNC_1(VAR_3->of_node, "max-functions",
      &VAR_2->epc->max_functions);
 if (VAR_4 < 0)
  VAR_2->epc->max_functions = 1;

 return 0;
}
