
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct TYPE_6__ {int overrun; int frame; int parity; int rx; } ;
struct TYPE_7__ {unsigned long ignore_status_mask; unsigned long read_status_mask; int lock; scalar_t__ sysrq; TYPE_2__ icount; TYPE_1__* state; } ;
struct lpuart_port {TYPE_3__ port; } ;
struct TYPE_5__ {struct tty_port port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_port*,unsigned long,unsigned int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct lpuart_port *VAR_11)
{
 unsigned int VAR_12, VAR_13 = 0;
 struct tty_port *VAR_14 = &VAR_11->port.state->port;
 unsigned long VAR_15;
 unsigned long VAR_16, VAR_17;

 FUNC_1(&VAR_11->port.lock, VAR_15);

 while (!(FUNC_0(&VAR_11->port, VAR_5) & VAR_6)) {
  VAR_12 = VAR_1;
  VAR_11->port.icount.rx++;




  VAR_17 = FUNC_0(&VAR_11->port, VAR_7);
  VAR_16 = FUNC_0(&VAR_11->port, VAR_4);
  VAR_16 &= 0x3ff;

  if (FUNC_5(&VAR_11->port, (unsigned char)VAR_16))
   continue;

  if (VAR_17 & (VAR_10 | VAR_9 | VAR_8)) {
   if (VAR_17 & VAR_10)
    VAR_11->port.icount.parity++;
   else if (VAR_17 & VAR_8)
    VAR_11->port.icount.frame++;

   if (VAR_17 & VAR_9)
    VAR_11->port.icount.overrun++;

   if (VAR_17 & VAR_11->port.ignore_status_mask) {
    if (++VAR_13 > 100)
     goto out;
    continue;
   }

   VAR_17 &= VAR_11->port.read_status_mask;

   if (VAR_17 & VAR_10)
    VAR_12 = VAR_3;
   else if (VAR_17 & VAR_8)
    VAR_12 = VAR_0;

   if (VAR_17 & VAR_9)
    VAR_12 = VAR_2;




  }

  FUNC_4(VAR_14, VAR_16, VAR_12);
 }

out:
 FUNC_2(&VAR_11->port.lock, VAR_15);

 FUNC_3(VAR_14);
}
