
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int bulk_in_endpointAddress; struct usb_serial* serial; } ;
struct usb_serial {TYPE_1__* interface; int dev; } ;
struct urb {int dummy; } ;
struct tty_struct {int dummy; } ;
struct sierra_port_private {int num_in_urbs; struct urb** in_urbs; } ;
struct sierra_intf_private {int open_ports; int susp_lock; } ;
struct TYPE_2__ {int needs_remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct urb*) ;
 struct urb* FUNC_1 (struct usb_serial*,int,int,struct usb_serial_port*,int ,int ,int ) ;
 int FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (struct usb_serial_port*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int) ;
 struct sierra_intf_private* FUNC_8 (struct usb_serial*) ;
 struct sierra_port_private* FUNC_9 (struct usb_serial_port*) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(struct tty_struct *VAR_4, struct usb_serial_port *VAR_5)
{
 struct sierra_port_private *VAR_6;
 struct usb_serial *VAR_7 = VAR_5->serial;
 struct sierra_intf_private *VAR_8 = FUNC_8(VAR_7);
 int VAR_9;
 int VAR_10;
 int VAR_11;
 struct urb *VAR_12;

 VAR_6 = FUNC_9(VAR_5);

 VAR_11 = VAR_5->bulk_in_endpointAddress;
 for (VAR_9 = 0; VAR_9 < VAR_6->num_in_urbs; VAR_9++) {
  VAR_12 = FUNC_1(VAR_7, VAR_11, VAR_2, VAR_5,
     VAR_1, VAR_0,
     VAR_3);
  VAR_6->in_urbs[VAR_9] = VAR_12;
 }

 FUNC_7(VAR_7->dev,
   FUNC_10(VAR_7->dev, VAR_11) | VAR_2);

 VAR_10 = FUNC_3(VAR_5, VAR_0);
 if (VAR_10)
  goto err_submit;

 FUNC_4(&VAR_8->susp_lock);
 if (++VAR_8->open_ports == 1)
  VAR_7->interface->needs_remote_wakeup = 1;
 FUNC_5(&VAR_8->susp_lock);
 FUNC_6(VAR_7->interface);

 return 0;

err_submit:
 FUNC_2(VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_6->num_in_urbs; VAR_9++) {
  FUNC_0(VAR_6->in_urbs[VAR_9]);
  VAR_6->in_urbs[VAR_9] = ((void*)0);
 }

 return VAR_10;
}
