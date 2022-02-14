
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshiba_acpi_dev {TYPE_1__* acpi_dev; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct toshiba_acpi_dev *VAR_1)
{
 unsigned long long VAR_2;
 acpi_status VAR_3;

 VAR_3 = FUNC_1(VAR_1->acpi_dev->handle, "INFO",
          ((void*)0), &VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_2("ACPI INFO method execution failed\n");
  return -VAR_0;
 }

 return VAR_2;
}
