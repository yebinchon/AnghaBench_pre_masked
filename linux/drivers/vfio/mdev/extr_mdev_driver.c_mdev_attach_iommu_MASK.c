
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_device {int dev; } ;
struct iommu_group {int dummy; } ;


 scalar_t__ FUNC_0 (struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct iommu_group*,int *) ;
 struct iommu_group* FUNC_4 () ;
 int FUNC_5 (struct iommu_group*) ;
 int FUNC_6 (struct iommu_group*) ;

__attribute__((used)) static int FUNC_7(struct mdev_device *VAR_0)
{
 int VAR_1;
 struct iommu_group *VAR_2;

 VAR_2 = FUNC_4();
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1 = FUNC_3(VAR_2, &VAR_0->dev);
 if (!VAR_1)
  FUNC_2(&VAR_0->dev, "MDEV: group_id = %d\n",
    FUNC_5(VAR_2));

 FUNC_6(VAR_2);
 return VAR_1;
}
