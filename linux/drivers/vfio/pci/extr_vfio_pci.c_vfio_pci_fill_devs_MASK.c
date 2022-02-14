
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_pci_fill_info {size_t cur; size_t max; TYPE_1__* devices; } ;
struct pci_dev {int devfn; TYPE_2__* bus; int dev; } ;
struct iommu_group {int dummy; } ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {int devfn; int bus; int segment; int group_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iommu_group* FUNC_0 (int *) ;
 int FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (struct iommu_group*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_2, void *VAR_3)
{
 struct vfio_pci_fill_info *VAR_4 = VAR_3;
 struct iommu_group *VAR_5;

 if (VAR_4->cur == VAR_4->max)
  return -VAR_0;

 VAR_5 = FUNC_0(&VAR_2->dev);
 if (!VAR_5)
  return -VAR_1;

 VAR_4->devices[VAR_4->cur].group_id = FUNC_1(VAR_5);
 VAR_4->devices[VAR_4->cur].segment = FUNC_3(VAR_2->bus);
 VAR_4->devices[VAR_4->cur].bus = VAR_2->bus->number;
 VAR_4->devices[VAR_4->cur].devfn = VAR_2->devfn;
 VAR_4->cur++;
 FUNC_2(VAR_5);
 return 0;
}
