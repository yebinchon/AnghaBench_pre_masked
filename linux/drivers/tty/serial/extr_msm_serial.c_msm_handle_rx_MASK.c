
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx; int frame; int brk; int overrun; } ;
struct uart_port {unsigned int read_status_mask; int lock; TYPE_2__ icount; TYPE_1__* state; } ;
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
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_port*) ;
 int FUNC_5 (struct tty_port*,unsigned int,char) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_12)
{
 struct tty_port *VAR_13 = &VAR_12->state->port;
 unsigned int VAR_14;





 if ((FUNC_0(VAR_12, VAR_7) & VAR_8)) {
  VAR_12->icount.overrun++;
  FUNC_5(VAR_13, 0, VAR_3);
  FUNC_1(VAR_12, VAR_5, VAR_4);
 }


 while ((VAR_14 = FUNC_0(VAR_12, VAR_7)) & VAR_11) {
  unsigned int VAR_15;
  char VAR_16 = VAR_2;
  int VAR_17;

  VAR_15 = FUNC_0(VAR_12, VAR_6);

  if (VAR_14 & VAR_10) {
   VAR_12->icount.brk++;
   if (FUNC_6(VAR_12))
    continue;
  } else if (VAR_14 & VAR_9) {
   VAR_12->icount.frame++;
  } else {
   VAR_12->icount.rx++;
  }


  VAR_14 &= VAR_12->read_status_mask;

  if (VAR_14 & VAR_10)
   VAR_16 = VAR_0;
  else if (VAR_14 & VAR_9)
   VAR_16 = VAR_1;

  FUNC_3(&VAR_12->lock);
  VAR_17 = FUNC_7(VAR_12, VAR_15);
  FUNC_2(&VAR_12->lock);
  if (!VAR_17)
   FUNC_5(VAR_13, VAR_15, VAR_16);
 }

 FUNC_3(&VAR_12->lock);
 FUNC_4(VAR_13);
 FUNC_2(&VAR_12->lock);
}
