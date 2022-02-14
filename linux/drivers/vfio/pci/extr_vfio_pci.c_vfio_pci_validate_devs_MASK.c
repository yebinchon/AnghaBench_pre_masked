
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_group_info {int count; TYPE_1__* groups; } ;
struct pci_dev {int dev; } ;
struct iommu_group {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iommu_group* FUNC_0 (int *) ;
 int FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (struct iommu_group*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_2, void *VAR_3)
{
 struct vfio_pci_group_info *VAR_4 = VAR_3;
 struct iommu_group *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_0(&VAR_2->dev);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++)
  if (VAR_4->groups[VAR_7].id == VAR_6)
   break;

 FUNC_2(VAR_5);

 return (VAR_7 == VAR_4->count) ? -VAR_0 : 0;
}
