
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshiba_bluetooth_dev {TYPE_1__* acpi_dev; int killswitch; } ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct toshiba_bluetooth_dev*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, bool VAR_1)
{
 struct toshiba_bluetooth_dev *VAR_2 = VAR_0;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 if (!VAR_2->killswitch)
  return 0;

 if (VAR_1)
  VAR_3 = FUNC_0(VAR_2->acpi_dev->handle);
 else
  VAR_3 = FUNC_1(VAR_2->acpi_dev->handle);

 return VAR_3;
}
