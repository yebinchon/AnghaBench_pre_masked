
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_device {int irqlock; TYPE_1__* ctx; scalar_t__ pci_2_3; int virq_disabled; struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;
struct TYPE_2__ {int masked; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vfio_pci_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void *VAR_0, void *VAR_1)
{
 struct vfio_pci_device *VAR_2 = VAR_0;
 struct pci_dev *VAR_3 = VAR_2->pdev;
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_4(&VAR_2->irqlock, VAR_4);





 if (FUNC_6(!FUNC_1(VAR_2))) {
  if (VAR_2->pci_2_3)
   FUNC_3(VAR_3, 1);
 } else if (VAR_2->ctx[0].masked && !VAR_2->virq_disabled) {





  if (VAR_2->pci_2_3) {
   if (!FUNC_2(VAR_3))
    VAR_5 = 1;
  } else
   FUNC_0(VAR_3->irq);

  VAR_2->ctx[0].masked = (VAR_5 > 0);
 }

 FUNC_5(&VAR_2->irqlock, VAR_4);

 return VAR_5;
}
