
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pcie_port {scalar_t__ irq; scalar_t__ msi_irq; int * ops; } ;
struct dw_plat_pcie {struct dw_pcie* pci; } ;
struct dw_pcie {struct pcie_port pp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct pcie_port*) ;
 int VAR_1 ;
 void* FUNC_3 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_4(struct dw_plat_pcie *VAR_2,
     struct platform_device *VAR_3)
{
 struct dw_pcie *VAR_4 = VAR_2->pci;
 struct pcie_port *VAR_5 = &VAR_4->pp;
 struct device *VAR_6 = &VAR_3->dev;
 int VAR_7;

 VAR_5->irq = FUNC_3(VAR_3, 1);
 if (VAR_5->irq < 0)
  return VAR_5->irq;

 if (FUNC_0(VAR_0)) {
  VAR_5->msi_irq = FUNC_3(VAR_3, 0);
  if (VAR_5->msi_irq < 0)
   return VAR_5->msi_irq;
 }

 VAR_5->ops = &VAR_1;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_6, "Failed to initialize host\n");
  return VAR_7;
 }

 return 0;
}
