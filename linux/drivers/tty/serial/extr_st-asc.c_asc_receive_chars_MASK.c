
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int overrun; int parity; int frame; int brk; int rx; } ;
struct uart_port {unsigned long read_status_mask; TYPE_3__ icount; int irq; TYPE_1__* state; } ;
struct tty_port {TYPE_2__* tty; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct tty_port port; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 unsigned long FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tty_port*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct uart_port*,unsigned long) ;
 int FUNC_7 (struct uart_port*,unsigned long,unsigned long,unsigned long,char) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_17)
{
 struct tty_port *VAR_18 = &VAR_17->state->port;
 unsigned long VAR_19, VAR_20;
 unsigned long VAR_21 = 0;
 char VAR_22;
 bool VAR_23 = 0;






 VAR_20 = FUNC_0(VAR_17, VAR_0) & VAR_3;
 if (VAR_20 == VAR_1 || VAR_20 == VAR_2)
  VAR_23 = 1;

 if (FUNC_2(FUNC_1(VAR_17->irq)))
  FUNC_3(VAR_18->tty->dev, 0);

 while ((VAR_19 = FUNC_0(VAR_17, VAR_10)) & VAR_12) {
  VAR_21 = FUNC_0(VAR_17, VAR_4) | VAR_7;
  VAR_22 = VAR_15;
  VAR_17->icount.rx++;

  if (VAR_19 & VAR_11 || VAR_21 & VAR_8 ||
      (VAR_21 & VAR_9 && !VAR_23)) {

   if (VAR_21 & VAR_8) {
    if (VAR_21 == (VAR_8 | VAR_7)) {
     VAR_17->icount.brk++;
     if (FUNC_5(VAR_17))
      continue;
     VAR_21 |= VAR_5;
    } else {
     VAR_17->icount.frame++;
    }
   } else if (VAR_21 & VAR_9) {
    VAR_17->icount.parity++;
   }




   if (VAR_19 & VAR_11) {
    VAR_17->icount.overrun++;
    VAR_21 |= VAR_6;
   }

   VAR_21 &= VAR_17->read_status_mask;

   if (VAR_21 & VAR_5)
    VAR_22 = VAR_13;
   else if (VAR_21 & VAR_9)
    VAR_22 = VAR_16;
   else if (VAR_21 & VAR_8)
    VAR_22 = VAR_14;
  }

  if (FUNC_6(VAR_17, VAR_21 & 0xff))
   continue;

  FUNC_7(VAR_17, VAR_21, VAR_6, VAR_21 & 0xff, VAR_22);
 }


 FUNC_4(VAR_18);
}
