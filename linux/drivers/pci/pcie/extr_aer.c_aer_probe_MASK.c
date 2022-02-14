
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pcie_device {int irq; struct pci_dev* port; struct device device; } ;
struct pci_dev {int dummy; } ;
struct aer_rpc {struct pci_dev* rpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aer_rpc*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct aer_rpc* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ,int ,char*,struct pcie_device*) ;
 int FUNC_3 (struct pci_dev*,char*,int ) ;
 int FUNC_4 (struct pci_dev*,char*,int ) ;
 int FUNC_5 (struct pcie_device*,struct aer_rpc*) ;

__attribute__((used)) static int FUNC_6(struct pcie_device *VAR_5)
{
 int VAR_6;
 struct aer_rpc *VAR_7;
 struct device *VAR_8 = &VAR_5->device;
 struct pci_dev *VAR_9 = VAR_5->port;

 VAR_7 = FUNC_1(VAR_8, sizeof(struct aer_rpc), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->rpd = VAR_9;
 FUNC_5(VAR_5, VAR_7);

 VAR_6 = FUNC_2(VAR_8, VAR_5->irq, VAR_3, VAR_4,
        VAR_2, "aerdrv", VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_9, "request AER IRQ %d failed\n", VAR_5->irq);
  return VAR_6;
 }

 FUNC_0(VAR_7);
 FUNC_4(VAR_9, "enabled with IRQ %d\n", VAR_5->irq);
 return 0;
}
