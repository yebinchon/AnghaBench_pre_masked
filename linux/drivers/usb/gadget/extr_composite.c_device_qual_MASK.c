
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_qualifier_descriptor {int bLength; scalar_t__ bRESERVED; int bNumConfigurations; int bMaxPacketSize0; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdUSB; int bDescriptorType; } ;
struct TYPE_6__ {int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdUSB; } ;
struct usb_composite_dev {TYPE_4__* gadget; TYPE_2__ desc; TYPE_1__* req; } ;
struct TYPE_8__ {TYPE_3__* ep0; } ;
struct TYPE_7__ {int maxpacket; } ;
struct TYPE_5__ {struct usb_qualifier_descriptor* buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_composite_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct usb_composite_dev *VAR_1)
{
 struct usb_qualifier_descriptor *VAR_2 = VAR_1->req->buf;

 VAR_2->bLength = sizeof(*VAR_2);
 VAR_2->bDescriptorType = VAR_0;

 VAR_2->bcdUSB = VAR_1->desc.bcdUSB;
 VAR_2->bDeviceClass = VAR_1->desc.bDeviceClass;
 VAR_2->bDeviceSubClass = VAR_1->desc.bDeviceSubClass;
 VAR_2->bDeviceProtocol = VAR_1->desc.bDeviceProtocol;

 VAR_2->bMaxPacketSize0 = VAR_1->gadget->ep0->maxpacket;
 VAR_2->bNumConfigurations = FUNC_0(VAR_1, VAR_0);
 VAR_2->bRESERVED = 0;
}
