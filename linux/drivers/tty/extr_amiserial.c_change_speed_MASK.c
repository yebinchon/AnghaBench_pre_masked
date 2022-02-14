
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int c_cflag; } ;
struct tty_struct {TYPE_1__ termios; } ;
struct tty_port {int flags; } ;
struct serial_state {int baud_base; int custom_divisor; int quot; int timeout; int xmit_fifo_size; int read_status_mask; int ignore_status_mask; int IER; struct tty_port tport; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_4__ {short serper; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 short VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_2__ VAR_22 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_port*,unsigned int) ;
 int FUNC_10 (struct tty_port*,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct tty_struct *VAR_23, struct serial_state *VAR_24,
    struct ktermios *VAR_25)
{
 struct tty_port *VAR_26 = &VAR_24->tport;
 int VAR_27 = 0, VAR_28, VAR_29;
 unsigned VAR_30, VAR_31 = 0;
 int VAR_32;
 unsigned long VAR_33;

 VAR_30 = VAR_23->termios.c_cflag;



 VAR_31 = 3; VAR_32 = 10;
 if (VAR_30 & VAR_8) {
  VAR_31 |= 0x04;
  VAR_32++;
 }
 if (VAR_30 & VAR_10) {
  VAR_31 |= VAR_15;
  VAR_32++;
 }
 if (!(VAR_30 & VAR_11))
  VAR_31 |= VAR_14;






 VAR_29 = FUNC_8(VAR_23);
 if (!VAR_29)
  VAR_29 = 9600;
 VAR_28 = VAR_24->baud_base;
 if (VAR_29 == 38400 && (VAR_26->flags & VAR_2) == VAR_1)
  VAR_27 = VAR_24->custom_divisor;
 else {
  if (VAR_29 == 134)

   VAR_27 = (2*VAR_28 / 269);
  else if (VAR_29)
   VAR_27 = VAR_28 / VAR_29;
 }

 if (!VAR_27 && VAR_25) {

  VAR_23->termios.c_cflag &= ~VAR_3;
  VAR_23->termios.c_cflag |= (VAR_25->c_cflag & VAR_3);
  VAR_29 = FUNC_8(VAR_23);
  if (!VAR_29)
   VAR_29 = 9600;
  if (VAR_29 == 38400 &&
      (VAR_26->flags & VAR_2) == VAR_1)
   VAR_27 = VAR_24->custom_divisor;
  else {
   if (VAR_29 == 134)

    VAR_27 = (2*VAR_28 / 269);
   else if (VAR_29)
    VAR_27 = VAR_28 / VAR_29;
  }
 }

 if (!VAR_27)
  VAR_27 = VAR_28 / 9600;
 VAR_24->quot = VAR_27;
 VAR_24->timeout = ((VAR_24->xmit_fifo_size*VAR_9*VAR_32*VAR_27) / VAR_28);
 VAR_24->timeout += VAR_9/50;


 VAR_24->IER &= ~VAR_13;
 if (VAR_26->flags & VAR_0)
  VAR_24->IER |= VAR_13;
 FUNC_10(VAR_26, VAR_30 & VAR_7);
 if (VAR_30 & VAR_7)
  VAR_24->IER |= VAR_13;
 FUNC_9(VAR_26, ~VAR_30 & VAR_4);
 if (~VAR_30 & VAR_4)
  VAR_24->IER |= VAR_13;
 VAR_24->read_status_mask = VAR_20 | VAR_18;
 if (FUNC_3(VAR_23))
  VAR_24->read_status_mask |= VAR_19 | VAR_21;
 if (FUNC_0(VAR_23) || FUNC_4(VAR_23))
  VAR_24->read_status_mask |= VAR_17;




 VAR_24->ignore_status_mask = 0;
 if (FUNC_2(VAR_23))
  VAR_24->ignore_status_mask |= VAR_21 | VAR_19;
 if (FUNC_1(VAR_23)) {
  VAR_24->ignore_status_mask |= VAR_17;




  if (FUNC_2(VAR_23))
   VAR_24->ignore_status_mask |= VAR_20;
 }



 if ((VAR_30 & VAR_6) == 0)
  VAR_24->ignore_status_mask |= VAR_18;
 FUNC_6(VAR_33);

 {
   short VAR_34;


   VAR_34 = VAR_27 - 1;



 if(VAR_31 & VAR_15)
   VAR_34 |= (VAR_12);

 VAR_22.serper = VAR_34;
 FUNC_7();
 }

 FUNC_5(VAR_33);
}
