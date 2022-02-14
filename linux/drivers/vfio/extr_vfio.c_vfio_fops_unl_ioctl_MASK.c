
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_iommu_driver {TYPE_1__* ops; } ;
struct vfio_container {void* iommu_data; struct vfio_iommu_driver* iommu_driver; } ;
struct file {struct vfio_container* private_data; } ;
struct TYPE_2__ {long (* ioctl ) (void*,unsigned int,unsigned long) ;} ;


 long VAR_0 ;
 long VAR_1 ;



 long FUNC_0 (void*,unsigned int,unsigned long) ;
 long FUNC_1 (struct vfio_container*,unsigned long) ;
 long FUNC_2 (struct vfio_container*,unsigned long) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_2,
    unsigned int VAR_3, unsigned long VAR_4)
{
 struct vfio_container *VAR_5 = VAR_2->private_data;
 struct vfio_iommu_driver *VAR_6;
 void *VAR_7;
 long VAR_8 = -VAR_0;

 if (!VAR_5)
  return VAR_8;

 switch (VAR_3) {
 case 129:
  VAR_8 = VAR_1;
  break;
 case 130:
  VAR_8 = FUNC_1(VAR_5, VAR_4);
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_5, VAR_4);
  break;
 default:
  VAR_6 = VAR_5->iommu_driver;
  VAR_7 = VAR_5->iommu_data;

  if (VAR_6)
   VAR_8 = VAR_6->ops->ioctl(VAR_7, VAR_3, VAR_4);
 }

 return VAR_8;
}
