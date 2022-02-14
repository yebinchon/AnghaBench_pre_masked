
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct acpi_device {int dummy; } ;


 int FUNC_0 (struct acpi_device*,struct input_dev*) ;
 struct acpi_device* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0)
{
 struct acpi_device *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, VAR_0);
}
