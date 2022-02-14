
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct led_classdev {int dev; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,struct acpi_object_list*,int *) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_2,
     enum led_brightness VAR_3)
{
 union acpi_object VAR_4;
 struct acpi_object_list VAR_5;
 acpi_status VAR_6;

 VAR_4.type = VAR_1;
 VAR_4.integer.value = VAR_3;
 VAR_5.count = 1;
 VAR_5.pointer = &VAR_4;

 VAR_6 = FUNC_1(((void*)0), VAR_0,
          &VAR_5, ((void*)0));
 if (FUNC_0(VAR_6))
  FUNC_2(VAR_2->dev, "Error setting keyboard LED value: %d\n",
   VAR_6);
}
