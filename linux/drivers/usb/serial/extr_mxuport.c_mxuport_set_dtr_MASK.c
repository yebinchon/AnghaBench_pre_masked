
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port_number; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct mxuport_port {int mutex; int mcr_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial*,int ,int,int ) ;
 struct mxuport_port* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_2, int VAR_3)
{
 struct mxuport_port *VAR_4 = FUNC_3(VAR_2);
 struct usb_serial *VAR_5 = VAR_2->serial;
 int VAR_6;

 FUNC_0(&VAR_4->mutex);

 VAR_6 = FUNC_2(VAR_5, VAR_0,
        !!VAR_3, VAR_2->port_number);
 if (!VAR_6) {
  if (VAR_3)
   VAR_4->mcr_state |= VAR_1;
  else
   VAR_4->mcr_state &= ~VAR_1;
 }

 FUNC_1(&VAR_4->mutex);

 return VAR_6;
}
