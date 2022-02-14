
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_port {int dummy; } ;
struct ls_pcie {int index; int * scfg; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct pcie_port*) ;
 scalar_t__ FUNC_4 (int ,char*,int *,int) ;
 int * FUNC_5 (int ,char*) ;
 struct dw_pcie* FUNC_6 (struct pcie_port*) ;
 struct ls_pcie* FUNC_7 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_8(struct pcie_port *VAR_1)
{
 struct dw_pcie *VAR_2 = FUNC_6(VAR_1);
 struct ls_pcie *VAR_3 = FUNC_7(VAR_2);
 struct device *VAR_4 = VAR_2->dev;
 u32 VAR_5[2];
 int VAR_6;

 VAR_3->scfg = FUNC_5(VAR_4->of_node,
           "fsl,pcie-scfg");
 if (FUNC_0(VAR_3->scfg)) {
  VAR_6 = FUNC_1(VAR_3->scfg);
  FUNC_2(VAR_4, "No syscfg phandle specified\n");
  VAR_3->scfg = ((void*)0);
  return VAR_6;
 }

 if (FUNC_4(VAR_4->of_node,
           "fsl,pcie-scfg", VAR_5, 2)) {
  VAR_3->scfg = ((void*)0);
  return -VAR_0;
 }
 VAR_3->index = VAR_5[1];

 return FUNC_3(VAR_1);
}
