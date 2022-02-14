
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {int lock; TYPE_2__ icount; scalar_t__ sysrq; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_6__ {int (* raw_rx_rdy ) (struct uart_port*) ;unsigned char (* read_char ) (struct uart_port*) ;unsigned short (* get_status ) (struct uart_port*) ;int (* command ) (struct uart_port*,int ) ;} ;
struct TYPE_4__ {struct tty_port port; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 TYPE_3__* VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_port*) ;
 unsigned char FUNC_3 (struct uart_port*) ;
 unsigned short FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*,int ) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct tty_port*) ;
 int FUNC_8 (struct tty_port*,unsigned char,unsigned char) ;
 int FUNC_9 (struct uart_port*) ;
 scalar_t__ FUNC_10 (struct uart_port*,unsigned char) ;

__attribute__((used)) static inline int
FUNC_11(struct uart_port *VAR_11)
{
 struct tty_port *VAR_12 = &VAR_11->state->port;
 unsigned char VAR_13, VAR_14;
 unsigned short VAR_15;


 while (VAR_10->raw_rx_rdy(VAR_11)) {

  VAR_13 = VAR_10->read_char(VAR_11);
  VAR_14 = VAR_7;
  VAR_11->icount.rx++;

  VAR_15 = VAR_10->get_status(VAR_11);

  if (VAR_15 & (VAR_3 |
         VAR_1 |
         VAR_4)) {

   if (VAR_15 & VAR_4) {
    VAR_14 = VAR_5;
    FUNC_9(VAR_11);
    VAR_11->icount.brk++;
   } else if (VAR_15 & VAR_3) {
    VAR_14 = VAR_9;
    VAR_11->icount.parity++;
   }
   else if (VAR_15 & VAR_1) {
    VAR_14 = VAR_6;
    VAR_11->icount.frame++;
   }


   VAR_10->command(VAR_11, VAR_0);

  }
  FUNC_8(VAR_12, VAR_13, VAR_14);
  if (VAR_15 & VAR_2) {





   FUNC_8(VAR_12, 0, VAR_8);
   VAR_11->icount.overrun++;
  }
 }

 FUNC_1(&VAR_11->lock);
 FUNC_7(VAR_12);
 FUNC_0(&VAR_11->lock);

 return VAR_10->raw_rx_rdy(VAR_11);
}
