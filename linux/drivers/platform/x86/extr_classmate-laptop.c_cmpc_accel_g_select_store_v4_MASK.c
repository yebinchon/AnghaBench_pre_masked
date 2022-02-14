
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmpc_accel {unsigned long g_select; } ;
struct acpi_device {int handle; int dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (char const*,size_t) ;
 struct acpi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct acpi_device *VAR_5;
 struct input_dev *VAR_6;
 struct cmpc_accel *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_5 = FUNC_4(VAR_1);
 VAR_6 = FUNC_1(&VAR_5->dev);
 VAR_7 = FUNC_1(&VAR_6->dev);

 VAR_9 = FUNC_2(VAR_3, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;


 if (VAR_8 != 0 && VAR_8 != 1)
  return -VAR_0;

 VAR_7->g_select = VAR_8;
 FUNC_0(VAR_5->handle, VAR_8);

 return FUNC_3(VAR_3, VAR_4);
}
