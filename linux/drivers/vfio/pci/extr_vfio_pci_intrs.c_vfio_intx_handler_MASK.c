
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_pci_device {int irqlock; TYPE_1__* ctx; TYPE_2__* pdev; int pci_2_3; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int masked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct vfio_pci_device*,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct vfio_pci_device *VAR_4 = VAR_3;
 unsigned long VAR_5;
 int VAR_6 = VAR_1;

 FUNC_2(&VAR_4->irqlock, VAR_5);

 if (!VAR_4->pci_2_3) {
  FUNC_0(VAR_4->pdev->irq);
  VAR_4->ctx[0].masked = 1;
  VAR_6 = VAR_0;
 } else if (!VAR_4->ctx[0].masked &&
     FUNC_1(VAR_4->pdev)) {
  VAR_4->ctx[0].masked = 1;
  VAR_6 = VAR_0;
 }

 FUNC_3(&VAR_4->irqlock, VAR_5);

 if (VAR_6 == VAR_0)
  FUNC_4(VAR_4, ((void*)0));

 return VAR_6;
}
