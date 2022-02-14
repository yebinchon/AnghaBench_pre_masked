
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int drain_delay; } ;
struct usb_serial_port {TYPE_1__ port; int serial; } ;
struct usb_device_id {int driver_info; } ;
struct spcp8x5_private {int quirks; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spcp8x5_private* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 struct usb_device_id* FUNC_2 (int ) ;
 int FUNC_3 (struct usb_serial_port*,struct spcp8x5_private*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_2)
{
 const struct usb_device_id *VAR_3 = FUNC_2(VAR_2->serial);
 struct spcp8x5_private *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->lock);
 VAR_4->quirks = VAR_3->driver_info;

 FUNC_3(VAR_2, VAR_4);

 VAR_2->port.drain_delay = 256;

 return 0;
}
