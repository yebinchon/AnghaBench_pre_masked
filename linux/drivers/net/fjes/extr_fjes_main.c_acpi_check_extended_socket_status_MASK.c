
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_5)
{
 unsigned long long VAR_6;
 acpi_status VAR_7;

 VAR_7 = FUNC_1(VAR_5->handle, "_STA", ((void*)0), &VAR_6);
 if (FUNC_0(VAR_7))
  return -VAR_4;

 if (!((VAR_6 & VAR_2) &&
       (VAR_6 & VAR_0) &&
       (VAR_6 & VAR_3) &&
       (VAR_6 & VAR_1)))
  return -VAR_4;

 return 0;
}
