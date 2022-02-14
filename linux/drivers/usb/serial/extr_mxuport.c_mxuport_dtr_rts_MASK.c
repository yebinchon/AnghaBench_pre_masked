
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct mxuport_port {int mcr_state; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial_port*,int) ;
 struct mxuport_port* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_2, int VAR_3)
{
 struct mxuport_port *VAR_4 = FUNC_3(VAR_2);
 u8 VAR_5;
 int VAR_6;

 FUNC_0(&VAR_4->mutex);
 VAR_5 = VAR_4->mcr_state;

 if (VAR_3)
  VAR_5 |= (VAR_1 | VAR_0);
 else
  VAR_5 &= ~(VAR_1 | VAR_0);

 VAR_6 = FUNC_2(VAR_2, VAR_5);
 if (!VAR_6)
  VAR_4->mcr_state = VAR_5;

 FUNC_1(&VAR_4->mutex);
}
