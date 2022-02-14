
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
 int FUNC_0 (struct acpi_device*,int ,int,int,int) ;
 struct acpi_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct led_classdev *VAR_3,
    enum led_brightness VAR_4)
{
 struct acpi_device *VAR_5 = FUNC_1(VAR_3->dev->parent);

 if (VAR_4 >= VAR_1)
  return FUNC_0(VAR_5, VAR_0, 0x5, VAR_2,
          VAR_2);
 else
  return FUNC_0(VAR_5, VAR_0, 0x5, VAR_2,
          0x0);
}
