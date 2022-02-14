
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_iommu_driver {TYPE_1__* ops; } ;
struct vfio_group {struct vfio_container* container; } ;
struct vfio_container {int iommu_data; struct vfio_iommu_driver* iommu_driver; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* unpin_pages ) (int ,unsigned long*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long*,int) ;
 int FUNC_2 (struct vfio_group*) ;
 struct vfio_group* FUNC_3 (struct device*) ;
 int FUNC_4 (struct vfio_group*) ;
 int FUNC_5 (struct vfio_group*) ;

int FUNC_6(struct device *VAR_5, unsigned long *VAR_6, int VAR_7)
{
 struct vfio_container *VAR_8;
 struct vfio_group *VAR_9;
 struct vfio_iommu_driver *VAR_10;
 int VAR_11;

 if (!VAR_5 || !VAR_6 || !VAR_7)
  return -VAR_1;

 if (VAR_7 > VAR_4)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_5);
 if (!VAR_9)
  return -VAR_2;

 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11)
  goto err_unpin_pages;

 VAR_8 = VAR_9->container;
 VAR_10 = VAR_8->iommu_driver;
 if (FUNC_0(VAR_10 && VAR_10->ops->unpin_pages))
  VAR_11 = VAR_10->ops->unpin_pages(VAR_8->iommu_data, VAR_6,
            VAR_7);
 else
  VAR_11 = -VAR_3;

 FUNC_5(VAR_9);

err_unpin_pages:
 FUNC_4(VAR_9);
 return VAR_11;
}
