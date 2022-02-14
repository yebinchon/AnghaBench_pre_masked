
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* set_max; void* usb_type_max; } ;
struct TYPE_3__ {int vbus_collapse; } ;
struct ab8500_charger {int usb_device_is_unrecognised; int is_aca_rid; TYPE_2__ max_usb_in_curr; int dev; TYPE_1__ flags; int parent; int vbus_detected; } ;
typedef enum ab8500_charger_link_status { ____Placeholder_ab8500_charger_link_status } ab8500_charger_link_status ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ab8500_charger *VAR_6,
  enum ab8500_charger_link_status VAR_7)
{
 int VAR_8 = 0;

 VAR_6->usb_device_is_unrecognised = 0;
 switch (VAR_7) {
 case 128:
 case 130:
 case 129:
  FUNC_0(VAR_6->dev, "USB Type - Standard host is "
   "detected through USB driver\n");
  VAR_6->max_usb_in_curr.usb_type_max = VAR_2;
  VAR_6->is_aca_rid = 0;
  break;
 case 135:
  VAR_6->max_usb_in_curr.usb_type_max = VAR_2;
  VAR_6->is_aca_rid = 0;
  break;
 case 136:
  VAR_6->max_usb_in_curr.usb_type_max = VAR_2;
  VAR_6->is_aca_rid = 0;
  break;
 case 144:
  VAR_6->max_usb_in_curr.usb_type_max = VAR_3;
  VAR_6->is_aca_rid = 0;
  break;
 case 146:




  FUNC_0(VAR_6->dev, "USB_STAT_ACA_RID_A detected\n");
  VAR_6->max_usb_in_curr.usb_type_max = VAR_2;
  VAR_6->is_aca_rid = 1;
  break;
 case 145:




  VAR_6->max_usb_in_curr.usb_type_max = VAR_4;
  FUNC_0(VAR_6->dev, "USB Type - 0x%02x MaxCurr: %d", VAR_7,
    VAR_6->max_usb_in_curr.usb_type_max);
  VAR_6->is_aca_rid = 1;
  break;
 case 134:
  VAR_6->max_usb_in_curr.usb_type_max = VAR_2;
  VAR_6->is_aca_rid = 0;
  break;
 case 138:
  VAR_6->max_usb_in_curr.usb_type_max = VAR_5;
  VAR_6->is_aca_rid = 0;
  break;
 case 143:
 case 142:
  VAR_6->max_usb_in_curr.usb_type_max = VAR_5;
  VAR_6->is_aca_rid = 1;
  break;
 case 133:
  if (VAR_6->vbus_detected) {
   VAR_6->usb_device_is_unrecognised = 1;
   FUNC_0(VAR_6->dev, "USB Type - Legacy charger.\n");
   VAR_6->max_usb_in_curr.usb_type_max =
      VAR_5;
   break;
  }

 case 137:
  FUNC_1(VAR_6->dev, "USB Type - Charging not allowed\n");
  VAR_6->max_usb_in_curr.usb_type_max = VAR_1;
  VAR_8 = -VAR_0;
  break;
 case 131:
  if (FUNC_2(VAR_6->parent)) {
   VAR_6->flags.vbus_collapse = 1;
   FUNC_1(VAR_6->dev, "USB Type - USB_STAT_RESERVED "
      "VBUS has collapsed\n");
   VAR_8 = -VAR_0;
   break;
  } else {
   FUNC_0(VAR_6->dev, "USB Type - Charging not allowed\n");
   VAR_6->max_usb_in_curr.usb_type_max =
      VAR_1;
   FUNC_0(VAR_6->dev, "USB Type - 0x%02x MaxCurr: %d",
    VAR_7,
    VAR_6->max_usb_in_curr.usb_type_max);
   VAR_8 = -VAR_0;
   break;
  }
 case 141:
 case 140:
 case 147:
 case 139:
  VAR_6->max_usb_in_curr.usb_type_max = VAR_2;
  FUNC_0(VAR_6->dev, "USB Type - 0x%02x MaxCurr: %d", VAR_7,
    VAR_6->max_usb_in_curr.usb_type_max);
  break;
 case 132:
  FUNC_1(VAR_6->dev, "USB Type invalid - try charging anyway\n");
  VAR_6->max_usb_in_curr.usb_type_max = VAR_2;
  break;

 default:
  FUNC_1(VAR_6->dev, "USB Type - Unknown\n");
  VAR_6->max_usb_in_curr.usb_type_max = VAR_1;
  VAR_8 = -VAR_0;
  break;
 };

 VAR_6->max_usb_in_curr.set_max = VAR_6->max_usb_in_curr.usb_type_max;
 FUNC_0(VAR_6->dev, "USB Type - 0x%02x MaxCurr: %d",
  VAR_7, VAR_6->max_usb_in_curr.set_max);

 return VAR_8;
}
