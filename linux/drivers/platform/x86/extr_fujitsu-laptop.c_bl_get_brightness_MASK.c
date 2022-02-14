
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ power; } ;
struct backlight_device {TYPE_1__ props; } ;
struct acpi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct acpi_device* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 struct acpi_device *VAR_2 = FUNC_0(VAR_1);

 return VAR_1->props.power == VAR_0 ? 0 : FUNC_1(VAR_2);
}
