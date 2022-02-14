
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct virtio_pci_device {scalar_t__ ioaddr; TYPE_1__ vdev; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct virtio_pci_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct virtio_pci_device*) ;
 int FUNC_7 (struct virtio_pci_device*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct virtio_pci_device *VAR_1 = FUNC_3(VAR_0);
 struct device *VAR_2 = FUNC_0(&VAR_1->vdev.dev);

 FUNC_2(VAR_0);

 FUNC_5(&VAR_1->vdev);

 if (VAR_1->ioaddr)
  FUNC_6(VAR_1);
 else
  FUNC_7(VAR_1);

 FUNC_1(VAR_0);
 FUNC_4(VAR_2);
}
