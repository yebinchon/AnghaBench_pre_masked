
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmpc_accel {int g_select; } ;
struct acpi_device {int dev; } ;
typedef int ssize_t ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int) ;
 struct acpi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct acpi_device *VAR_3;
 struct input_dev *VAR_4;
 struct cmpc_accel *VAR_5;

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = FUNC_0(&VAR_3->dev);
 VAR_5 = FUNC_0(&VAR_4->dev);

 return FUNC_1(VAR_2, "%d\n", VAR_5->g_select);
}
