
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshiba_acpi_dev {int dummy; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 struct toshiba_acpi_dev* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct toshiba_acpi_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_0)
{
 struct toshiba_acpi_dev *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_0->props.brightness);
}
