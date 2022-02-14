
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_interface {int num_altsetting; TYPE_6__* cur_altsetting; } ;
struct usb_device_id {int driver_info; } ;
struct usb_device {char* devpath; TYPE_7__* bus; TYPE_4__* actconfig; } ;
typedef int devpath ;
struct TYPE_16__ {scalar_t__ intf_num; } ;
struct TYPE_15__ {int busnum; } ;
struct TYPE_13__ {scalar_t__ bInterfaceNumber; int bNumEndpoints; } ;
struct TYPE_14__ {TYPE_5__ desc; TYPE_2__* endpoint; } ;
struct TYPE_11__ {int bNumInterfaces; } ;
struct TYPE_12__ {TYPE_3__ desc; } ;
struct TYPE_9__ {int bEndpointAddress; int wMaxPacketSize; int bmAttributes; } ;
struct TYPE_10__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 TYPE_8__* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct usb_device*,int ,int ) ;
 int FUNC_8 (struct usb_interface*,int ) ;
 int FUNC_9 (char*,int,char*,int,char*) ;
 int FUNC_10 (struct usb_device*,int ) ;
 int FUNC_11 (struct usb_device*,int) ;
 int FUNC_12 (struct usb_device*,scalar_t__,int ) ;
 int FUNC_13 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_14(struct usb_interface *VAR_3,
   const struct usb_device_id *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_0(VAR_3);
 char VAR_6[32];
 int VAR_7, VAR_8;

 FUNC_3("board id=%lu, interface number %d\n",
   VAR_4->driver_info,
   VAR_3->cur_altsetting->desc.bInterfaceNumber);

 if (FUNC_5(VAR_4->driver_info)->intf_num !=
     VAR_3->cur_altsetting->desc.bInterfaceNumber) {
  FUNC_1("interface %d won't be used. Expecting interface %d to popup\n",
   VAR_3->cur_altsetting->desc.bInterfaceNumber,
   FUNC_5(VAR_4->driver_info)->intf_num);
  return -VAR_0;
 }

 if (VAR_3->num_altsetting > 1) {
  VAR_8 = FUNC_12(VAR_5,
           VAR_3->cur_altsetting->desc.bInterfaceNumber,
           0);
  if (VAR_8 < 0) {
   FUNC_2("usb_set_interface failed, rc %d\n", VAR_8);
   return VAR_8;
  }
 }

 FUNC_1("smsusb_probe %d\n",
        VAR_3->cur_altsetting->desc.bInterfaceNumber);
 for (VAR_7 = 0; VAR_7 < VAR_3->cur_altsetting->desc.bNumEndpoints; VAR_7++) {
  FUNC_1("endpoint %d %02x %02x %d\n", VAR_7,
         VAR_3->cur_altsetting->endpoint[VAR_7].desc.bEndpointAddress,
         VAR_3->cur_altsetting->endpoint[VAR_7].desc.bmAttributes,
         VAR_3->cur_altsetting->endpoint[VAR_7].desc.wMaxPacketSize);
  if (VAR_3->cur_altsetting->endpoint[VAR_7].desc.bEndpointAddress &
      VAR_2)
   VAR_8 = FUNC_10(VAR_5, FUNC_11(VAR_5,
    VAR_3->cur_altsetting->endpoint[VAR_7].desc.bEndpointAddress));
  else
   VAR_8 = FUNC_10(VAR_5, FUNC_13(VAR_5,
    VAR_3->cur_altsetting->endpoint[VAR_7].desc.bEndpointAddress));
 }
 if ((VAR_5->actconfig->desc.bNumInterfaces == 2) &&
     (VAR_3->cur_altsetting->desc.bInterfaceNumber == 0)) {
  FUNC_1("rom interface 0 is not used\n");
  return -VAR_0;
 }

 if (VAR_4->driver_info == VAR_1) {


  FUNC_9(VAR_6, sizeof(VAR_6), "usb\\%d-%s",
    VAR_5->bus->busnum, VAR_5->devpath);
  FUNC_3("stellar device in cold state was found at %s.\n",
   VAR_6);
  VAR_8 = FUNC_7(
    VAR_5, FUNC_6(VAR_6),
    VAR_4->driver_info);


  if (!VAR_8)
   FUNC_3("stellar device now in warm state\n");
  else
   FUNC_2("Failed to put stellar in warm state. Error: %d\n",
          VAR_8);

  return VAR_8;
 } else {
  VAR_8 = FUNC_8(VAR_3, VAR_4->driver_info);
 }

 FUNC_3("Device initialized with return code %d\n", VAR_8);
 FUNC_4(VAR_4->driver_info);
 return VAR_8;
}
