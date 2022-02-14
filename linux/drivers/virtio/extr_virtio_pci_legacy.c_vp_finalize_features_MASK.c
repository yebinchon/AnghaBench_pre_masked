
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct virtio_pci_device {scalar_t__ ioaddr; } ;
struct virtio_device {scalar_t__ features; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 struct virtio_pci_device* FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (struct virtio_device*) ;

__attribute__((used)) static int FUNC_4(struct virtio_device *VAR_1)
{
 struct virtio_pci_device *VAR_2 = FUNC_2(VAR_1);


 FUNC_3(VAR_1);


 FUNC_0((u32)VAR_1->features != VAR_1->features);


 FUNC_1(VAR_1->features, VAR_2->ioaddr + VAR_0);

 return 0;
}
