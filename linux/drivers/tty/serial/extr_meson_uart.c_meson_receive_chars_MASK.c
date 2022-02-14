
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int brk; int frame; int overrun; int rx; } ;
struct uart_port {int read_status_mask; int ignore_status_mask; int lock; TYPE_2__ icount; scalar_t__ membase; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_port*,int,char) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct uart_port*,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_14)
{
 struct tty_port *VAR_15 = &VAR_14->state->port;
 char VAR_16;
 u32 VAR_17, VAR_18, VAR_19, VAR_20;

 do {
  VAR_16 = VAR_11;
  VAR_14->icount.rx++;
  VAR_17 = VAR_18 = FUNC_0(VAR_14->membase + VAR_7);

  if (VAR_18 & VAR_2) {
   if (VAR_18 & VAR_8)
    VAR_14->icount.overrun++;
   else if (VAR_18 & VAR_3)
    VAR_14->icount.frame++;
   else if (VAR_18 & VAR_4)
    VAR_14->icount.frame++;

   VAR_20 = FUNC_0(VAR_14->membase + VAR_1);
   VAR_20 |= VAR_0;
   FUNC_7(VAR_20, VAR_14->membase + VAR_1);


   VAR_20 &= ~VAR_0;
   FUNC_7(VAR_20, VAR_14->membase + VAR_1);

   VAR_18 &= VAR_14->read_status_mask;
   if (VAR_18 & VAR_3)
    VAR_16 = VAR_10;
   else if (VAR_18 & VAR_4)
    VAR_16 = VAR_13;
  }

  VAR_19 = FUNC_0(VAR_14->membase + VAR_5);
  VAR_19 &= 0xff;

  if ((VAR_17 & VAR_3) && (VAR_19 == 0)) {
   VAR_14->icount.brk++;
   VAR_16 = VAR_9;
   if (FUNC_5(VAR_14))
    continue;
  }

  if (FUNC_6(VAR_14, VAR_19))
   continue;

  if ((VAR_18 & VAR_14->ignore_status_mask) == 0)
   FUNC_4(VAR_15, VAR_19, VAR_16);

  if (VAR_18 & VAR_8)
   FUNC_4(VAR_15, 0, VAR_12);

 } while (!(FUNC_0(VAR_14->membase + VAR_7) & VAR_6));

 FUNC_2(&VAR_14->lock);
 FUNC_3(VAR_15);
 FUNC_1(&VAR_14->lock);
}
