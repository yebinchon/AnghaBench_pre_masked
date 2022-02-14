
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int port_number; } ;
struct TYPE_2__ {unsigned int c_cflag; } ;
struct tty_struct {TYPE_1__ termios; } ;
struct ktermios {int dummy; } ;
struct keyspan_port_private {int baud; unsigned int cflag; int flow_control; struct keyspan_device_details* device_details; } ;
struct keyspan_device_details {scalar_t__ (* calculate_baud_rate ) (struct usb_serial_port*,int,int ,int *,int *,int *,int) ;int baudclk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_serial_port*,int ) ;
 scalar_t__ FUNC_1 (struct usb_serial_port*,int,int ,int *,int *,int *,int) ;
 int FUNC_2 (struct tty_struct*,int,int) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct ktermios*) ;
 struct keyspan_port_private* FUNC_5 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_5,
  struct usb_serial_port *VAR_6, struct ktermios *VAR_7)
{
 int VAR_8, VAR_9;
 struct keyspan_port_private *VAR_10;
 const struct keyspan_device_details *VAR_11;
 unsigned int VAR_12;

 VAR_10 = FUNC_5(VAR_6);
 VAR_11 = VAR_10->device_details;
 VAR_12 = VAR_5->termios.c_cflag;
 VAR_9 = VAR_6->port_number;



 VAR_8 = FUNC_3(VAR_5);

 if (VAR_11->calculate_baud_rate(VAR_6, VAR_8, VAR_11->baudclk,
    ((void*)0), ((void*)0), ((void*)0), VAR_9) == VAR_2) {


  VAR_10->baud = VAR_8;
 } else
  VAR_8 = FUNC_4(VAR_7);

 FUNC_2(VAR_5, VAR_8, VAR_8);

 VAR_10->cflag = VAR_12;
 VAR_10->flow_control = (VAR_12 & VAR_1) ? VAR_3 : VAR_4;


 VAR_5->termios.c_cflag &= ~VAR_0;

 FUNC_0(VAR_6, 0);
}
