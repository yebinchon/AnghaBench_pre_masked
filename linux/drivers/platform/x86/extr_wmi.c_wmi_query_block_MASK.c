
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_block {int dummy; } ;
struct acpi_buffer {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wmi_block*,int ,struct acpi_buffer*) ;
 int FUNC_1 (char const*,struct wmi_block**) ;

acpi_status FUNC_2(const char *VAR_2, u8 VAR_3,
       struct acpi_buffer *VAR_4)
{
 struct wmi_block *VAR_5;

 if (!VAR_2)
  return VAR_0;

 if (!FUNC_1(VAR_2, &VAR_5))
  return VAR_1;

 return FUNC_0(VAR_5, VAR_3, VAR_4);
}
