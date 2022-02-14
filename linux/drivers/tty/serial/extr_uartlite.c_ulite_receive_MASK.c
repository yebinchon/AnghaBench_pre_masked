
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int frame; int overrun; int parity; int rx; } ;
struct uart_port {int ignore_status_mask; int read_status_mask; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_3__ {struct tty_port port; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct tty_port*,unsigned char,char) ;
 unsigned char FUNC_1 (int ,struct uart_port*) ;

__attribute__((used)) static int FUNC_2(struct uart_port *VAR_9, int VAR_10)
{
 struct tty_port *VAR_11 = &VAR_9->state->port;
 unsigned char VAR_12 = 0;
 char VAR_13 = VAR_1;

 if ((VAR_10 & (VAR_8 | VAR_6
       | VAR_5)) == 0)
  return 0;


 if (VAR_10 & VAR_8) {
  VAR_9->icount.rx++;
  VAR_12 = FUNC_1(VAR_4, VAR_9);

  if (VAR_10 & VAR_7)
   VAR_9->icount.parity++;
 }

 if (VAR_10 & VAR_6)
  VAR_9->icount.overrun++;

 if (VAR_10 & VAR_5)
  VAR_9->icount.frame++;



 if (VAR_10 & VAR_9->ignore_status_mask & VAR_7)
  VAR_10 &= ~VAR_8;

 VAR_10 &= VAR_9->read_status_mask;

 if (VAR_10 & VAR_7)
  VAR_13 = VAR_3;


 VAR_10 &= ~VAR_9->ignore_status_mask;

 if (VAR_10 & VAR_8)
  FUNC_0(VAR_11, VAR_12, VAR_13);

 if (VAR_10 & VAR_5)
  FUNC_0(VAR_11, 0, VAR_0);

 if (VAR_10 & VAR_6)
  FUNC_0(VAR_11, 0, VAR_2);

 return 1;
}
