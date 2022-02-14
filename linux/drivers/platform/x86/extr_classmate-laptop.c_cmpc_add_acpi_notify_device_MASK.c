
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct input_dev {char* name; TYPE_1__ dev; } ;
struct acpi_device {int dev; } ;
typedef int (* input_device_init ) (struct input_dev*) ;


 int VAR_0 ;
 int FUNC_0 (int *,struct input_dev*) ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_1, char *VAR_2,
           input_device_init VAR_3)
{
 struct input_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1();
 if (!VAR_4)
  return -VAR_0;
 VAR_4->name = VAR_2;
 VAR_4->dev.parent = &VAR_1->dev;
 VAR_3(VAR_4);
 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return VAR_5;
 }
 FUNC_0(&VAR_1->dev, VAR_4);
 return 0;
}
