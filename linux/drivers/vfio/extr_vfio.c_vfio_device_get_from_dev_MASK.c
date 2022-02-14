
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int dummy; } ;
struct vfio_device {int dummy; } ;
struct device {int dummy; } ;


 struct vfio_device* FUNC_0 (struct vfio_group*,struct device*) ;
 struct vfio_group* FUNC_1 (struct device*) ;
 int FUNC_2 (struct vfio_group*) ;

struct vfio_device *FUNC_3(struct device *VAR_0)
{
 struct vfio_group *VAR_1;
 struct vfio_device *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 FUNC_2(VAR_1);

 return VAR_2;
}
