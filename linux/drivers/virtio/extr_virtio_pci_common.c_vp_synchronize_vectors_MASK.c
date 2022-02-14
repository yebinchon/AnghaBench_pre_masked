
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_pci_device {int msix_vectors; TYPE_1__* pci_dev; scalar_t__ intx_enabled; } ;
struct virtio_device {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 struct virtio_pci_device* FUNC_2 (struct virtio_device*) ;

void FUNC_3(struct virtio_device *VAR_0)
{
 struct virtio_pci_device *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (VAR_1->intx_enabled)
  FUNC_1(VAR_1->pci_dev->irq);

 for (VAR_2 = 0; VAR_2 < VAR_1->msix_vectors; ++VAR_2)
  FUNC_1(FUNC_0(VAR_1->pci_dev, VAR_2));
}
