
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct mxuport_port {int mutex; int mcr_state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial_port*,int ) ;
 struct mxuport_port* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_4, unsigned int VAR_5,
       unsigned int VAR_6)
{
 struct usb_serial_port *VAR_7 = VAR_4->driver_data;
 struct mxuport_port *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;
 u8 VAR_10;

 FUNC_0(&VAR_8->mutex);
 VAR_10 = VAR_8->mcr_state;

 if (VAR_5 & VAR_1)
  VAR_10 |= VAR_3;

 if (VAR_5 & VAR_0)
  VAR_10 |= VAR_2;

 if (VAR_6 & VAR_1)
  VAR_10 &= ~VAR_3;

 if (VAR_6 & VAR_0)
  VAR_10 &= ~VAR_2;

 VAR_9 = FUNC_2(VAR_7, VAR_10);
 if (!VAR_9)
  VAR_8->mcr_state = VAR_10;

 FUNC_1(&VAR_8->mutex);

 return VAR_9;
}
