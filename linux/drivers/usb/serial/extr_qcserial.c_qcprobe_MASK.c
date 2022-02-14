
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


struct usb_serial {TYPE_6__* dev; TYPE_4__* interface; } ;
struct TYPE_11__ {scalar_t__ bInterfaceClass; int bInterfaceNumber; int bNumEndpoints; int bInterfaceProtocol; int bInterfaceSubClass; } ;
struct usb_host_interface {TYPE_5__ desc; TYPE_3__* endpoint; } ;
struct usb_device_id {int driver_info; int idProduct; } ;
struct device {int dummy; } ;
typedef int __u8 ;
struct TYPE_12__ {TYPE_2__* actconfig; struct device dev; } ;
struct TYPE_10__ {int num_altsetting; struct usb_host_interface* altsetting; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_9__ {int desc; } ;
struct TYPE_7__ {int bNumInterfaces; } ;
struct TYPE_8__ {TYPE_1__ desc; } ;


 int VAR_0 ;




 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_6__*,int,int) ;
 int FUNC_6 (struct usb_serial*,void*) ;

__attribute__((used)) static int FUNC_7(struct usb_serial *VAR_3, const struct usb_device_id *VAR_4)
{
 struct usb_host_interface *VAR_5 = VAR_3->interface->cur_altsetting;
 struct device *VAR_6 = &VAR_3->dev->dev;
 int VAR_7 = -VAR_0;
 __u8 VAR_8;
 __u8 VAR_9;
 int VAR_10 = -1;
 bool VAR_11 = 0;


 if (VAR_5->desc.bInterfaceClass != VAR_2)
  goto done;

 VAR_8 = VAR_3->dev->actconfig->desc.bNumInterfaces;
 FUNC_0(VAR_6, "Num Interfaces = %d\n", VAR_8);
 VAR_9 = VAR_5->desc.bInterfaceNumber;
 FUNC_0(VAR_6, "This Interface = %d\n", VAR_9);

 if (VAR_8 == 1) {


  if (VAR_3->interface->num_altsetting == 2)
   VAR_5 = &VAR_3->interface->altsetting[1];
  else if (VAR_3->interface->num_altsetting > 2)
   goto done;

  if (VAR_5->desc.bNumEndpoints == 2 &&
      FUNC_3(&VAR_5->endpoint[0].desc) &&
      FUNC_4(&VAR_5->endpoint[1].desc)) {
   FUNC_0(VAR_6, "QDL port found\n");

   if (VAR_3->interface->num_altsetting == 1)
    VAR_7 = 0;
   else
    VAR_10 = 1;
  }
  goto done;

 }


 VAR_10 = 0;






 switch (VAR_4->driver_info) {
 case 131:







  if (VAR_8 < 3 || VAR_8 > 4) {
   FUNC_1(VAR_6, "unknown number of interfaces: %d\n", VAR_8);
   VAR_10 = -1;
   goto done;
  }

  if (VAR_9 == 0) {
   FUNC_0(VAR_6, "Gobi 1K DM/DIAG interface found\n");
   VAR_10 = 1;
  } else if (VAR_9 == 2)
   FUNC_0(VAR_6, "Modem port found\n");
  else
   VAR_10 = -1;
  break;
 case 130:

  if (VAR_8 == 5 && VAR_4->idProduct == VAR_1) {
   VAR_10 = FUNC_2(VAR_6, VAR_9);
   goto done;
  }
  if (VAR_8 < 3 || VAR_8 > 4) {
   FUNC_1(VAR_6, "unknown number of interfaces: %d\n", VAR_8);
   VAR_10 = -1;
   goto done;
  }

  switch (VAR_9) {
  case 0:

   VAR_10 = -1;
   break;
  case 1:
   FUNC_0(VAR_6, "Gobi 2K+ DM/DIAG interface found\n");
   break;
  case 2:
   FUNC_0(VAR_6, "Modem port found\n");
   break;
  case 3:





   FUNC_0(VAR_6, "Gobi 2K+ NMEA GPS interface found\n");
   break;
  }
  break;
 case 128:







  switch (VAR_9) {
  case 0:
   FUNC_0(VAR_6, "DM/DIAG interface found\n");
   break;
  case 2:
   FUNC_0(VAR_6, "NMEA GPS interface found\n");
   VAR_11 = 1;
   break;
  case 3:
   FUNC_0(VAR_6, "Modem port found\n");
   VAR_11 = 1;
   break;
  default:

   VAR_10 = -1;
   break;
  }
  break;
 case 129:
  switch (VAR_5->desc.bInterfaceProtocol) {

  case 0x07:
  case 0x37:
  case 0x67:

  case 0x08:
  case 0x38:
  case 0x68:

  case 0x09:
  case 0x39:
  case 0x69:

  case 0x16:
  case 0x46:
  case 0x76:
   VAR_10 = -1;
   break;
  default:
   FUNC_0(VAR_6, "Huawei type serial port found (%02x/%02x/%02x)\n",
    VAR_5->desc.bInterfaceClass,
    VAR_5->desc.bInterfaceSubClass,
    VAR_5->desc.bInterfaceProtocol);
  }
  break;
 default:
  FUNC_1(VAR_6, "unsupported device layout type: %lu\n",
   VAR_4->driver_info);
  break;
 }

done:
 if (VAR_10 >= 0) {
  VAR_7 = FUNC_5(VAR_3->dev, VAR_9, VAR_10);
  if (VAR_7 < 0) {
   FUNC_1(VAR_6,
    "Could not set interface, error %d\n",
    VAR_7);
   VAR_7 = -VAR_0;
  }
 }

 if (!VAR_7)
  FUNC_6(VAR_3, (void *)(unsigned long)VAR_11);

 return VAR_7;
}
