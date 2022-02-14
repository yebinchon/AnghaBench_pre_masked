
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct virtio_pci_device {int msix_vectors; int msix_enabled; unsigned int msix_used_vectors; unsigned int (* config_vector ) (struct virtio_pci_device*,unsigned int) ;int * msix_names; int pci_dev; int * msix_affinity_masks; TYPE_1__ vdev; } ;
struct virtio_device {int dummy; } ;
struct irq_affinity {int pre_vectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int ) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ,int,int,unsigned int,struct irq_affinity*) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,int ,int ,int ,struct virtio_pci_device*) ;
 int FUNC_7 (int ,int,char*,char const*) ;
 unsigned int FUNC_8 (struct virtio_pci_device*,unsigned int) ;
 struct virtio_pci_device* FUNC_9 (struct virtio_device*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct virtio_device *VAR_8, int VAR_9,
       bool VAR_10, struct irq_affinity *VAR_11)
{
 struct virtio_pci_device *VAR_12 = FUNC_9(VAR_8);
 const char *VAR_13 = FUNC_1(&VAR_12->vdev.dev);
 unsigned VAR_14 = VAR_4;
 unsigned VAR_15, VAR_16;
 int VAR_17 = -VAR_1;

 VAR_12->msix_vectors = VAR_9;

 VAR_12->msix_names = FUNC_3(VAR_9,
        sizeof(*VAR_12->msix_names),
        VAR_2);
 if (!VAR_12->msix_names)
  goto error;
 VAR_12->msix_affinity_masks
  = FUNC_2(VAR_9, sizeof(*VAR_12->msix_affinity_masks),
     VAR_2);
 if (!VAR_12->msix_affinity_masks)
  goto error;
 for (VAR_15 = 0; VAR_15 < VAR_9; ++VAR_15)
  if (!FUNC_0(&VAR_12->msix_affinity_masks[VAR_15],
     VAR_2))
   goto error;

 if (VAR_11) {
  VAR_14 |= VAR_3;
  VAR_11->pre_vectors++;
 }

 VAR_17 = FUNC_4(VAR_12->pci_dev, VAR_9,
          VAR_9, VAR_14, VAR_11);
 if (VAR_17 < 0)
  goto error;
 VAR_12->msix_enabled = 1;


 VAR_16 = VAR_12->msix_used_vectors;
 FUNC_7(VAR_12->msix_names[VAR_16], sizeof *VAR_12->msix_names,
   "%s-config", VAR_13);
 VAR_17 = FUNC_6(FUNC_5(VAR_12->pci_dev, VAR_16),
     VAR_6, 0, VAR_12->msix_names[VAR_16],
     VAR_12);
 if (VAR_17)
  goto error;
 ++VAR_12->msix_used_vectors;

 VAR_16 = VAR_12->config_vector(VAR_12, VAR_16);

 if (VAR_16 == VAR_5) {
  VAR_17 = -VAR_0;
  goto error;
 }

 if (!VAR_10) {

  VAR_16 = VAR_12->msix_used_vectors;
  FUNC_7(VAR_12->msix_names[VAR_16], sizeof *VAR_12->msix_names,
    "%s-virtqueues", VAR_13);
  VAR_17 = FUNC_6(FUNC_5(VAR_12->pci_dev, VAR_16),
      VAR_7, 0, VAR_12->msix_names[VAR_16],
      VAR_12);
  if (VAR_17)
   goto error;
  ++VAR_12->msix_used_vectors;
 }
 return 0;
error:
 return VAR_17;
}
