
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_iommu_driver {TYPE_2__* ops; } ;
struct vfio_group {scalar_t__ noiommu; int container_users; int container_next; struct vfio_container* container; int iommu_group; } ;
struct vfio_container {scalar_t__ noiommu; int group_lock; int group_list; int iommu_data; struct vfio_iommu_driver* iommu_driver; } ;
struct fd {TYPE_1__* file; } ;
struct TYPE_4__ {int (* attach_group ) (int ,int ) ;} ;
struct TYPE_3__ {struct vfio_container* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct fd FUNC_5 (int) ;
 int FUNC_6 (struct fd) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct vfio_container*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_12(struct vfio_group *VAR_5, int VAR_6)
{
 struct fd VAR_7;
 struct vfio_container *VAR_8;
 struct vfio_iommu_driver *VAR_9;
 int VAR_10 = 0;

 if (FUNC_2(&VAR_5->container_users))
  return -VAR_2;

 if (VAR_5->noiommu && !FUNC_3(VAR_0))
  return -VAR_3;

 VAR_7 = FUNC_5(VAR_6);
 if (!VAR_7.file)
  return -VAR_1;


 if (VAR_7.file->f_op != &VAR_4) {
  FUNC_6(VAR_7);
  return -VAR_2;
 }

 VAR_8 = VAR_7.file->private_data;
 FUNC_0(!VAR_8);

 FUNC_4(&VAR_8->group_lock);


 if (!FUNC_8(&VAR_8->group_list) &&
     VAR_8->noiommu != VAR_5->noiommu) {
  VAR_10 = -VAR_3;
  goto unlock_out;
 }

 VAR_9 = VAR_8->iommu_driver;
 if (VAR_9) {
  VAR_10 = VAR_9->ops->attach_group(VAR_8->iommu_data,
      VAR_5->iommu_group);
  if (VAR_10)
   goto unlock_out;
 }

 VAR_5->container = VAR_8;
 VAR_8->noiommu = VAR_5->noiommu;
 FUNC_7(&VAR_5->container_next, &VAR_8->group_list);


 FUNC_11(VAR_8);
 FUNC_1(&VAR_5->container_users);

unlock_out:
 FUNC_10(&VAR_8->group_lock);
 FUNC_6(VAR_7);
 return VAR_10;
}
