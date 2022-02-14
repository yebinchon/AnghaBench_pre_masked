
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct vfio_platform_device*) ;
 struct vfio_platform_device* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct vfio_platform_device *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->dev);
 if (VAR_2) {
  FUNC_0(VAR_2);
  return 0;
 }

 return -VAR_0;
}
