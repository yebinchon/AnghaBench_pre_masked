
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int irq; int dev; } ;
struct brcmf_pciedev_info {int irq_allocated; scalar_t__ in_irq; struct pci_dev* pdev; } ;
struct brcmf_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_bus*,char*) ;
 int FUNC_1 (struct brcmf_pciedev_info*) ;
 int FUNC_2 (struct brcmf_pciedev_info*,int ) ;
 int FUNC_3 (struct brcmf_pciedev_info*,int ,int) ;
 struct brcmf_bus* FUNC_4 (int *) ;
 int FUNC_5 (int ,struct brcmf_pciedev_info*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_8(struct brcmf_pciedev_info *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;
 struct brcmf_bus *VAR_3 = FUNC_4(&VAR_2->dev);
 u32 VAR_4;
 u32 VAR_5;

 if (!VAR_1->irq_allocated)
  return;

 FUNC_1(VAR_1);
 FUNC_5(VAR_2->irq, VAR_1);
 FUNC_7(VAR_2);

 FUNC_6(50);
 VAR_5 = 0;
 while ((VAR_1->in_irq) && (VAR_5 < 20)) {
  FUNC_6(50);
  VAR_5++;
 }
 if (VAR_1->in_irq)
  FUNC_0(VAR_3, "Still in IRQ (processing) !!!\n");

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 FUNC_3(VAR_1, VAR_0, VAR_4);

 VAR_1->irq_allocated = 0;
}
