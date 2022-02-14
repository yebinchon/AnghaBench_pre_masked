
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct toshiba_acpi_dev {int kbd_event_generated; int kbd_type; int last_key_event; int kbd_mode; int kbd_led; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {int device_class; } ;
struct acpi_device {TYPE_2__ dev; TYPE_1__ pnp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int ) ;
 struct toshiba_acpi_dev* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct toshiba_acpi_dev*) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct acpi_device *VAR_6, u32 VAR_7)
{
 struct toshiba_acpi_dev *VAR_8 = FUNC_1(VAR_6);

 switch (VAR_7) {
 case 0x80:






  if (FUNC_8(VAR_4))
   return;
  FUNC_7(VAR_8);
  break;
 case 0x81:
 case 0x82:
 case 0x83:
  FUNC_5("Dock event received %x\n", VAR_7);
  break;
 case 0x88:
  FUNC_5("Thermal event received\n");
  break;
 case 0x8f:
 case 0x90:
  break;
 case 0x8c:
 case 0x8b:
  FUNC_5("SATA power event received %x\n", VAR_7);
  break;
 case 0x92:
  VAR_8->kbd_event_generated = 1;

  if (FUNC_6(&VAR_6->dev.kobj,
           &VAR_5))
   FUNC_4("Unable to update sysfs entries\n");

  if (VAR_8->kbd_type == 2 && VAR_8->kbd_mode != VAR_2)
   FUNC_3(&VAR_8->kbd_led,
     (VAR_8->kbd_mode == VAR_3) ?
     VAR_0 : VAR_1);
  break;
 case 0x85:
 case 0x8d:
 case 0x8e:
 case 0x94:
 case 0x95:
 default:
  FUNC_5("Unknown event received %x\n", VAR_7);
  break;
 }

 FUNC_0(VAR_6->pnp.device_class,
     FUNC_2(&VAR_6->dev),
     VAR_7, (VAR_7 == 0x80) ?
     VAR_8->last_key_event : 0);
}
