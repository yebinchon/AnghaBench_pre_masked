
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int idVendor; int idProduct; } ;
struct usb_device {TYPE_3__ descriptor; } ;
struct TYPE_5__ {struct device* parent; } ;
struct rc_dev {int timeout; int max_timeout; scalar_t__ map_name; int driver_name; int s_carrier_report; int s_learning_mode; int tx_ir; int s_tx_carrier; int s_tx_mask; int s_timeout; int min_timeout; int allowed_protocols; struct mceusb_dev* priv; TYPE_1__ dev; int input_id; int input_phys; int device_name; } ;
struct TYPE_6__ {scalar_t__ rx2; int no_tx; } ;
struct mceusb_dev {size_t model; TYPE_2__ flags; struct usb_device* usbdev; int phys; int name; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_8__ {char* name; scalar_t__ rc_map; int broken_irtimeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;


 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ) ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct rc_dev* FUNC_4 (int ) ;
 int FUNC_5 (struct rc_dev*) ;
 int FUNC_6 (struct rc_dev*) ;
 int FUNC_7 (int ,int,char*,char*,int,int) ;
 int FUNC_8 (struct usb_device*,int ,int) ;
 int FUNC_9 (struct usb_device*,int *) ;

__attribute__((used)) static struct rc_dev *FUNC_10(struct mceusb_dev *VAR_15)
{
 struct usb_device *VAR_16 = VAR_15->usbdev;
 struct device *VAR_17 = VAR_15->dev;
 struct rc_dev *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_4(VAR_3);
 if (!VAR_18) {
  FUNC_2(VAR_17, "remote dev allocation failed");
  goto out;
 }

 FUNC_7(VAR_15->name, sizeof(VAR_15->name), "%s (%04x:%04x)",
   VAR_8[VAR_15->model].name ?
   VAR_8[VAR_15->model].name :
   "Media Center Ed. eHome Infrared Remote Transceiver",
   FUNC_3(VAR_15->usbdev->descriptor.idVendor),
   FUNC_3(VAR_15->usbdev->descriptor.idProduct));

 FUNC_8(VAR_15->usbdev, VAR_15->phys, sizeof(VAR_15->phys));

 VAR_18->device_name = VAR_15->name;
 VAR_18->input_phys = VAR_15->phys;
 FUNC_9(VAR_15->usbdev, &VAR_18->input_id);
 VAR_18->dev.parent = VAR_17;
 VAR_18->priv = VAR_15;
 VAR_18->allowed_protocols = VAR_7;
 VAR_18->min_timeout = FUNC_1(VAR_2);
 VAR_18->timeout = FUNC_0(100);
 if (!VAR_8[VAR_15->model].broken_irtimeout) {
  VAR_18->s_timeout = VAR_11;
  VAR_18->max_timeout = 10 * VAR_1;
 } else {




  VAR_18->max_timeout = VAR_18->timeout;
 }
 if (!VAR_15->flags.no_tx) {
  VAR_18->s_tx_mask = VAR_13;
  VAR_18->s_tx_carrier = VAR_12;
  VAR_18->tx_ir = VAR_14;
 }
 if (VAR_15->flags.rx2 > 0) {
  VAR_18->s_learning_mode = VAR_10;
  VAR_18->s_carrier_report = VAR_9;
 }
 VAR_18->driver_name = VAR_0;

 switch (FUNC_3(VAR_16->descriptor.idVendor)) {
 case 129:
  VAR_18->map_name = VAR_4;
  break;
 case 128:
  VAR_18->map_name = VAR_5;
  break;
 default:
  VAR_18->map_name = VAR_6;
 }
 if (VAR_8[VAR_15->model].rc_map)
  VAR_18->map_name = VAR_8[VAR_15->model].rc_map;

 VAR_19 = FUNC_6(VAR_18);
 if (VAR_19 < 0) {
  FUNC_2(VAR_17, "remote dev registration failed");
  goto out;
 }

 return VAR_18;

out:
 FUNC_5(VAR_18);
 return ((void*)0);
}
