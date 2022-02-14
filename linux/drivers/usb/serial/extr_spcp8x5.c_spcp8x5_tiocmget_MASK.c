
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct spcp8x5_private {unsigned int line_control; int lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int FUNC_0 (struct usb_serial_port*,int*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct spcp8x5_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_12)
{
 struct usb_serial_port *VAR_13 = VAR_12->driver_data;
 struct spcp8x5_private *VAR_14 = FUNC_3(VAR_13);
 unsigned long VAR_15;
 unsigned int VAR_16;
 u8 VAR_17;
 unsigned int VAR_18;

 VAR_18 = FUNC_0(VAR_13, &VAR_17);
 if (VAR_18)
  return VAR_18;

 FUNC_1(&VAR_14->lock, VAR_15);
 VAR_16 = VAR_14->line_control;
 FUNC_2(&VAR_14->lock, VAR_15);

 VAR_18 = ((VAR_16 & VAR_0) ? VAR_9 : 0)
    | ((VAR_16 & VAR_1) ? VAR_11 : 0)
    | ((VAR_17 & VAR_2) ? VAR_7 : 0)
    | ((VAR_17 & VAR_4) ? VAR_8 : 0)
    | ((VAR_17 & VAR_5) ? VAR_10 : 0)
    | ((VAR_17 & VAR_3) ? VAR_6 : 0);

 return VAR_18;
}
