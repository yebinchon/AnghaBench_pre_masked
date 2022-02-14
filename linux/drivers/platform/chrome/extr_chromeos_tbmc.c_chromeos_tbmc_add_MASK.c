
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; scalar_t__ product; int bustype; } ;
struct input_dev {char* name; int open; TYPE_1__ id; int phys; } ;
struct device {int dummy; } ;
struct acpi_device {struct input_dev* driver_data; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acpi_device*) ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int) ;
 struct input_dev* FUNC_3 (struct device*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;
 int FUNC_6 (struct input_dev*,struct acpi_device*) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_5)
{
 struct input_dev *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_7);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->name = "Tablet Mode Switch";
 VAR_6->phys = FUNC_0(VAR_5);

 VAR_6->id.bustype = VAR_0;
 VAR_6->id.version = 1;
 VAR_6->id.product = 0;
 VAR_6->open = VAR_4;

 FUNC_6(VAR_6, VAR_5);
 VAR_5->driver_data = VAR_6;

 FUNC_5(VAR_6, VAR_2, VAR_3);
 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_7, "cannot register input device\n");
  return VAR_8;
 }
 FUNC_2(VAR_7, 1);
 return 0;
}
