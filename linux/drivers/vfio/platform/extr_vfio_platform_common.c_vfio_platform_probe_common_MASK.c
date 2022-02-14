
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {struct device* device; int igate; int name; scalar_t__ reset_required; } ;
struct iommu_group {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int *,struct vfio_platform_device*) ;
 struct iommu_group* FUNC_4 (struct device*) ;
 int FUNC_5 (struct iommu_group*,struct device*) ;
 int FUNC_6 (struct vfio_platform_device*,struct device*) ;
 int FUNC_7 (struct vfio_platform_device*) ;
 int FUNC_8 (struct vfio_platform_device*,struct device*) ;
 int VAR_1 ;
 int FUNC_9 (struct vfio_platform_device*) ;

int FUNC_10(struct vfio_platform_device *VAR_2,
          struct device *VAR_3)
{
 struct iommu_group *VAR_4;
 int VAR_5;

 if (!VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_6(VAR_2, VAR_3);
 if (VAR_5)
  VAR_5 = FUNC_8(VAR_2, VAR_3);

 if (VAR_5)
  return VAR_5;

 VAR_2->device = VAR_3;

 VAR_5 = FUNC_7(VAR_2);
 if (VAR_5 && VAR_2->reset_required) {
  FUNC_0(VAR_3, "No reset function found for device %s\n",
   VAR_2->name);
  return VAR_5;
 }

 VAR_4 = FUNC_4(VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_3, "No IOMMU group for device %s\n", VAR_2->name);
  VAR_5 = -VAR_0;
  goto put_reset;
 }

 VAR_5 = FUNC_3(VAR_3, &VAR_1, VAR_2);
 if (VAR_5)
  goto put_iommu;

 FUNC_1(&VAR_2->igate);

 FUNC_2(VAR_2->device);
 return 0;

put_iommu:
 FUNC_5(VAR_4, VAR_3);
put_reset:
 FUNC_9(VAR_2);
 return VAR_5;
}
