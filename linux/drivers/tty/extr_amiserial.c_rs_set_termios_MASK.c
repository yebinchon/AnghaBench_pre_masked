
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int c_cflag; } ;
struct tty_struct {scalar_t__ hw_stopped; TYPE_1__ termios; struct serial_state* driver_data; } ;
struct serial_state {int MCR; int open_wait; } ;
struct ktermios {unsigned int c_cflag; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct tty_struct*,struct serial_state*,struct ktermios*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_5, struct ktermios *VAR_6)
{
 struct serial_state *VAR_7 = VAR_5->driver_data;
 unsigned long VAR_8;
 unsigned int VAR_9 = VAR_5->termios.c_cflag;

 FUNC_2(VAR_5, VAR_7, VAR_6);


 if ((VAR_6->c_cflag & VAR_0) && !(VAR_9 & VAR_0)) {
  VAR_7->MCR &= ~(VAR_3|VAR_4);
  FUNC_4(VAR_8);
  FUNC_6(VAR_7->MCR);
  FUNC_3(VAR_8);
 }


 if (!(VAR_6->c_cflag & VAR_0) && (VAR_9 & VAR_0)) {
  VAR_7->MCR |= VAR_3;
  if (!FUNC_1(VAR_5) || !FUNC_7(VAR_5))
   VAR_7->MCR |= VAR_4;
  FUNC_4(VAR_8);
  FUNC_6(VAR_7->MCR);
  FUNC_3(VAR_8);
 }


 if ((VAR_6->c_cflag & VAR_2) && !FUNC_1(VAR_5)) {
  VAR_5->hw_stopped = 0;
  FUNC_5(VAR_5);
 }
}
