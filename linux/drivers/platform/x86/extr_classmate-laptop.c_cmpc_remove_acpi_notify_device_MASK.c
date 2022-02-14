
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct acpi_device {int dev; } ;


 struct input_dev* FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_0)
{
 struct input_dev *VAR_1 = FUNC_0(&VAR_0->dev);
 FUNC_1(VAR_1);
 return 0;
}
