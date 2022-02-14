
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
struct xiaomi_wmi {int input_dev; int key_code; } ;
struct wmi_device {int dev; } ;


 struct xiaomi_wmi* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct wmi_device *VAR_0, union acpi_object *VAR_1)
{
 struct xiaomi_wmi *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 VAR_2 = FUNC_0(&VAR_0->dev);
 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(VAR_2->input_dev, VAR_2->key_code, 1);
 FUNC_2(VAR_2->input_dev);
 FUNC_1(VAR_2->input_dev, VAR_2->key_code, 0);
 FUNC_2(VAR_2->input_dev);
}
