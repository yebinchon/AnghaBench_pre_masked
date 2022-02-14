
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_1, bool VAR_2)
{
 acpi_status VAR_3;
 u64 VAR_4 = VAR_2 ? 0x86 : 0x87;

 VAR_3 = FUNC_1(VAR_1->handle, "FNCX", VAR_4);
 if (FUNC_0(VAR_3)) {
  FUNC_2("Unable to switch FNCX notifications\n");
  return -VAR_0;
 }

 return 0;
}
