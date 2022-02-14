
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_device {int irqlock; TYPE_1__* ctx; scalar_t__ pci_2_3; struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;
struct TYPE_2__ {int masked; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vfio_pci_device*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct vfio_pci_device *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 unsigned long VAR_2;

 FUNC_3(&VAR_0->irqlock, VAR_2);







 if (FUNC_5(!FUNC_1(VAR_0))) {
  if (VAR_0->pci_2_3)
   FUNC_2(VAR_1, 0);
 } else if (!VAR_0->ctx[0].masked) {




  if (VAR_0->pci_2_3)
   FUNC_2(VAR_1, 0);
  else
   FUNC_0(VAR_1->irq);

  VAR_0->ctx[0].masked = 1;
 }

 FUNC_4(&VAR_0->irqlock, VAR_2);
}
