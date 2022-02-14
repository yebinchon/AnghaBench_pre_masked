
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_device {int dummy; } ;
struct TYPE_7__ {int controlvm_channel; TYPE_2__* acpi_device; int periodic_controlvm_work; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_2)
{
 FUNC_3();
 FUNC_0(&VAR_0->periodic_controlvm_work);
 FUNC_2(&VAR_0->acpi_device->dev.kobj,
       VAR_1);
 FUNC_4(VAR_0->controlvm_channel);
 FUNC_1(VAR_0);
 return 0;
}
