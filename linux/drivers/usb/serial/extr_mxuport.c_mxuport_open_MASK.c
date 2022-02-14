
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port_number; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {int dummy; } ;
struct mxuport_port {scalar_t__ msr_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial*,int ,int,int ) ;
 int FUNC_1 (struct tty_struct*,struct usb_serial_port*,int *) ;
 struct mxuport_port* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_2, struct usb_serial_port *VAR_3)
{
 struct mxuport_port *VAR_4 = FUNC_2(VAR_3);
 struct usb_serial *VAR_5 = VAR_3->serial;
 int VAR_6;


 VAR_6 = FUNC_0(VAR_5, VAR_1,
        1, VAR_3->port_number);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0,
        1, VAR_3->port_number);
 if (VAR_6) {
  FUNC_0(VAR_5, VAR_1,
          0, VAR_3->port_number);
  return VAR_6;
 }


 if (VAR_2)
  FUNC_1(VAR_2, VAR_3, ((void*)0));





 VAR_4->msr_state = 0;

 return VAR_6;
}
