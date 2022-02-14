
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_device {int dev; int driver_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct acpi_device*,int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(struct acpi_device *VAR_0, u32 VAR_1)
{
 FUNC_0(&VAR_0->dev);
 switch (VAR_1) {
 case 0x80:
  FUNC_1(VAR_0, VAR_0->driver_data);
  break;
 default:
  FUNC_2(&VAR_0->dev, "Unexpected event: 0x%08X\n", VAR_1);
 }
}
