
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pcie_port {scalar_t__ irq; int * ops; } ;
struct dw_pcie {struct pcie_port pp; } ;
struct armada8k_pcie {struct dw_pcie* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,int,int ,int ,char*,struct armada8k_pcie*) ;
 int FUNC_2 (struct pcie_port*) ;
 scalar_t__ FUNC_3 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct armada8k_pcie *VAR_3,
      struct platform_device *VAR_4)
{
 struct dw_pcie *VAR_5 = VAR_3->pci;
 struct pcie_port *VAR_6 = &VAR_5->pp;
 struct device *VAR_7 = &VAR_4->dev;
 int VAR_8;

 VAR_6->ops = &VAR_1;

 VAR_6->irq = FUNC_3(VAR_4, 0);
 if (VAR_6->irq < 0) {
  FUNC_0(VAR_7, "failed to get irq for port\n");
  return VAR_6->irq;
 }

 VAR_8 = FUNC_1(VAR_7, VAR_6->irq, VAR_2,
          VAR_0, "armada8k-pcie", VAR_3);
 if (VAR_8) {
  FUNC_0(VAR_7, "failed to request irq %d\n", VAR_6->irq);
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_7, "failed to initialize host: %d\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
