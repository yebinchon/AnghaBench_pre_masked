
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct uart_state {TYPE_2__ port; } ;
struct uart_port {int flags; } ;
struct TYPE_3__ {unsigned int c_cflag; scalar_t__* c_cc; scalar_t__ c_ospeed; scalar_t__ c_ispeed; unsigned int c_iflag; } ;
struct tty_struct {TYPE_1__ termios; struct uart_state* driver_data; } ;
struct ktermios {scalar_t__* c_cc; unsigned int c_cflag; scalar_t__ c_ospeed; scalar_t__ c_ispeed; unsigned int c_iflag; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*,struct uart_state*,struct ktermios*) ;
 int FUNC_4 (struct uart_port*,unsigned int) ;
 struct uart_port* FUNC_5 (struct uart_state*) ;
 int FUNC_6 (struct uart_port*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_15,
      struct ktermios *VAR_16)
{
 struct uart_state *VAR_17 = VAR_15->driver_data;
 struct uart_port *VAR_18;
 unsigned int VAR_19 = VAR_15->termios.c_cflag;
 unsigned int VAR_20 = VAR_3|VAR_0|VAR_4|VAR_9|VAR_5;
 bool VAR_21 = 0;

 FUNC_0(&VAR_17->port.mutex);
 VAR_18 = FUNC_5(VAR_17);
 if (!VAR_18)
  goto out;





 if (VAR_18->flags & VAR_12) {
  VAR_20 |= VAR_6|VAR_8|VAR_7;
  VAR_21 =
     VAR_15->termios.c_cc[VAR_13] != VAR_16->c_cc[VAR_13] ||
     VAR_15->termios.c_cc[VAR_14] != VAR_16->c_cc[VAR_14];
 }







 if ((VAR_19 ^ VAR_16->c_cflag) == 0 &&
     VAR_15->termios.c_ospeed == VAR_16->c_ospeed &&
     VAR_15->termios.c_ispeed == VAR_16->c_ispeed &&
     ((VAR_15->termios.c_iflag ^ VAR_16->c_iflag) & VAR_20) == 0 &&
     !VAR_21) {
  goto out;
 }

 FUNC_3(VAR_15, VAR_17, VAR_16);

 VAR_19 = VAR_15->termios.c_cflag;


 if ((VAR_16->c_cflag & VAR_1) && !(VAR_19 & VAR_1))
  FUNC_4(VAR_18, VAR_11 | VAR_10);

 else if (!(VAR_16->c_cflag & VAR_1) && (VAR_19 & VAR_1)) {
  unsigned int VAR_22 = VAR_10;
  if (!(VAR_19 & VAR_2) || !FUNC_2(VAR_15))
   VAR_22 |= VAR_11;
  FUNC_6(VAR_18, VAR_22);
 }
out:
 FUNC_1(&VAR_17->port.mutex);
}
