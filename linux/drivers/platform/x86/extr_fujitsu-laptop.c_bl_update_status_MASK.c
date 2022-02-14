
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ power; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct acpi_device* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (scalar_t__,int ,int,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct acpi_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_6)
{
 struct acpi_device *VAR_7 = FUNC_0(VAR_6);

 if (VAR_5) {
  if (VAR_6->props.power == VAR_3)
   FUNC_1(VAR_5, VAR_4, 0x1,
           VAR_2, VAR_0);
  else
   FUNC_1(VAR_5, VAR_4, 0x1,
           VAR_2, VAR_1);
 }

 return FUNC_2(VAR_7, VAR_6->props.brightness);
}
