
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_pci_device {TYPE_1__** vqs; int pci_dev; int per_vq_vectors; } ;
struct virtio_device {int dummy; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {scalar_t__ msix_vector; } ;


 scalar_t__ VAR_0 ;
 struct cpumask const* FUNC_0 (int ,scalar_t__) ;
 struct virtio_pci_device* FUNC_1 (struct virtio_device*) ;

const struct cpumask *FUNC_2(struct virtio_device *VAR_1, int VAR_2)
{
 struct virtio_pci_device *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3->per_vq_vectors ||
     VAR_3->vqs[VAR_2]->msix_vector == VAR_0)
  return ((void*)0);

 return FUNC_0(VAR_3->pci_dev,
        VAR_3->vqs[VAR_2]->msix_vector);
}
