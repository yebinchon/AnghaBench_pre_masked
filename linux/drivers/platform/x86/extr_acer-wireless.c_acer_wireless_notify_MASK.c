
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int dummy; } ;
struct acpi_device {int dev; } ;


 int VAR_0 ;
 struct input_dev* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_1, u32 VAR_2)
{
 struct input_dev *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(&VAR_1->dev, "event=%#x\n", VAR_2);
 if (VAR_2 != 0x80) {
  FUNC_2(&VAR_1->dev, "Unknown SMKB event: %#x\n", VAR_2);
  return;
 }
 FUNC_3(VAR_3, VAR_0, 1);
 FUNC_3(VAR_3, VAR_0, 0);
 FUNC_4(VAR_3);
}
