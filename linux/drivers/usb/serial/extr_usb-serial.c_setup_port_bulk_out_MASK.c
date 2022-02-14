
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int bulk_out_size; int * bulk_out_buffers; int bulk_out_buffer; int * write_urbs; int write_urb; int write_urbs_free; int bulk_out_endpointAddress; int write_fifo; TYPE_1__* serial; } ;
struct usb_serial_driver {int bulk_out_size; int write_bulk_callback; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {struct usb_device* dev; struct usb_serial_driver* type; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct usb_endpoint_descriptor*) ;
 int FUNC_6 (int ,struct usb_device*,int ,int ,int,int ,struct usb_serial_port*) ;
 int FUNC_7 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_serial_port *VAR_3,
     struct usb_endpoint_descriptor *VAR_4)
{
 struct usb_serial_driver *VAR_5 = VAR_3->serial->type;
 struct usb_device *VAR_6 = VAR_3->serial->dev;
 int VAR_7;
 int VAR_8;

 if (FUNC_1(&VAR_3->write_fifo, VAR_2, VAR_1))
  return -VAR_0;
 if (VAR_5->bulk_out_size)
  VAR_7 = VAR_5->bulk_out_size;
 else
  VAR_7 = FUNC_5(VAR_4);
 VAR_3->bulk_out_size = VAR_7;
 VAR_3->bulk_out_endpointAddress = VAR_4->bEndpointAddress;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3->write_urbs); ++VAR_8) {
  FUNC_3(VAR_8, &VAR_3->write_urbs_free);
  VAR_3->write_urbs[VAR_8] = FUNC_4(0, VAR_1);
  if (!VAR_3->write_urbs[VAR_8])
   return -VAR_0;
  VAR_3->bulk_out_buffers[VAR_8] = FUNC_2(VAR_7, VAR_1);
  if (!VAR_3->bulk_out_buffers[VAR_8])
   return -VAR_0;
  FUNC_6(VAR_3->write_urbs[VAR_8], VAR_6,
    FUNC_7(VAR_6, VAR_4->bEndpointAddress),
    VAR_3->bulk_out_buffers[VAR_8], VAR_7,
    VAR_5->write_bulk_callback, VAR_3);
 }

 VAR_3->write_urb = VAR_3->write_urbs[0];
 VAR_3->bulk_out_buffer = VAR_3->bulk_out_buffers[0];

 return 0;
}
