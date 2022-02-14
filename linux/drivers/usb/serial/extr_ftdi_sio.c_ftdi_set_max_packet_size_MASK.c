
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_serial_port {int dev; TYPE_4__* serial; } ;
struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {scalar_t__ wMaxPacketSize; } ;
struct ftdi_private {int max_packet_size; } ;
struct TYPE_8__ {struct usb_interface* interface; } ;
struct TYPE_5__ {unsigned int bNumEndpoints; } ;
struct TYPE_7__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct usb_endpoint_descriptor*) ;
 int FUNC_3 (struct usb_endpoint_descriptor*) ;
 struct ftdi_private* FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_5(struct usb_serial_port *VAR_0)
{
 struct ftdi_private *VAR_1 = FUNC_4(VAR_0);
 struct usb_interface *VAR_2 = VAR_0->serial->interface;
 struct usb_endpoint_descriptor *VAR_3;
 unsigned VAR_4;
 unsigned VAR_5;

 VAR_4 = VAR_2->cur_altsetting->desc.bNumEndpoints;
 if (!VAR_4)
  return;







 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_3 = &VAR_2->cur_altsetting->endpoint[VAR_5].desc;
  if (!VAR_3->wMaxPacketSize) {
   VAR_3->wMaxPacketSize = FUNC_0(0x40);
   FUNC_1(&VAR_0->dev, "Overriding wMaxPacketSize on endpoint %d\n",
     FUNC_3(VAR_3));
  }
 }


 VAR_1->max_packet_size = FUNC_2(VAR_3);
}
