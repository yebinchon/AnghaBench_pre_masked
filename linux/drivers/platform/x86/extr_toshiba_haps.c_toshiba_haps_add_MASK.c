
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshiba_haps_dev {int protection_level; struct acpi_device* acpi_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct acpi_device {TYPE_1__ dev; int handle; struct toshiba_haps_dev* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct toshiba_haps_dev*) ;
 int VAR_4 ;
 struct toshiba_haps_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 struct toshiba_haps_dev* VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct acpi_device *VAR_6)
{
 struct toshiba_haps_dev *VAR_7;
 int VAR_8;

 if (VAR_5)
  return -VAR_0;

 if (!FUNC_4(VAR_6->handle))
  return -VAR_1;

 FUNC_2("Toshiba HDD Active Protection Sensor device\n");

 VAR_7 = FUNC_1(sizeof(struct toshiba_haps_dev), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->acpi_dev = VAR_6;
 VAR_7->protection_level = 2;
 VAR_6->driver_data = VAR_7;
 FUNC_0(&VAR_6->dev, VAR_7);


 VAR_8 = FUNC_5(VAR_6->handle, 2);
 if (VAR_8 != 0)
  return VAR_8;

 VAR_8 = FUNC_3(&VAR_6->dev.kobj, &VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_5 = VAR_7;

 return 0;
}
