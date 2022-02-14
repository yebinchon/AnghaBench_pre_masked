
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_pci_device {scalar_t__ ioaddr; } ;
struct virtio_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct virtio_pci_device* FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_4(struct virtio_device *VAR_1)
{
 struct virtio_pci_device *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(0, VAR_2->ioaddr + VAR_0);


 FUNC_0(VAR_2->ioaddr + VAR_0);

 FUNC_3(VAR_1);
}
