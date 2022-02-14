
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct TYPE_5__ {unsigned int overrun; int frame; int parity; int rx; } ;
struct TYPE_6__ {unsigned char ignore_status_mask; unsigned char read_status_mask; int lock; scalar_t__ membase; TYPE_2__ icount; scalar_t__ sysrq; TYPE_1__* state; } ;
struct lpuart_port {TYPE_3__ port; } ;
struct TYPE_4__ {struct tty_port port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_port*,unsigned char,unsigned int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,unsigned char) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct lpuart_port *VAR_14)
{
 unsigned int VAR_15, VAR_16 = 0, VAR_17 = 0;
 struct tty_port *VAR_18 = &VAR_14->port.state->port;
 unsigned long VAR_19;
 unsigned char VAR_20, VAR_21;

 FUNC_1(&VAR_14->port.lock, VAR_19);

 while (!(FUNC_0(VAR_14->port.membase + VAR_7) & VAR_8)) {
  VAR_15 = VAR_1;
  VAR_14->port.icount.rx++;




  VAR_21 = FUNC_0(VAR_14->port.membase + VAR_10);
  VAR_20 = FUNC_0(VAR_14->port.membase + VAR_6);

  if (FUNC_5(&VAR_14->port, (unsigned char)VAR_20))
   continue;

  if (VAR_21 & (VAR_13 | VAR_12 | VAR_11)) {
   if (VAR_21 & VAR_13)
    VAR_14->port.icount.parity++;
   else if (VAR_21 & VAR_11)
    VAR_14->port.icount.frame++;

   if (VAR_21 & VAR_12)
    VAR_17++;

   if (VAR_21 & VAR_14->port.ignore_status_mask) {
    if (++VAR_16 > 100)
     goto out;
    continue;
   }

   VAR_21 &= VAR_14->port.read_status_mask;

   if (VAR_21 & VAR_13)
    VAR_15 = VAR_3;
   else if (VAR_21 & VAR_11)
    VAR_15 = VAR_0;

   if (VAR_21 & VAR_12)
    VAR_15 = VAR_2;




  }

  FUNC_4(VAR_18, VAR_20, VAR_15);
 }

out:
 if (VAR_17) {
  VAR_14->port.icount.overrun += VAR_17;





  FUNC_6(VAR_5, VAR_14->port.membase + VAR_4);
  FUNC_6(VAR_9, VAR_14->port.membase + VAR_7);
 }

 FUNC_2(&VAR_14->port.lock, VAR_19);

 FUNC_3(VAR_18);
}
