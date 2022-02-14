
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mdev_device *VAR_0)
{
 FUNC_1(&VAR_0->dev);
 FUNC_0(&VAR_0->dev, "MDEV: detaching iommu\n");
}
