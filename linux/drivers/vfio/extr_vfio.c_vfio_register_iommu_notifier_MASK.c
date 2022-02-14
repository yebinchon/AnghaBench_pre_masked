
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_iommu_driver {TYPE_1__* ops; } ;
struct vfio_group {struct vfio_container* container; } ;
struct vfio_container {int iommu_data; struct vfio_iommu_driver* iommu_driver; } ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {int (* register_notifier ) (int ,unsigned long*,struct notifier_block*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long*,struct notifier_block*) ;
 int FUNC_2 (struct vfio_group*) ;
 int FUNC_3 (struct vfio_group*) ;

__attribute__((used)) static int FUNC_4(struct vfio_group *VAR_2,
     unsigned long *VAR_3,
     struct notifier_block *VAR_4)
{
 struct vfio_container *VAR_5;
 struct vfio_iommu_driver *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2);
 if (VAR_7)
  return -VAR_0;

 VAR_5 = VAR_2->container;
 VAR_6 = VAR_5->iommu_driver;
 if (FUNC_0(VAR_6 && VAR_6->ops->register_notifier))
  VAR_7 = VAR_6->ops->register_notifier(VAR_5->iommu_data,
           VAR_3, VAR_4);
 else
  VAR_7 = -VAR_1;

 FUNC_3(VAR_2);

 return VAR_7;
}
