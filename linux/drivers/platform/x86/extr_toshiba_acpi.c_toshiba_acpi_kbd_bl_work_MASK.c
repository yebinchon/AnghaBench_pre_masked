
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_7__ {int kbd_type; scalar_t__ kbd_mode; TYPE_2__* acpi_dev; int kbd_led; } ;
struct TYPE_5__ {int device_class; } ;
struct TYPE_6__ {TYPE_4__ dev; TYPE_1__ pnp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_6)
{

 if (FUNC_4(&VAR_4->acpi_dev->dev.kobj,
          &VAR_5))
  FUNC_3("Unable to update sysfs entries\n");


 if (VAR_4->kbd_type == 2 &&
     VAR_4->kbd_mode != VAR_2)
  FUNC_2(&VAR_4->kbd_led,
    (VAR_4->kbd_mode == VAR_3) ?
    VAR_0 : VAR_1);


 FUNC_0(VAR_4->acpi_dev->pnp.device_class,
     FUNC_1(&VAR_4->acpi_dev->dev),
     0x92, 0);
}
