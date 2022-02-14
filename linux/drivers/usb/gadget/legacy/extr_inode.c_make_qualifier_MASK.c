
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_qualifier_descriptor {int bLength; int bNumConfigurations; scalar_t__ bRESERVED; int bMaxPacketSize0; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdUSB; int bDescriptorType; } ;
struct usb_device_descriptor {int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; } ;
struct dev_data {int rbuf; TYPE_2__* gadget; struct usb_device_descriptor* dev; } ;
struct TYPE_4__ {TYPE_1__* ep0; } ;
struct TYPE_3__ {int maxpacket; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct usb_qualifier_descriptor*,int) ;

__attribute__((used)) static void FUNC_2 (struct dev_data *VAR_1)
{
 struct usb_qualifier_descriptor VAR_2;
 struct usb_device_descriptor *VAR_3;

 VAR_2.bLength = sizeof VAR_2;
 VAR_2.bDescriptorType = VAR_0;
 VAR_2.bcdUSB = FUNC_0 (0x0200);

 VAR_3 = VAR_1->dev;
 VAR_2.bDeviceClass = VAR_3->bDeviceClass;
 VAR_2.bDeviceSubClass = VAR_3->bDeviceSubClass;
 VAR_2.bDeviceProtocol = VAR_3->bDeviceProtocol;


 VAR_2.bMaxPacketSize0 = VAR_1->gadget->ep0->maxpacket;

 VAR_2.bNumConfigurations = 1;
 VAR_2.bRESERVED = 0;

 FUNC_1 (VAR_1->rbuf, &VAR_2, sizeof VAR_2);
}
