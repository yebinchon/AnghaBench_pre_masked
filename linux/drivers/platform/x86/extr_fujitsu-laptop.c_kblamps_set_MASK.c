
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {TYPE_1__* dev; } ;
struct acpi_device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_device*,int ,int,int ,int ) ;
 struct acpi_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct led_classdev *VAR_5,
         enum led_brightness VAR_6)
{
 struct acpi_device *VAR_7 = FUNC_1(VAR_5->dev->parent);

 if (VAR_6 >= VAR_4)
  return FUNC_0(VAR_7, VAR_0, 0x1, VAR_3,
          VAR_2);
 else
  return FUNC_0(VAR_7, VAR_0, 0x1, VAR_3,
          VAR_1);
}
