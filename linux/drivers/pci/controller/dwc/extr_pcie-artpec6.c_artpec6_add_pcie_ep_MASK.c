
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dw_pcie_ep {int addr_size; int phys_base; int * ops; } ;
struct dw_pcie {int dbi_base2; struct dw_pcie_ep ep; } ;
struct artpec6_pcie {struct dw_pcie* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct resource*) ;
 int FUNC_4 (struct dw_pcie_ep*) ;
 int VAR_2 ;
 struct resource* FUNC_5 (struct platform_device*,int ,char*) ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int FUNC_7(struct artpec6_pcie *VAR_3,
          struct platform_device *VAR_4)
{
 int VAR_5;
 struct dw_pcie_ep *VAR_6;
 struct resource *VAR_7;
 struct device *VAR_8 = &VAR_4->dev;
 struct dw_pcie *VAR_9 = VAR_3->pci;

 VAR_6 = &VAR_9->ep;
 VAR_6->ops = &VAR_2;

 VAR_7 = FUNC_5(VAR_4, VAR_1, "dbi2");
 VAR_9->dbi_base2 = FUNC_3(VAR_8, VAR_7);
 if (FUNC_0(VAR_9->dbi_base2))
  return FUNC_1(VAR_9->dbi_base2);

 VAR_7 = FUNC_5(VAR_4, VAR_1, "addr_space");
 if (!VAR_7)
  return -VAR_0;

 VAR_6->phys_base = VAR_7->start;
 VAR_6->addr_size = FUNC_6(VAR_7);

 VAR_5 = FUNC_4(VAR_6);
 if (VAR_5) {
  FUNC_2(VAR_8, "failed to initialize endpoint\n");
  return VAR_5;
 }

 return 0;
}
