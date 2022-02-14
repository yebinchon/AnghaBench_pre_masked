
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int dummy; } ;
struct vfio_device_ops {int dummy; } ;
typedef struct vfio_group vfio_device ;
struct iommu_group {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vfio_group*) ;
 int FUNC_1 (struct vfio_group*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 struct iommu_group* FUNC_3 (struct device*) ;
 int FUNC_4 (struct iommu_group*) ;
 int FUNC_5 (struct iommu_group*) ;
 struct vfio_group* FUNC_6 (struct iommu_group*) ;
 int FUNC_7 (struct vfio_group*) ;
 struct vfio_group* FUNC_8 (struct vfio_group*,struct device*,struct vfio_device_ops const*,void*) ;
 struct vfio_group* FUNC_9 (struct vfio_group*,struct device*) ;
 struct vfio_group* FUNC_10 (struct iommu_group*) ;
 int FUNC_11 (struct vfio_group*) ;

int FUNC_12(struct device *VAR_2,
         const struct vfio_device_ops *VAR_3, void *VAR_4)
{
 struct iommu_group *VAR_5;
 struct vfio_group *VAR_6;
 struct vfio_device *VAR_7;

 VAR_5 = FUNC_3(VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_10(VAR_5);
 if (!VAR_6) {
  VAR_6 = FUNC_6(VAR_5);
  if (FUNC_0(VAR_6)) {
   FUNC_5(VAR_5);
   return FUNC_1(VAR_6);
  }
 } else {




  FUNC_5(VAR_5);
 }

 VAR_7 = FUNC_9(VAR_6, VAR_2);
 if (VAR_7) {
  FUNC_2(VAR_2, "Device already exists on group %d\n",
    FUNC_4(VAR_5));
  FUNC_7(VAR_7);
  FUNC_11(VAR_6);
  return -VAR_0;
 }

 VAR_7 = FUNC_8(VAR_6, VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_7)) {
  FUNC_11(VAR_6);
  return FUNC_1(VAR_7);
 }






 FUNC_11(VAR_6);

 return 0;
}
