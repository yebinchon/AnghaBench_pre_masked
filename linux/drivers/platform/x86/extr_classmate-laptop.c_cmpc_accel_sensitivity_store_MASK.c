
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmpc_accel {unsigned long sensitivity; } ;
struct acpi_device {int handle; int dev; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,unsigned long) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (char const*,size_t) ;
 struct acpi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
         struct device_attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct acpi_device *VAR_4;
 struct input_dev *VAR_5;
 struct cmpc_accel *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_4 = FUNC_4(VAR_0);
 VAR_5 = FUNC_1(&VAR_4->dev);
 VAR_6 = FUNC_1(&VAR_5->dev);

 VAR_8 = FUNC_2(VAR_2, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_6->sensitivity = VAR_7;
 FUNC_0(VAR_4->handle, VAR_7);

 return FUNC_3(VAR_2, VAR_3);
}
