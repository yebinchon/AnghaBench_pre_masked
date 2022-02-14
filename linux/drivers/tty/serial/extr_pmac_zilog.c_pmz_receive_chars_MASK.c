
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_7__ {unsigned char read_status_mask; int ignore_status_mask; TYPE_2__ icount; int lock; scalar_t__ sysrq; TYPE_1__* state; } ;
struct uart_pmac_port {unsigned char parity_mask; int flags; TYPE_3__ port; } ;
struct tty_port {int dummy; } ;
struct TYPE_5__ {struct tty_port port; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct uart_pmac_port*,int ) ;
 unsigned char FUNC_4 (struct uart_pmac_port*) ;
 unsigned char FUNC_5 (struct uart_pmac_port*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tty_port*,unsigned char,unsigned char) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,unsigned char) ;
 int FUNC_11 (struct uart_pmac_port*,int ,int ) ;
 int FUNC_12 (struct uart_pmac_port*) ;

__attribute__((used)) static bool FUNC_13(struct uart_pmac_port *VAR_16)
{
 struct tty_port *VAR_17;
 unsigned char VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22 = 0;


 if (VAR_16->port.state == ((void*)0)) {
  FUNC_0(1);
  (void)FUNC_4(VAR_16);
  return 0;
 }
 VAR_17 = &VAR_16->port.state->port;

 while (1) {
  VAR_20 = 0;

  VAR_19 = FUNC_5(VAR_16, VAR_7);
  VAR_18 = FUNC_4(VAR_16);

  if (VAR_19 & (VAR_4 | VAR_9 | VAR_1)) {
   FUNC_11(VAR_16, VAR_6, VAR_2);
   FUNC_12(VAR_16);
  }

  VAR_18 &= VAR_16->parity_mask;
  if (VAR_18 == 0 && VAR_16->flags & VAR_5) {
   VAR_16->flags &= ~VAR_5;
  }
  if (VAR_20)
   goto next_char;

  VAR_21 = VAR_12;
  VAR_16->port.icount.rx++;

  if (VAR_19 & (VAR_4 | VAR_9 | VAR_1 | VAR_0)) {
   if (VAR_19 & VAR_0) {
    FUNC_1("pmz: got break !\n");
    VAR_19 &= ~(VAR_4 | VAR_1);
    VAR_16->port.icount.brk++;
    if (FUNC_9(&VAR_16->port))
     goto next_char;
   }
   else if (VAR_19 & VAR_4)
    VAR_16->port.icount.parity++;
   else if (VAR_19 & VAR_1)
    VAR_16->port.icount.frame++;
   if (VAR_19 & VAR_9)
    VAR_16->port.icount.overrun++;
   VAR_19 &= VAR_16->port.read_status_mask;
   if (VAR_19 & VAR_0)
    VAR_21 = VAR_10;
   else if (VAR_19 & VAR_4)
    VAR_21 = VAR_14;
   else if (VAR_19 & VAR_1)
    VAR_21 = VAR_11;
  }

  if (VAR_16->port.ignore_status_mask == 0xff ||
      (VAR_19 & VAR_16->port.ignore_status_mask) == 0) {
   FUNC_8(VAR_17, VAR_18, VAR_21);
  }
  if (VAR_19 & VAR_9)
   FUNC_8(VAR_17, 0, VAR_13);
 next_char:







  if ((++VAR_22) > 1000)
   goto flood;
  VAR_18 = FUNC_5(VAR_16, VAR_6);
  if (!(VAR_18 & VAR_8))
   break;
 }

 return 1;
 flood:
 FUNC_3(VAR_16, 0);
 FUNC_2("pmz: rx irq flood !\n");
 return 1;
}
