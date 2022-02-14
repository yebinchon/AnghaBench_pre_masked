
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {int (* of_reset ) (struct vfio_platform_device*) ;int device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vfio_platform_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct vfio_platform_device*) ;
 int FUNC_4 (struct vfio_platform_device*,char const**) ;

__attribute__((used)) static int FUNC_5(struct vfio_platform_device *VAR_1,
        const char **VAR_2)
{
 if (FUNC_0(VAR_1)) {
  FUNC_1(VAR_1->device, "reset\n");
  return FUNC_4(VAR_1, VAR_2);
 } else if (VAR_1->of_reset) {
  FUNC_1(VAR_1->device, "reset\n");
  return VAR_1->of_reset(VAR_1);
 }

 FUNC_2(VAR_1->device, "no reset function found!\n");
 return -VAR_0;
}
