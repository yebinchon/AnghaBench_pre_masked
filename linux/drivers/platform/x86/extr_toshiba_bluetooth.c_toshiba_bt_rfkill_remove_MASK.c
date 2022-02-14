
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshiba_bluetooth_dev {scalar_t__ rfk; } ;
struct acpi_device {int handle; } ;


 struct toshiba_bluetooth_dev* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct toshiba_bluetooth_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_0)
{
 struct toshiba_bluetooth_dev *VAR_1 = FUNC_0(VAR_0);


 if (VAR_1->rfk) {
  FUNC_3(VAR_1->rfk);
  FUNC_2(VAR_1->rfk);
 }

 FUNC_1(VAR_1);

 return FUNC_4(VAR_0->handle);
}
