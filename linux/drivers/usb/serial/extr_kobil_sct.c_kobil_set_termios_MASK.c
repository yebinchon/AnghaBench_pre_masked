
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; } ;
struct TYPE_4__ {int c_cflag; } ;
struct tty_struct {TYPE_2__ termios; } ;
struct ktermios {int dummy; } ;
struct kobil_private {scalar_t__ device_type; } ;
typedef int speed_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct tty_struct*,int,int) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (TYPE_2__*,struct ktermios*) ;
 int FUNC_3 (int ,int ,int ,int,unsigned short,int ,int *,int ,int ) ;
 struct kobil_private* FUNC_4 (struct usb_serial_port*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_18,
   struct usb_serial_port *VAR_19, struct ktermios *VAR_20)
{
 struct kobil_private *VAR_21;
 int VAR_22;
 unsigned short VAR_23 = 0;
 int VAR_24 = VAR_18->termios.c_cflag;
 speed_t VAR_25;

 VAR_21 = FUNC_4(VAR_19);
 if (VAR_21->device_type == VAR_4 ||
   VAR_21->device_type == VAR_2) {

  FUNC_2(&VAR_18->termios, VAR_20);
  return;
 }

 VAR_25 = FUNC_1(VAR_18);
 switch (VAR_25) {
 case 1200:
  VAR_23 = VAR_7;
  break;
 default:
  VAR_25 = 9600;

 case 9600:
  VAR_23 = VAR_8;
  break;
 }
 VAR_23 |= (VAR_24 & VAR_1) ? VAR_10 :
       VAR_9;
 if (VAR_24 & VAR_5) {
  if (VAR_24 & VAR_6)
   VAR_23 |= VAR_13;
  else
   VAR_23 |= VAR_11;
 } else
  VAR_23 |= VAR_12;
 VAR_18->termios.c_cflag &= ~VAR_0;
 FUNC_0(VAR_18, VAR_25, VAR_25);

 VAR_22 = FUNC_3(VAR_19->serial->dev,
    FUNC_5(VAR_19->serial->dev, 0),
    VAR_14,
    VAR_17 | VAR_16 | VAR_15,
    VAR_23,
    0,
    ((void*)0),
    0,
    VAR_3
  );
}
