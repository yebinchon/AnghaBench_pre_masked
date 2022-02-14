
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pcie_port {scalar_t__ cfg0_base; } ;
struct dw_pcie_ep {scalar_t__ phys_base; } ;
struct dw_pcie {int dev; struct dw_pcie_ep ep; struct pcie_port pp; } ;
struct artpec6_pcie {int mode; } ;




 int FUNC_0 (int ,char*) ;
 struct artpec6_pcie* FUNC_1 (struct dw_pcie*) ;

__attribute__((used)) static u64 FUNC_2(struct dw_pcie *VAR_0, u64 VAR_1)
{
 struct artpec6_pcie *VAR_2 = FUNC_1(VAR_0);
 struct pcie_port *VAR_3 = &VAR_0->pp;
 struct dw_pcie_ep *VAR_4 = &VAR_0->ep;

 switch (VAR_2->mode) {
 case 128:
  return VAR_1 - VAR_3->cfg0_base;
 case 129:
  return VAR_1 - VAR_4->phys_base;
 default:
  FUNC_0(VAR_0->dev, "UNKNOWN device type\n");
 }
 return VAR_1;
}
