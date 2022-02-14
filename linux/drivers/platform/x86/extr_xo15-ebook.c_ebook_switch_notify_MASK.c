
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (struct acpi_device*) ;

__attribute__((used)) static void FUNC_2(struct acpi_device *VAR_1, u32 VAR_2)
{
 switch (VAR_2) {
 case 129:
 case 128:
  FUNC_1(VAR_1);
  break;
 default:
  FUNC_0((VAR_0,
      "Unsupported event [0x%x]\n", VAR_2));
  break;
 }
}
