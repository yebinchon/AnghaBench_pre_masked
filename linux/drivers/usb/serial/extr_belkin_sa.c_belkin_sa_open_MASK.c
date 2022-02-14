
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; int dev; } ;
struct tty_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tty_struct*,struct usb_serial_port*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_1,
     struct usb_serial_port *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2->interrupt_in_urb, VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "usb_submit_urb(read int) failed\n");
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_2->interrupt_in_urb);

 return VAR_3;
}
