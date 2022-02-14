
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct toshiba_bluetooth_dev {int killswitch; int rfk; } ;
struct acpi_device {int dummy; } ;


 struct toshiba_bluetooth_dev* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct toshiba_bluetooth_dev*) ;

__attribute__((used)) static void FUNC_3(struct acpi_device *VAR_0, u32 VAR_1)
{
 struct toshiba_bluetooth_dev *VAR_2 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_2))
  return;

 FUNC_1(VAR_2->rfk, !VAR_2->killswitch);
}
