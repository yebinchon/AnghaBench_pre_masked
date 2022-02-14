
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {size_t index; int callback; struct virtio_device* vdev; } ;
struct virtio_pci_vq_info {size_t msix_vector; } ;
struct virtio_pci_device {int pci_dev; struct cpumask** msix_affinity_masks; scalar_t__ msix_enabled; struct virtio_pci_vq_info** vqs; } ;
struct virtio_device {int dummy; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpumask*,struct cpumask const*) ;
 int FUNC_1 (unsigned int,struct cpumask*) ;
 unsigned int FUNC_2 (int ,size_t) ;
 struct virtio_pci_device* FUNC_3 (struct virtio_device*) ;

int FUNC_4(struct virtqueue *VAR_1, const struct cpumask *VAR_2)
{
 struct virtio_device *VAR_3 = VAR_1->vdev;
 struct virtio_pci_device *VAR_4 = FUNC_3(VAR_3);
 struct virtio_pci_vq_info *VAR_5 = VAR_4->vqs[VAR_1->index];
 struct cpumask *VAR_6;
 unsigned int VAR_7;

 if (!VAR_1->callback)
  return -VAR_0;

 if (VAR_4->msix_enabled) {
  VAR_6 = VAR_4->msix_affinity_masks[VAR_5->msix_vector];
  VAR_7 = FUNC_2(VAR_4->pci_dev, VAR_5->msix_vector);
  if (!VAR_2)
   FUNC_1(VAR_7, ((void*)0));
  else {
   FUNC_0(VAR_6, VAR_2);
   FUNC_1(VAR_7, VAR_6);
  }
 }
 return 0;
}
