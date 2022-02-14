
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx; int parity; int frame; int overrun; } ;
struct uart_port {unsigned int read_status_mask; int lock; TYPE_2__ icount; scalar_t__ membase; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_3__ {struct tty_port port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_port*,unsigned int,char) ;
 int FUNC_5 (struct uart_port*,unsigned int) ;
 int FUNC_6 (struct uart_port*,int ) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_10)
{
 struct tty_port *VAR_11 = &VAR_10->state->port;




 if ((FUNC_6(VAR_10, VAR_9) & VAR_2)) {
  VAR_10->icount.overrun++;
  FUNC_4(VAR_11, 0, VAR_5);
 }


 while (FUNC_6(VAR_10, VAR_8) & 0x1f00) {
  unsigned int VAR_12;
  char VAR_13 = VAR_4;

  VAR_12 = FUNC_0(VAR_10->membase + VAR_7) & 0x3ff;


  VAR_12 &= ~VAR_10->read_status_mask;

  if (VAR_12 & VAR_0) {
   VAR_10->icount.frame++;
   VAR_13 = VAR_3;
  } else if (VAR_12 & VAR_1) {
   VAR_10->icount.parity++;
   VAR_13 = VAR_6;
  }
  VAR_10->icount.rx++;

  if (!FUNC_5(VAR_10, VAR_12))
   FUNC_4(VAR_11, VAR_12, VAR_13);
 }

 FUNC_2(&VAR_10->lock);
 FUNC_3(VAR_11);
 FUNC_1(&VAR_10->lock);
}
