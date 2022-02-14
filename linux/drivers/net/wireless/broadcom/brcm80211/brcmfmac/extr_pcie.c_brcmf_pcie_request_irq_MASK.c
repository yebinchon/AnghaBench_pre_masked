
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; int dev; } ;
struct brcmf_pciedev_info {int irq_allocated; struct pci_dev* pdev; } ;
struct brcmf_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_bus*,char*,int ) ;
 int FUNC_2 (struct brcmf_pciedev_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct brcmf_bus* FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,char*,struct brcmf_pciedev_info*) ;

__attribute__((used)) static int FUNC_7(struct brcmf_pciedev_info *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_5->pdev;
 struct brcmf_bus *VAR_7 = FUNC_3(&VAR_6->dev);

 FUNC_2(VAR_5);

 FUNC_0(VAR_2, "Enter\n");

 FUNC_5(VAR_6);
 if (FUNC_6(VAR_6->irq, VAR_4,
     VAR_3, VAR_1,
     "brcmf_pcie_intr", VAR_5)) {
  FUNC_4(VAR_6);
  FUNC_1(VAR_7, "Failed to request IRQ %d\n", VAR_6->irq);
  return -VAR_0;
 }
 VAR_5->irq_allocated = 1;
 return 0;
}
