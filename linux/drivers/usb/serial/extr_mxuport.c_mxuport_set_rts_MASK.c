
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int port_number; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct mxuport_port {int mcr_state; int mutex; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial*,int ,int,int ) ;
 struct mxuport_port* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_3, u8 VAR_4)
{
 struct mxuport_port *VAR_5 = FUNC_3(VAR_3);
 struct usb_serial *VAR_6 = VAR_3->serial;
 int VAR_7;
 u8 VAR_8;

 FUNC_0(&VAR_5->mutex);
 VAR_8 = VAR_5->mcr_state;

 switch (VAR_4) {
 case 130:
  VAR_8 &= ~VAR_2;
  break;
 case 129:
  VAR_8 |= VAR_2;
  break;
 case 128:




  break;
 default:




  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_7 = FUNC_2(VAR_6, VAR_1,
        VAR_4, VAR_3->port_number);
 if (!VAR_7)
  VAR_5->mcr_state = VAR_8;

out:
 FUNC_1(&VAR_5->mutex);

 return VAR_7;
}
