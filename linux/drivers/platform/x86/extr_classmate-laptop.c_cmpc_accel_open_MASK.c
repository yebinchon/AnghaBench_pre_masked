
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct acpi_device {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct acpi_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_1)
{
 struct acpi_device *VAR_2;

 VAR_2 = FUNC_2(VAR_1->dev.parent);
 if (FUNC_0(FUNC_1(VAR_2->handle)))
  return 0;
 return -VAR_0;
}
