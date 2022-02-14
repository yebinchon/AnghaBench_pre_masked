
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (union acpi_object*) ;
 union acpi_object* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static enum led_brightness FUNC_2(struct led_classdev *VAR_6)
{
 union acpi_object *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_5, VAR_4, 0);

 if (!VAR_7)
  return VAR_3;

 if (VAR_7->type != VAR_0 || VAR_7->buffer.pointer[1] != 0x05) {
  FUNC_0(VAR_7);
  return VAR_3;
 }

 switch (VAR_7->buffer.pointer[0] & 0x27) {
 case 0x24:
  VAR_8 = VAR_1;
  break;
 case 0x22:
  VAR_8 = VAR_2;
  break;
 default:
  VAR_8 = VAR_3;
 }

 FUNC_0(VAR_7);

 return VAR_8;
}
