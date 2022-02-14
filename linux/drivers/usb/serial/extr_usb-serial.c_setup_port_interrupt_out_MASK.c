
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int interrupt_out_size; int interrupt_out_buffer; int interrupt_out_urb; int interrupt_out_endpointAddress; TYPE_1__* serial; } ;
struct usb_serial_driver {int write_int_callback; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {struct usb_device* dev; struct usb_serial_driver* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_endpoint_descriptor*) ;
 int FUNC_3 (int ,struct usb_device*,int ,int ,int,int ,struct usb_serial_port*,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_2,
     struct usb_endpoint_descriptor *VAR_3)
{
 struct usb_serial_driver *VAR_4 = VAR_2->serial->type;
 struct usb_device *VAR_5 = VAR_2->serial->dev;
 int VAR_6;

 VAR_2->interrupt_out_urb = FUNC_1(0, VAR_1);
 if (!VAR_2->interrupt_out_urb)
  return -VAR_0;
 VAR_6 = FUNC_2(VAR_3);
 VAR_2->interrupt_out_size = VAR_6;
 VAR_2->interrupt_out_endpointAddress = VAR_3->bEndpointAddress;
 VAR_2->interrupt_out_buffer = FUNC_0(VAR_6, VAR_1);
 if (!VAR_2->interrupt_out_buffer)
  return -VAR_0;
 FUNC_3(VAR_2->interrupt_out_urb, VAR_5,
   FUNC_4(VAR_5, VAR_3->bEndpointAddress),
   VAR_2->interrupt_out_buffer, VAR_6,
   VAR_4->write_int_callback, VAR_2,
   VAR_3->bInterval);

 return 0;
}
