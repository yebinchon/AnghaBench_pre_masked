
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct cmpc_accel {int inputdev_state; int g_select; int sensitivity; } ;
struct acpi_device {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 struct cmpc_accel* FUNC_4 (TYPE_1__*) ;
 struct acpi_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_2)
{
 struct acpi_device *VAR_3;
 struct cmpc_accel *VAR_4;

 VAR_3 = FUNC_5(VAR_2->dev.parent);
 VAR_4 = FUNC_4(&VAR_2->dev);

 FUNC_2(VAR_3->handle, VAR_4->sensitivity);
 FUNC_1(VAR_3->handle, VAR_4->g_select);

 if (FUNC_0(FUNC_3(VAR_3->handle))) {
  VAR_4->inputdev_state = VAR_0;
  return 0;
 }
 return -VAR_1;
}
