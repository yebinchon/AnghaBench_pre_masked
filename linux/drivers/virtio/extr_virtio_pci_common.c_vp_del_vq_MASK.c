
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {size_t index; int vdev; } ;
struct virtio_pci_vq_info {int node; } ;
struct virtio_pci_device {int (* del_vq ) (struct virtio_pci_vq_info*) ;int lock; struct virtio_pci_vq_info** vqs; } ;


 int FUNC_0 (struct virtio_pci_vq_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct virtio_pci_vq_info*) ;
 struct virtio_pci_device* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct virtqueue *VAR_0)
{
 struct virtio_pci_device *VAR_1 = FUNC_5(VAR_0->vdev);
 struct virtio_pci_vq_info *VAR_2 = VAR_1->vqs[VAR_0->index];
 unsigned long VAR_3;

 FUNC_2(&VAR_1->lock, VAR_3);
 FUNC_1(&VAR_2->node);
 FUNC_3(&VAR_1->lock, VAR_3);

 VAR_1->del_vq(VAR_2);
 FUNC_0(VAR_2);
}
