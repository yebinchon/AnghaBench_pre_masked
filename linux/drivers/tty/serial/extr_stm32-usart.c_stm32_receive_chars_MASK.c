
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int frame; int brk; int parity; int overrun; int rx; } ;
struct uart_port {int read_status_mask; int lock; TYPE_4__ icount; int irq; TYPE_1__* state; } ;
struct tty_port {TYPE_3__* tty; } ;
struct stm32_usart_offsets {scalar_t__ icr; } ;
struct stm32_port {int last_res; TYPE_2__* info; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {struct stm32_usart_offsets ofs; } ;
struct TYPE_5__ {struct tty_port port; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uart_port*,scalar_t__,int) ;
 unsigned long FUNC_6 (struct uart_port*,int*,int *) ;
 scalar_t__ FUNC_7 (struct uart_port*,int*,int *,int) ;
 struct stm32_port* FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct tty_port*) ;
 scalar_t__ FUNC_10 (struct uart_port*) ;
 scalar_t__ FUNC_11 (struct uart_port*,unsigned long) ;
 int FUNC_12 (struct uart_port*,int,int,unsigned long,char) ;

__attribute__((used)) static void FUNC_13(struct uart_port *VAR_13, bool VAR_14)
{
 struct tty_port *VAR_15 = &VAR_13->state->port;
 struct stm32_port *VAR_16 = FUNC_8(VAR_13);
 struct stm32_usart_offsets *VAR_17 = &VAR_16->info->ofs;
 unsigned long VAR_18;
 u32 VAR_19;
 char VAR_20;

 if (FUNC_1(FUNC_0(VAR_13->irq)))
  FUNC_2(VAR_15->tty->dev, 0);

 while (FUNC_7(VAR_13, &VAR_19, &VAR_16->last_res, VAR_14)) {
  VAR_19 |= VAR_8;
  VAR_20 = VAR_2;
  if ((VAR_19 & VAR_9) && VAR_17->icr != VAR_4)
   FUNC_5(VAR_13, VAR_17->icr, VAR_6 |
           VAR_7 | VAR_5);

  VAR_18 = FUNC_6(VAR_13, &VAR_19, &VAR_16->last_res);
  VAR_13->icount.rx++;
  if (VAR_19 & VAR_9) {
   if (VAR_19 & VAR_11) {
    VAR_13->icount.overrun++;
   } else if (VAR_19 & VAR_12) {
    VAR_13->icount.parity++;
   } else if (VAR_19 & VAR_10) {

    if (!VAR_18) {
     VAR_13->icount.brk++;
     if (FUNC_10(VAR_13))
      continue;
    } else {
     VAR_13->icount.frame++;
    }
   }

   VAR_19 &= VAR_13->read_status_mask;

   if (VAR_19 & VAR_12) {
    VAR_20 = VAR_3;
   } else if (VAR_19 & VAR_10) {
    if (!VAR_18)
     VAR_20 = VAR_0;
    else
     VAR_20 = VAR_1;
   }
  }

  if (FUNC_11(VAR_13, VAR_18))
   continue;
  FUNC_12(VAR_13, VAR_19, VAR_11, VAR_18, VAR_20);
 }

 FUNC_4(&VAR_13->lock);
 FUNC_9(VAR_15);
 FUNC_3(&VAR_13->lock);
}
