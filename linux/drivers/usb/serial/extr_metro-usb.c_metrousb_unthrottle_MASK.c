
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; } ;
struct tty_struct {int dev; struct usb_serial_port* driver_data; } ;
struct metrousb_private {int lock; scalar_t__ throttled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct metrousb_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->driver_data;
 struct metrousb_private *VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4 = 0;
 int VAR_5 = 0;


 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_3->throttled = 0;
 FUNC_2(&VAR_3->lock, VAR_4);


 VAR_5 = FUNC_4(VAR_2->interrupt_in_urb, VAR_0);
 if (VAR_5)
  FUNC_0(VAR_1->dev,
   "failed submitting interrupt in urb error code=%d\n",
   VAR_5);
}
