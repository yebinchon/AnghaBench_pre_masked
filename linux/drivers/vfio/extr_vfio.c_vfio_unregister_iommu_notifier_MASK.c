
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_iommu_driver {TYPE_1__* ops; } ;
struct vfio_group {struct vfio_container* container; } ;
struct vfio_container {int iommu_data; struct vfio_iommu_driver* iommu_driver; } ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {int (* unregister_notifier ) (int ,struct notifier_block*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct notifier_block*) ;
 int FUNC_2 (struct vfio_group*) ;
 int FUNC_3 (struct vfio_group*) ;

__attribute__((used)) static int FUNC_4(struct vfio_group *VAR_2,
       struct notifier_block *VAR_3)
{
 struct vfio_container *VAR_4;
 struct vfio_iommu_driver *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6)
  return -VAR_0;

 VAR_4 = VAR_2->container;
 VAR_5 = VAR_4->iommu_driver;
 if (FUNC_0(VAR_5 && VAR_5->ops->unregister_notifier))
  VAR_6 = VAR_5->ops->unregister_notifier(VAR_4->iommu_data,
             VAR_3);
 else
  VAR_6 = -VAR_1;

 FUNC_3(VAR_2);

 return VAR_6;
}
