
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_3__ {int phys; int virt; } ;
struct TYPE_4__ {int phys; int virt; } ;
struct lpfc_hba {int slim_memmap_p; int ctrl_regs_memmap_p; TYPE_1__ slim2p; TYPE_2__ hbqslimp; struct pci_dev* pcidev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_1)
{
 struct pci_dev *VAR_2;


 if (!VAR_1->pcidev)
  return;
 else
  VAR_2 = VAR_1->pcidev;


 FUNC_0(&VAR_2->dev, FUNC_2(),
     VAR_1->hbqslimp.virt, VAR_1->hbqslimp.phys);
 FUNC_0(&VAR_2->dev, VAR_0,
     VAR_1->slim2p.virt, VAR_1->slim2p.phys);


 FUNC_1(VAR_1->ctrl_regs_memmap_p);
 FUNC_1(VAR_1->slim_memmap_p);

 return;
}
