
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int product; int vendor; int bustype; } ;
struct input_dev {char* name; char* phys; int keybit; int evbit; TYPE_1__ id; } ;
struct acpi_device {struct input_dev* driver_data; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct input_dev* FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_5)
{
 struct input_dev *VAR_6;

 VAR_6 = FUNC_0(&VAR_5->dev);
 if (!VAR_6)
  return -VAR_1;

 VAR_5->driver_data = VAR_6;
 VAR_6->name = "Acer Wireless Radio Control";
 VAR_6->phys = "acer-wireless/input0";
 VAR_6->id.bustype = VAR_0;
 VAR_6->id.vendor = VAR_4;
 VAR_6->id.product = 0x1229;
 FUNC_2(VAR_2, VAR_6->evbit);
 FUNC_2(VAR_3, VAR_6->keybit);

 return FUNC_1(VAR_6);
}
