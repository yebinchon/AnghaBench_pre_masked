
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int dummy; } ;
struct iommu_group {int dummy; } ;
struct device {int dummy; } ;


 struct iommu_group* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iommu_group*) ;
 struct vfio_group* FUNC_2 (struct iommu_group*) ;

__attribute__((used)) static struct vfio_group *FUNC_3(struct device *VAR_0)
{
 struct iommu_group *VAR_1;
 struct vfio_group *VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 return VAR_2;
}
