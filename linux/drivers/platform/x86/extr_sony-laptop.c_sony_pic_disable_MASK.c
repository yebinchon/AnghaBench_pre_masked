
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef scalar_t__ acpi_status ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*,int *,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_2)
{
 acpi_status VAR_3 = FUNC_1(VAR_2->handle, "_DIS", ((void*)0),
            ((void*)0));

 if (FUNC_0(VAR_3) && VAR_3 != VAR_0)
  return -VAR_1;

 FUNC_2("Device disabled\n");
 return 0;
}
