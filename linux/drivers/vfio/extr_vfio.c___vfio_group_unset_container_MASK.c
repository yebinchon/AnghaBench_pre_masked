
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_iommu_driver {TYPE_1__* ops; } ;
struct vfio_group {int container_next; int container_q; struct vfio_container* container; int iommu_group; } ;
struct vfio_container {int group_lock; int * iommu_data; struct vfio_iommu_driver* iommu_driver; int group_list; } ;
struct TYPE_2__ {int owner; int (* release ) (int *) ;int (* detach_group ) (int *,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vfio_container*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct vfio_group *VAR_0)
{
 struct vfio_container *VAR_1 = VAR_0->container;
 struct vfio_iommu_driver *VAR_2;

 FUNC_0(&VAR_1->group_lock);

 VAR_2 = VAR_1->iommu_driver;
 if (VAR_2)
  VAR_2->ops->detach_group(VAR_1->iommu_data,
       VAR_0->iommu_group);

 VAR_0->container = ((void*)0);
 FUNC_8(&VAR_0->container_q);
 FUNC_1(&VAR_0->container_next);


 if (VAR_2 && FUNC_2(&VAR_1->group_list)) {
  VAR_2->ops->release(VAR_1->iommu_data);
  FUNC_3(VAR_2->ops->owner);
  VAR_1->iommu_driver = ((void*)0);
  VAR_1->iommu_data = ((void*)0);
 }

 FUNC_6(&VAR_1->group_lock);

 FUNC_7(VAR_1);
}
