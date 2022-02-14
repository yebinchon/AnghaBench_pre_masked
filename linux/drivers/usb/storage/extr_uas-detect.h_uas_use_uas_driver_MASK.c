
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_host_interface {int dummy; } ;
struct usb_host_endpoint {int ss_ep_comp; } ;
struct usb_hcd {int can_do_streams; TYPE_4__* driver; } ;
struct usb_device_id {unsigned long driver_info; } ;
struct TYPE_9__ {int idVendor; int idProduct; } ;
struct usb_device {scalar_t__ speed; int dev; TYPE_6__* bus; TYPE_3__ descriptor; TYPE_2__* actconfig; } ;
struct TYPE_12__ {scalar_t__ sg_tablesize; } ;
struct TYPE_11__ {int bus_name; } ;
struct TYPE_10__ {int description; } ;
struct TYPE_7__ {scalar_t__ bMaxPower; } ;
struct TYPE_8__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 struct usb_hcd* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_5__* FUNC_2 (struct usb_hcd*) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_host_interface*,struct usb_host_endpoint**) ;
 struct usb_host_interface* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usb_device*,unsigned long*) ;

__attribute__((used)) static int FUNC_9(struct usb_interface *VAR_4,
         const struct usb_device_id *VAR_5,
         unsigned long *VAR_6)
{
 struct usb_host_endpoint *VAR_7[4] = { };
 struct usb_device *VAR_8 = FUNC_3(VAR_4);
 struct usb_hcd *VAR_9 = FUNC_0(VAR_8->bus);
 unsigned long VAR_10 = VAR_5->driver_info;
 struct usb_host_interface *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_6(VAR_4);
 if (!VAR_11)
  return 0;

 VAR_12 = FUNC_5(VAR_11, VAR_7);
 if (VAR_12 < 0)
  return 0;
 if (FUNC_4(VAR_8->descriptor.idVendor) == 0x174c &&
   (FUNC_4(VAR_8->descriptor.idProduct) == 0x5106 ||
    FUNC_4(VAR_8->descriptor.idProduct) == 0x55aa)) {
  if (VAR_8->actconfig->desc.bMaxPower == 0) {

  } else if (VAR_8->speed < VAR_0) {

   VAR_10 |= VAR_1;
  } else if (FUNC_7(&VAR_7[1]->ss_ep_comp) == 32) {

   VAR_10 |= VAR_1;
  } else {

   VAR_10 |= VAR_2;
  }
 }


 if (FUNC_4(VAR_8->descriptor.idVendor) == 0x0bc2)
  VAR_10 |= VAR_3;

 FUNC_8(VAR_8, &VAR_10);

 if (VAR_10 & VAR_1) {
  FUNC_1(&VAR_8->dev,
   "UAS is blacklisted for this device, using usb-storage instead\n");
  return 0;
 }

 if (VAR_8->bus->sg_tablesize == 0) {
  FUNC_1(&VAR_8->dev,
   "The driver for the USB controller %s does not support scatter-gather which is\n",
   VAR_9->driver->description);
  FUNC_1(&VAR_8->dev,
   "required by the UAS driver. Please try an other USB controller if you wish to use UAS.\n");
  return 0;
 }

 if (VAR_8->speed >= VAR_0 && !VAR_9->can_do_streams) {
  FUNC_1(&VAR_8->dev,
   "USB controller %s does not support streams, which are required by the UAS driver.\n",
   FUNC_2(VAR_9)->bus_name);
  FUNC_1(&VAR_8->dev,
   "Please try an other USB controller if you wish to use UAS.\n");
  return 0;
 }

 if (VAR_6)
  *VAR_6 = VAR_10;

 return 1;
}
