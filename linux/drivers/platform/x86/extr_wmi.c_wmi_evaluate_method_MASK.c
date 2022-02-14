
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_block {int dev; } ;
struct acpi_buffer {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct wmi_block**) ;
 int FUNC_1 (int *,int ,int ,struct acpi_buffer const*,struct acpi_buffer*) ;

acpi_status FUNC_2(const char *VAR_1, u8 VAR_2,
u32 VAR_3, const struct acpi_buffer *VAR_4, struct acpi_buffer *VAR_5)
{
 struct wmi_block *VAR_6 = ((void*)0);

 if (!FUNC_0(VAR_1, &VAR_6))
  return VAR_0;
 return FUNC_1(&VAR_6->dev, VAR_2, VAR_3,
          VAR_4, VAR_5);
}
