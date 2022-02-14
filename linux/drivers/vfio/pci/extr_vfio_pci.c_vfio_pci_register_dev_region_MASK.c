
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfio_pci_regops {int dummy; } ;
struct vfio_pci_region {unsigned int type; unsigned int subtype; size_t size; void* data; int flags; struct vfio_pci_regops const* ops; } ;
struct vfio_pci_device {int num_regions; struct vfio_pci_region* region; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vfio_pci_region* FUNC_0 (struct vfio_pci_region*,int,int ) ;

int FUNC_1(struct vfio_pci_device *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4,
     const struct vfio_pci_regops *VAR_5,
     size_t VAR_6, u32 VAR_7, void *VAR_8)
{
 struct vfio_pci_region *VAR_9;

 VAR_9 = FUNC_0(VAR_2->region,
     (VAR_2->num_regions + 1) * sizeof(*VAR_9),
     VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_2->region = VAR_9;
 VAR_2->region[VAR_2->num_regions].type = VAR_3;
 VAR_2->region[VAR_2->num_regions].subtype = VAR_4;
 VAR_2->region[VAR_2->num_regions].ops = VAR_5;
 VAR_2->region[VAR_2->num_regions].size = VAR_6;
 VAR_2->region[VAR_2->num_regions].flags = VAR_7;
 VAR_2->region[VAR_2->num_regions].data = VAR_8;

 VAR_2->num_regions++;

 return 0;
}
