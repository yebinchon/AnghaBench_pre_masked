
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int release; int * parent; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;
struct virtio_pci_device {TYPE_1__ vdev; scalar_t__ ioaddr; int lock; int virtqueues; struct pci_dev* pci_dev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct virtio_pci_device*) ;
 struct virtio_pci_device* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,struct virtio_pci_device*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct virtio_pci_device*) ;
 int FUNC_11 (struct virtio_pci_device*) ;
 int FUNC_12 (struct virtio_pci_device*) ;
 int FUNC_13 (struct virtio_pci_device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_5,
       const struct pci_device_id *VAR_6)
{
 struct virtio_pci_device *VAR_7, *VAR_8 = ((void*)0);
 int VAR_9;


 VAR_7 = FUNC_2(sizeof(struct virtio_pci_device), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_5(VAR_5, VAR_7);
 VAR_7->vdev.dev.parent = &VAR_5->dev;
 VAR_7->vdev.dev.release = VAR_4;
 VAR_7->pci_dev = VAR_5;
 FUNC_0(&VAR_7->virtqueues);
 FUNC_9(&VAR_7->lock);


 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9)
  goto err_enable_device;

 if (VAR_3) {
  VAR_9 = FUNC_10(VAR_7);

  if (VAR_9 == -VAR_0 || VAR_9 == -VAR_1)
   VAR_9 = FUNC_12(VAR_7);
  if (VAR_9)
   goto err_probe;
 } else {
  VAR_9 = FUNC_12(VAR_7);
  if (VAR_9 == -VAR_0)
   VAR_9 = FUNC_10(VAR_7);
  if (VAR_9)
   goto err_probe;
 }

 FUNC_6(VAR_5);

 VAR_9 = FUNC_8(&VAR_7->vdev);
 VAR_8 = VAR_7;
 if (VAR_9)
  goto err_register;

 return 0;

err_register:
 if (VAR_7->ioaddr)
      FUNC_11(VAR_7);
 else
      FUNC_13(VAR_7);
err_probe:
 FUNC_3(VAR_5);
err_enable_device:
 if (VAR_8)
  FUNC_7(&VAR_7->vdev.dev);
 else
  FUNC_1(VAR_7);
 return VAR_9;
}
