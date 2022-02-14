
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fujitsu_laptop {TYPE_2__* pf_device; } ;
struct acpi_device {int dummy; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 struct fujitsu_laptop* FUNC_0 (struct acpi_device*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct acpi_device *VAR_1)
{
 struct fujitsu_laptop *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_2->pf_device->dev.kobj,
      &VAR_0);
 FUNC_1(VAR_2->pf_device);
}
