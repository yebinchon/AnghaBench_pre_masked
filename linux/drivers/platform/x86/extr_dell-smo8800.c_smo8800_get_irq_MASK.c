
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_device {int dev; int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_3(struct acpi_device *VAR_2)
{
 u32 VAR_3 = 0;
 acpi_status VAR_4;

 VAR_4 = FUNC_1(VAR_2->handle, VAR_0,
         VAR_1, &VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_2->dev, "acpi_walk_resources failed\n");
  return 0;
 }

 return VAR_3;
}
