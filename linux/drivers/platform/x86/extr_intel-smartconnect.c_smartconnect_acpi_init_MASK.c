
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; int dev; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_1)
{
 unsigned long long VAR_2;
 acpi_status VAR_3;

 VAR_3 = FUNC_1(VAR_1->handle, "GAOS", ((void*)0), &VAR_2);
 if (FUNC_0(VAR_3))
  return -VAR_0;

 if (VAR_2 & 0x1) {
  FUNC_3(&VAR_1->dev, "Disabling Intel Smart Connect\n");
  VAR_3 = FUNC_2(VAR_1->handle, "SAOS", 0);
 }

 return 0;
}
