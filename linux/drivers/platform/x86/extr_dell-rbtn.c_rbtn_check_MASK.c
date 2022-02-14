
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef enum rbtn_type { ____Placeholder_rbtn_type } rbtn_type ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static enum rbtn_type FUNC_2(struct acpi_device *VAR_3)
{
 unsigned long long VAR_4;
 acpi_status VAR_5;

 VAR_5 = FUNC_1(VAR_3->handle, "CRBT", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_5))
  return VAR_2;

 switch (VAR_4) {
 case 0:
 case 1:
  return VAR_1;
 case 2:
 case 3:
  return VAR_0;
 default:
  return VAR_2;
 }
}
