
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {TYPE_1__* serial; } ;
struct tty_struct {int termios; } ;
struct ktermios {int c_cflag; } ;
struct ch341_private {unsigned int baud_rate; int lcr; int mcr; int lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;




 int FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (int ,struct ch341_private*,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 unsigned int FUNC_10 (struct tty_struct*) ;
 unsigned int FUNC_11 (struct ktermios*) ;
 int FUNC_12 (int *,struct ktermios*) ;
 int FUNC_13 (int *,struct ktermios*) ;
 struct ch341_private* FUNC_14 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_15(struct tty_struct *VAR_14,
  struct usb_serial_port *VAR_15, struct ktermios *VAR_16)
{
 struct ch341_private *VAR_17 = FUNC_14(VAR_15);
 unsigned VAR_18;
 unsigned long VAR_19;
 u8 VAR_20;
 int VAR_21;


 if (VAR_16 && !FUNC_13(&VAR_14->termios, VAR_16))
  return;

 VAR_18 = FUNC_10(VAR_14);

 VAR_20 = VAR_9 | VAR_10;

 switch (FUNC_2(VAR_14)) {
 case 131:
  VAR_20 |= VAR_4;
  break;
 case 130:
  VAR_20 |= VAR_5;
  break;
 case 129:
  VAR_20 |= VAR_6;
  break;
 case 128:
  VAR_20 |= VAR_7;
  break;
 }

 if (FUNC_4(VAR_14)) {
  VAR_20 |= VAR_8;
  if (FUNC_5(VAR_14) == 0)
   VAR_20 |= VAR_12;
  if (FUNC_1(VAR_14))
   VAR_20 |= VAR_11;
 }

 if (FUNC_3(VAR_14))
  VAR_20 |= VAR_13;

 if (VAR_18) {
  VAR_17->baud_rate = VAR_18;

  VAR_21 = FUNC_6(VAR_15->serial->dev, VAR_17, VAR_20);
  if (VAR_21 < 0 && VAR_16) {
   VAR_17->baud_rate = FUNC_11(VAR_16);
   FUNC_12(&VAR_14->termios, VAR_16);
  } else if (VAR_21 == 0) {
   VAR_17->lcr = VAR_20;
  }
 }

 FUNC_8(&VAR_17->lock, VAR_19);
 if (FUNC_0(VAR_14) == VAR_0)
  VAR_17->mcr &= ~(VAR_2 | VAR_3);
 else if (VAR_16 && (VAR_16->c_cflag & VAR_1) == VAR_0)
  VAR_17->mcr |= (VAR_2 | VAR_3);
 FUNC_9(&VAR_17->lock, VAR_19);

 FUNC_7(VAR_15->serial->dev, VAR_17->mcr);
}
