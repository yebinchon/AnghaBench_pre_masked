
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmax_brightness_args {int led_mask; int percentage; } ;
struct acpi_buffer {struct wmax_brightness_args* pointer; scalar_t__ length; } ;
typedef int args ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,int ,struct acpi_buffer*,int *) ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{
 acpi_status VAR_3;
 struct acpi_buffer VAR_4;
 struct wmax_brightness_args VAR_5 = {
  .led_mask = 0xFF,
  .percentage = VAR_2,
 };
 VAR_4.length = (acpi_size) sizeof(VAR_5);
 VAR_4.pointer = &VAR_5;
 VAR_3 = FUNC_2(VAR_0, 0,
         VAR_1, &VAR_4, ((void*)0));
 if (FUNC_0(VAR_3))
  FUNC_1("alienware-wmi: brightness set failure: %u\n", VAR_3);
 return FUNC_0(VAR_3);
}
