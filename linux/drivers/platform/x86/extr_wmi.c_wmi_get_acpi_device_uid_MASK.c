
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_block {int acpi_device; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char const*,struct wmi_block**) ;

char *FUNC_2(const char *VAR_0)
{
 struct wmi_block *VAR_1 = ((void*)0);

 if (!FUNC_1(VAR_0, &VAR_1))
  return ((void*)0);

 return FUNC_0(VAR_1->acpi_device);
}
