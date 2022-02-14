
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wmax_basic_args ;
struct wmax_led_args {int led_mask; scalar_t__ state; int brightness; int colors; } ;
struct platform_zone {int location; int colors; } ;
struct legacy_led_args {int led_mask; scalar_t__ state; int brightness; int colors; } ;
struct acpi_buffer {struct wmax_led_args* pointer; void* length; } ;
typedef int legacy_args ;
typedef int acpi_status ;
typedef void* acpi_size ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int,struct acpi_buffer*,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_zone *VAR_10)
{
 int VAR_11;
 acpi_status VAR_12;
 char *VAR_13;
 struct acpi_buffer VAR_14;
 struct legacy_led_args VAR_15;
 struct wmax_led_args VAR_16;
 if (VAR_8 == VAR_4) {
  VAR_16.led_mask = 1 << VAR_10->location;
  VAR_16.colors = VAR_10->colors;
  VAR_16.state = VAR_9;
  VAR_13 = VAR_5;
  VAR_11 = VAR_6;

  VAR_14.length = (acpi_size) sizeof(VAR_16);
  VAR_14.pointer = &VAR_16;
 } else {
  VAR_15.colors = VAR_10->colors;
  VAR_15.brightness = VAR_7;
  VAR_15.state = 0;
  if (VAR_9 == VAR_0 ||
      VAR_9 == VAR_3) {
   VAR_13 = VAR_2;
   VAR_15.state = VAR_9;
  } else
   VAR_13 = VAR_1;
  VAR_11 = VAR_10->location + 1;

  VAR_14.length = (acpi_size) sizeof(VAR_15);
  VAR_14.pointer = &VAR_15;
 }
 FUNC_1("alienware-wmi: guid %s method %d\n", VAR_13, VAR_11);

 VAR_12 = FUNC_3(VAR_13, 0, VAR_11, &VAR_14, ((void*)0));
 if (FUNC_0(VAR_12))
  FUNC_2("alienware-wmi: zone set failure: %u\n", VAR_12);
 return FUNC_0(VAR_12);
}
