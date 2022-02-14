
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct urb {int status; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct keyspan_port_private {int out_flip; struct urb** out_urbs; struct keyspan_device_details* device_details; } ;
struct keyspan_device_details {scalar_t__ msg_format; int outdat_endp_flip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct keyspan_port_private* FUNC_0 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_2->driver_data;
 struct keyspan_port_private *VAR_4;
 const struct keyspan_device_details *VAR_5;
 int VAR_6;
 int VAR_7;
 struct urb *VAR_8;

 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = VAR_4->device_details;


 if (VAR_5->msg_format == VAR_1)
  VAR_7 = 64;
 else
  VAR_7 = 63;

 VAR_6 = VAR_4->out_flip;


 VAR_8 = VAR_4->out_urbs[VAR_6];
 if (VAR_8 != ((void*)0)) {
  if (VAR_8->status != -VAR_0)
   return VAR_7;
  VAR_6 = (VAR_6 + 1) & VAR_5->outdat_endp_flip;
  VAR_8 = VAR_4->out_urbs[VAR_6];
  if (VAR_8 != ((void*)0)) {
   if (VAR_8->status != -VAR_0)
    return VAR_7;
  }
 }
 return 0;
}
