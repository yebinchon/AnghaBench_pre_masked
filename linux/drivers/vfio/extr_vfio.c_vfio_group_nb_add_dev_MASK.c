
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int iommu_group; int container_users; } ;
struct vfio_device {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct vfio_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vfio_device*) ;
 struct vfio_device* FUNC_5 (struct vfio_group*,struct device*) ;

__attribute__((used)) static int FUNC_6(struct vfio_group *VAR_0, struct device *VAR_1)
{
 struct vfio_device *VAR_2;


 VAR_2 = FUNC_5(VAR_0, VAR_1);
 if (FUNC_0(VAR_2)) {
  FUNC_4(VAR_2);
  return 0;
 }


 if (!FUNC_1(&VAR_0->container_users))
  return 0;


 FUNC_2(VAR_1, "Device added to live group %d!\n",
   FUNC_3(VAR_0->iommu_group));

 return 0;
}
