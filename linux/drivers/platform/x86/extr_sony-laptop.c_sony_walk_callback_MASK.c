
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_device_info {int param_count; int name; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct acpi_device_info**) ;
 int FUNC_2 (struct acpi_device_info*) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static acpi_status FUNC_4(acpi_handle VAR_1, u32 VAR_2,
          void *VAR_3, void **VAR_4)
{
 struct acpi_device_info *VAR_5;

 if (FUNC_0(FUNC_1(VAR_1, &VAR_5))) {
  FUNC_3("method: name: %4.4s, args %X\n",
   (char *)&VAR_5->name, VAR_5->param_count);

  FUNC_2(VAR_5);
 }

 return VAR_0;
}
