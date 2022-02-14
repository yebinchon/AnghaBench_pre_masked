
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct vfio_iommu_driver {TYPE_1__* ops; } ;
struct vfio_container {int iommu_data; struct vfio_iommu_driver* iommu_driver; } ;
struct file {struct vfio_container* private_data; } ;
struct TYPE_2__ {int (* mmap ) (int ,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct vfio_container *VAR_3 = VAR_1->private_data;
 struct vfio_iommu_driver *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = VAR_3->iommu_driver;
 if (FUNC_0(VAR_4 && VAR_4->ops->mmap))
  VAR_5 = VAR_4->ops->mmap(VAR_3->iommu_data, VAR_2);

 return VAR_5;
}
