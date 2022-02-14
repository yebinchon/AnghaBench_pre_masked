
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct f81232_private {int modem_status; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct f81232_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_1)
{
 u8 VAR_2;
 struct f81232_private *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(&VAR_3->lock);
 VAR_2 = VAR_3->modem_status;
 FUNC_1(&VAR_3->lock);

 if (VAR_2 & VAR_0)
  return 1;
 return 0;
}
