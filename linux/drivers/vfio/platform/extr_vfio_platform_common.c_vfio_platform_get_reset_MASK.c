
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {void* of_reset; int reset_module; int compat; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vfio_platform_device*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (struct vfio_platform_device*) ;
 void* FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct vfio_platform_device *VAR_1)
{
 if (FUNC_0(VAR_1))
  return FUNC_2(VAR_1) ? 0 : -VAR_0;

 VAR_1->of_reset = FUNC_3(VAR_1->compat,
          &VAR_1->reset_module);
 if (!VAR_1->of_reset) {
  FUNC_1("vfio-reset:%s", VAR_1->compat);
  VAR_1->of_reset = FUNC_3(VAR_1->compat,
       &VAR_1->reset_module);
 }

 return VAR_1->of_reset ? 0 : -VAR_0;
}
