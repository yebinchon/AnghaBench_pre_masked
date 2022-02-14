
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fujitsu_laptop {TYPE_2__* pf_device; } ;
struct acpi_device {int dummy; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct fujitsu_laptop* FUNC_0 (struct acpi_device*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct fujitsu_laptop*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_2)
{
 struct fujitsu_laptop *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_3->pf_device = FUNC_2("fujitsu-laptop", -1);
 if (!VAR_3->pf_device)
  return -VAR_0;

 FUNC_5(VAR_3->pf_device, VAR_3);

 VAR_4 = FUNC_1(VAR_3->pf_device);
 if (VAR_4)
  goto err_put_platform_device;

 VAR_4 = FUNC_6(&VAR_3->pf_device->dev.kobj,
     &VAR_1);
 if (VAR_4)
  goto err_del_platform_device;

 return 0;

err_del_platform_device:
 FUNC_3(VAR_3->pf_device);
err_put_platform_device:
 FUNC_4(VAR_3->pf_device);

 return VAR_4;
}
