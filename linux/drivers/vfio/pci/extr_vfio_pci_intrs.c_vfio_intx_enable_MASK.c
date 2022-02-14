
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_pci_irq_ctx {int dummy; } ;
struct vfio_pci_device {int num_ctx; int irq_type; TYPE_2__* ctx; TYPE_1__* pdev; scalar_t__ pci_2_3; int virq_disabled; } ;
struct TYPE_4__ {int masked; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vfio_pci_device*) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(struct vfio_pci_device *VAR_5)
{
 if (!FUNC_0(VAR_5))
  return -VAR_0;

 if (!VAR_5->pdev->irq)
  return -VAR_1;

 VAR_5->ctx = FUNC_1(sizeof(struct vfio_pci_irq_ctx), VAR_3);
 if (!VAR_5->ctx)
  return -VAR_2;

 VAR_5->num_ctx = 1;







 VAR_5->ctx[0].masked = VAR_5->virq_disabled;
 if (VAR_5->pci_2_3)
  FUNC_2(VAR_5->pdev, !VAR_5->ctx[0].masked);

 VAR_5->irq_type = VAR_4;

 return 0;
}
