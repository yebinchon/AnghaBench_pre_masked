
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pcie_port {scalar_t__ msi_irq; int * ops; } ;
struct dw_pcie {struct device* dev; struct pcie_port pp; } ;
struct device {int dummy; } ;
struct artpec6_pcie {struct dw_pcie* pci; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct pcie_port*) ;
 scalar_t__ FUNC_3 (struct platform_device*,char*) ;

__attribute__((used)) static int FUNC_4(struct artpec6_pcie *VAR_2,
     struct platform_device *VAR_3)
{
 struct dw_pcie *VAR_4 = VAR_2->pci;
 struct pcie_port *VAR_5 = &VAR_4->pp;
 struct device *VAR_6 = VAR_4->dev;
 int VAR_7;

 if (FUNC_0(VAR_0)) {
  VAR_5->msi_irq = FUNC_3(VAR_3, "msi");
  if (VAR_5->msi_irq < 0) {
   FUNC_1(VAR_6, "failed to get MSI irq\n");
   return VAR_5->msi_irq;
  }
 }

 VAR_5->ops = &VAR_1;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_6, "failed to initialize host\n");
  return VAR_7;
 }

 return 0;
}
