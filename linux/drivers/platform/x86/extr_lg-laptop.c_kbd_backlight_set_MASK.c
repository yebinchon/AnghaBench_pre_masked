
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
typedef int u32 ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union acpi_object*) ;
 union acpi_object* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct led_classdev *VAR_4,
         enum led_brightness VAR_5)
{
 u32 VAR_6;
 union acpi_object *VAR_7;

 VAR_6 = 0x22;
 if (VAR_5 <= VAR_1)
  VAR_6 = 0;
 if (VAR_5 >= VAR_0)
  VAR_6 = 0x24;
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_6);
 FUNC_0(VAR_7);
}
