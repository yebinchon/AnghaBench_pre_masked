
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pcie_port {scalar_t__ msi_irq; int * ops; } ;
struct imx6_pcie {struct dw_pcie* pci; } ;
struct dw_pcie {struct pcie_port pp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct pcie_port*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct platform_device*,char*) ;

__attribute__((used)) static int FUNC_4(struct imx6_pcie *VAR_3,
         struct platform_device *VAR_4)
{
 struct dw_pcie *VAR_5 = VAR_3->pci;
 struct pcie_port *VAR_6 = &VAR_5->pp;
 struct device *VAR_7 = &VAR_4->dev;
 int VAR_8;

 if (FUNC_0(VAR_0)) {
  VAR_6->msi_irq = FUNC_3(VAR_4, "msi");
  if (VAR_6->msi_irq <= 0) {
   FUNC_1(VAR_7, "failed to get MSI irq\n");
   return -VAR_1;
  }
 }

 VAR_6->ops = &VAR_2;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_7, "failed to initialize host\n");
  return VAR_8;
 }

 return 0;
}
