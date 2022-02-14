
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshiba_bluetooth_dev {int killswitch; int plugged; int powered; TYPE_1__* acpi_dev; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct toshiba_bluetooth_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->acpi_dev->handle);
 if (VAR_4 < 0) {
  FUNC_1("Could not sync bluetooth device status\n");
  return VAR_4;
 }

 VAR_3->killswitch = (VAR_4 & VAR_0) ? 1 : 0;
 VAR_3->plugged = (VAR_4 & VAR_1) ? 1 : 0;
 VAR_3->powered = (VAR_4 & VAR_2) ? 1 : 0;

 FUNC_0("Bluetooth status %d killswitch %d plugged %d powered %d\n",
   VAR_4, VAR_3->killswitch, VAR_3->plugged, VAR_3->powered);

 return 0;
}
