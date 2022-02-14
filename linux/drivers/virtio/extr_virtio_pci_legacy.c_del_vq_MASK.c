
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int index; int vdev; } ;
struct virtio_pci_vq_info {struct virtqueue* vq; } ;
struct virtio_pci_device {scalar_t__ ioaddr; scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct virtio_pci_device* FUNC_3 (int ) ;
 int FUNC_4 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_5(struct virtio_pci_vq_info *VAR_5)
{
 struct virtqueue *VAR_6 = VAR_5->vq;
 struct virtio_pci_device *VAR_7 = FUNC_3(VAR_6->vdev);

 FUNC_1(VAR_6->index, VAR_7->ioaddr + VAR_4);

 if (VAR_7->msix_enabled) {
  FUNC_1(VAR_0,
     VAR_7->ioaddr + VAR_1);

  FUNC_0(VAR_7->ioaddr + VAR_2);
 }


 FUNC_2(0, VAR_7->ioaddr + VAR_3);

 FUNC_4(VAR_6);
}
