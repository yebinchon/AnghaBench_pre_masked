
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct proc_thermal_device {int dev; int int340x_zone; } ;
typedef int acpi_handle ;



 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct proc_thermal_device*) ;

__attribute__((used)) static void FUNC_3(acpi_handle VAR_1, u32 VAR_2, void *VAR_3)
{
 struct proc_thermal_device *VAR_4 = VAR_3;

 if (!VAR_4)
  return;

 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_4);
  FUNC_1(VAR_4->int340x_zone,
    VAR_0);
  break;
 default:
  FUNC_0(VAR_4->dev, "Unsupported event [0x%x]\n", VAR_2);
  break;
 }
}
