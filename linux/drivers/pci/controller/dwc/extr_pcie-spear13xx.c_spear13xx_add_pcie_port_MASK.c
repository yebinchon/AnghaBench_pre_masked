
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear13xx_pcie {struct dw_pcie* pci; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pcie_port {scalar_t__ irq; int * ops; } ;
struct dw_pcie {struct pcie_port pp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,int,int ,int,char*,struct spear13xx_pcie*) ;
 int FUNC_2 (struct pcie_port*) ;
 scalar_t__ FUNC_3 (struct platform_device*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct spear13xx_pcie *VAR_4,
       struct platform_device *VAR_5)
{
 struct dw_pcie *VAR_6 = VAR_4->pci;
 struct pcie_port *VAR_7 = &VAR_6->pp;
 struct device *VAR_8 = &VAR_5->dev;
 int VAR_9;

 VAR_7->irq = FUNC_3(VAR_5, 0);
 if (VAR_7->irq < 0) {
  FUNC_0(VAR_8, "failed to get irq\n");
  return VAR_7->irq;
 }
 VAR_9 = FUNC_1(VAR_8, VAR_7->irq, VAR_3,
          VAR_1 | VAR_0,
          "spear1340-pcie", VAR_4);
 if (VAR_9) {
  FUNC_0(VAR_8, "failed to request irq %d\n", VAR_7->irq);
  return VAR_9;
 }

 VAR_7->ops = &VAR_2;

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9) {
  FUNC_0(VAR_8, "failed to initialize host\n");
  return VAR_9;
 }

 return 0;
}
