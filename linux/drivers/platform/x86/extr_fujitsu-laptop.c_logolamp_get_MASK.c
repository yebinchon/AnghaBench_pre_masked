
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct acpi_device*,int ,int,int ,int) ;
 struct acpi_device* FUNC_1 (int ) ;

__attribute__((used)) static enum led_brightness FUNC_2(struct led_classdev *VAR_7)
{
 struct acpi_device *VAR_8 = FUNC_1(VAR_7->dev->parent);
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_0, 0x2, VAR_5, 0x0);
 if (VAR_9 == VAR_1)
  return VAR_2;

 VAR_9 = FUNC_0(VAR_8, VAR_0, 0x2, VAR_6, 0x0);
 if (VAR_9 == VAR_1)
  return VAR_3;

 return VAR_4;
}
