
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct cmpc_accel {int inputdev_state; } ;
struct acpi_device {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct cmpc_accel* FUNC_1 (TYPE_1__*) ;
 struct acpi_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_1)
{
 struct acpi_device *VAR_2;
 struct cmpc_accel *VAR_3;

 VAR_2 = FUNC_2(VAR_1->dev.parent);
 VAR_3 = FUNC_1(&VAR_1->dev);

 FUNC_0(VAR_2->handle);
 VAR_3->inputdev_state = VAR_0;
}
