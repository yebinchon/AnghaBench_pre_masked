
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct lpfc_hba {struct pci_dev* pcidev; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_1, struct lpfc_dmabuf *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pcidev;

 if (!VAR_2)
  return;

 if (VAR_2->virt)
  FUNC_0(&VAR_3->dev, VAR_0,
      VAR_2->virt, VAR_2->phys);
 FUNC_1(VAR_2);
 return;
}
