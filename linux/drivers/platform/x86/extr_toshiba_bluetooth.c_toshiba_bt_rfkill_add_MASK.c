
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshiba_bluetooth_dev {int rfk; int killswitch; struct acpi_device* acpi_dev; } ;
struct acpi_device {int dev; struct toshiba_bluetooth_dev* driver_data; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct toshiba_bluetooth_dev*) ;
 int FUNC_1 (struct toshiba_bluetooth_dev*) ;
 struct toshiba_bluetooth_dev* FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int *,int ,int *,struct toshiba_bluetooth_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct toshiba_bluetooth_dev*) ;

__attribute__((used)) static int FUNC_11(struct acpi_device *VAR_4)
{
 struct toshiba_bluetooth_dev *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_9(VAR_4->handle);
 if (VAR_6)
  return VAR_6;

 FUNC_4("Toshiba ACPI Bluetooth device driver\n");

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->acpi_dev = VAR_4;
 VAR_4->driver_data = VAR_5;
 FUNC_0(&VAR_4->dev, VAR_5);

 VAR_6 = FUNC_10(VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_5);
  return VAR_6;
 }

 VAR_5->rfk = FUNC_5("Toshiba Bluetooth",
       &VAR_4->dev,
       VAR_2,
       &VAR_3,
       VAR_5);
 if (!VAR_5->rfk) {
  FUNC_3("Unable to allocate rfkill device\n");
  FUNC_1(VAR_5);
  return -VAR_0;
 }

 FUNC_8(VAR_5->rfk, !VAR_5->killswitch);

 VAR_6 = FUNC_7(VAR_5->rfk);
 if (VAR_6) {
  FUNC_3("Unable to register rfkill device\n");
  FUNC_6(VAR_5->rfk);
  FUNC_1(VAR_5);
 }

 return VAR_6;
}
