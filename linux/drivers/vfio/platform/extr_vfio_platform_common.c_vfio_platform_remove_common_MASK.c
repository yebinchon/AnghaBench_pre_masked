
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {int device; } ;
struct device {int iommu_group; } ;


 int FUNC_0 (int ) ;
 struct vfio_platform_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,struct device*) ;
 int FUNC_3 (struct vfio_platform_device*) ;

struct vfio_platform_device *FUNC_4(struct device *VAR_0)
{
 struct vfio_platform_device *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  FUNC_0(VAR_1->device);
  FUNC_3(VAR_1);
  FUNC_2(VAR_0->iommu_group, VAR_0);
 }

 return VAR_1;
}
