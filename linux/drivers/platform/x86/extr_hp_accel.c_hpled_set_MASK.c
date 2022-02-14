
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct delayed_led_classdev {int dummy; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_device {int handle; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_4__ {struct acpi_device* bus_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,unsigned long long*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct delayed_led_classdev *VAR_2, enum led_brightness VAR_3)
{
 struct acpi_device *VAR_4 = VAR_1.bus_priv;
 unsigned long long VAR_5;
 union acpi_object VAR_6[1];
 struct acpi_object_list VAR_7 = { 1, VAR_6 };

 VAR_6[0].type = VAR_0;
 VAR_6[0].integer.value = !!VAR_3;

 FUNC_0(VAR_4->handle, "ALED", &VAR_7, &VAR_5);
}
