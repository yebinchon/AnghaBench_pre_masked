
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_device {struct device* iommu_device; } ;
struct device {int dummy; } ;


 struct mdev_device* FUNC_0 (struct device*) ;

int FUNC_1(struct device *VAR_0, struct device *VAR_1)
{
 struct mdev_device *VAR_2 = FUNC_0(VAR_0);

 VAR_2->iommu_device = VAR_1;

 return 0;
}
