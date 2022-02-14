
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct asus_laptop {TYPE_2__* platform_device; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,struct asus_laptop*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct asus_laptop *VAR_3)
{
 int VAR_4;

 VAR_3->platform_device = FUNC_1(VAR_0, -1);
 if (!VAR_3->platform_device)
  return -VAR_1;
 FUNC_4(VAR_3->platform_device, VAR_3);

 VAR_4 = FUNC_0(VAR_3->platform_device);
 if (VAR_4)
  goto fail_platform_device;

 VAR_4 = FUNC_5(&VAR_3->platform_device->dev.kobj,
        &VAR_2);
 if (VAR_4)
  goto fail_sysfs;

 return 0;

fail_sysfs:
 FUNC_2(VAR_3->platform_device);
fail_platform_device:
 FUNC_3(VAR_3->platform_device);
 return VAR_4;
}
