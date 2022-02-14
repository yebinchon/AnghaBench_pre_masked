
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct acpi_device {int handle; } ;


 int FUNC_0 (int ) ;
 struct acpi_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0)
{
 struct acpi_device *VAR_1;

 VAR_1 = FUNC_1(VAR_0->dev.parent);
 FUNC_0(VAR_1->handle);
}
