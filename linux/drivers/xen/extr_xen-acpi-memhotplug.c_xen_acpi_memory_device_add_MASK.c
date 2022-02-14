
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_memory_device {struct acpi_device* device; int res_list; } ;
struct acpi_device {struct acpi_memory_device* driver_data; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int VAR_5 ;
 int FUNC_3 (struct acpi_memory_device*) ;
 int FUNC_4 (struct acpi_memory_device*) ;
 int FUNC_5 (struct acpi_memory_device*) ;
 struct acpi_memory_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (struct acpi_memory_device*) ;

__attribute__((used)) static int FUNC_9(struct acpi_device *VAR_6)
{
 int VAR_7;
 struct acpi_memory_device *VAR_8 = ((void*)0);


 if (!VAR_6)
  return -VAR_2;

 VAR_8 = FUNC_6(sizeof(struct acpi_memory_device), VAR_4);
 if (!VAR_8)
  return -VAR_3;

 FUNC_0(&VAR_8->res_list);
 VAR_8->device = VAR_6;
 FUNC_7(FUNC_2(VAR_6), "%s", VAR_1);
 FUNC_7(FUNC_1(VAR_6), "%s", VAR_0);
 VAR_6->driver_data = VAR_8;


 VAR_7 = FUNC_4(VAR_8);
 if (VAR_7) {
  FUNC_5(VAR_8);
  return VAR_7;
 }
 if (!VAR_5)
  return 0;

 if (!FUNC_3(VAR_8))
  VAR_7 = FUNC_8(VAR_8);

 return VAR_7;
}
