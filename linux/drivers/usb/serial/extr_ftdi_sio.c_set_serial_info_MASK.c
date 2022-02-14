
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int flags; scalar_t__ custom_divisor; scalar_t__ baud_base; } ;
struct ftdi_private {int flags; scalar_t__ custom_divisor; scalar_t__ baud_base; int cfg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty_struct*,struct usb_serial_port*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ftdi_private* FUNC_5 (struct usb_serial_port*) ;
 int FUNC_6 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_7,
 struct serial_struct *VAR_8)
{
 struct usb_serial_port *VAR_9 = VAR_7->driver_data;
 struct ftdi_private *VAR_10 = FUNC_5(VAR_9);
 struct ftdi_private VAR_11;

 FUNC_3(&VAR_10->cfg_lock);
 VAR_11 = *VAR_10;



 if (!FUNC_0(VAR_4)) {
  if ((VAR_8->flags ^ VAR_10->flags) & ~VAR_3) {
   FUNC_4(&VAR_10->cfg_lock);
   return -VAR_6;
  }
  VAR_10->flags = ((VAR_10->flags & ~VAR_3) |
          (VAR_8->flags & VAR_3));
  VAR_10->custom_divisor = VAR_8->custom_divisor;
  goto check_and_exit;
 }

 if (VAR_8->baud_base != VAR_10->baud_base) {
  FUNC_4(&VAR_10->cfg_lock);
  return -VAR_5;
 }



 VAR_10->flags = ((VAR_10->flags & ~VAR_0) |
     (VAR_8->flags & VAR_0));
 VAR_10->custom_divisor = VAR_8->custom_divisor;

check_and_exit:
 FUNC_6(VAR_9);

 if ((VAR_10->flags ^ VAR_11.flags) & VAR_2 ||
   ((VAR_10->flags & VAR_2) == VAR_1 &&
    VAR_10->custom_divisor != VAR_11.custom_divisor)) {


  if (VAR_10->flags & VAR_2)
   FUNC_2(&VAR_9->dev, "use of SPD flags is deprecated\n");

  FUNC_1(VAR_7, VAR_9);
 }
 FUNC_4(&VAR_10->cfg_lock);
 return 0;
}
