
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {scalar_t__ of_reset; } ;


 scalar_t__ FUNC_0 (struct vfio_platform_device*) ;
 int FUNC_1 (struct vfio_platform_device*) ;

__attribute__((used)) static bool FUNC_2(struct vfio_platform_device *VAR_0)
{
 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_0);

 return VAR_0->of_reset ? 1 : 0;
}
