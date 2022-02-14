
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {scalar_t__ bulk_in_size; int flags; } ;
struct tty_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct usb_serial_port*,int ) ;

int FUNC_2(struct tty_struct *VAR_2, struct usb_serial_port *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(VAR_1, &VAR_3->flags);

 if (VAR_3->bulk_in_size)
  VAR_4 = FUNC_1(VAR_3, VAR_0);

 return VAR_4;
}
