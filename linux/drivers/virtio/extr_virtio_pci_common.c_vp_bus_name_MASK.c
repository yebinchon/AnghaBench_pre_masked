
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_pci_device {int pci_dev; } ;
struct virtio_device {int dummy; } ;


 char const* FUNC_0 (int ) ;
 struct virtio_pci_device* FUNC_1 (struct virtio_device*) ;

const char *FUNC_2(struct virtio_device *VAR_0)
{
 struct virtio_pci_device *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->pci_dev);
}
