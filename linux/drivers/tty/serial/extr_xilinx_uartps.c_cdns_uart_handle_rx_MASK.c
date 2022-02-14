
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {int read_status_mask; unsigned int ignore_status_mask; int lock; TYPE_2__* state; TYPE_1__ icount; scalar_t__ membase; struct cdns_uart* private_data; } ;
struct cdns_uart {int quirks; } ;
struct TYPE_4__ {int port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int,char) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct uart_port*,unsigned int) ;

__attribute__((used)) static void FUNC_7(void *VAR_17, unsigned int VAR_18)
{
 struct uart_port *VAR_19 = (struct uart_port *)VAR_17;
 struct cdns_uart *VAR_20 = VAR_19->private_data;
 unsigned int VAR_21;
 unsigned int VAR_22 = 0;
 unsigned int VAR_23;
 unsigned int VAR_24 = 0;
 char VAR_25 = VAR_14;
 bool VAR_26;

 VAR_26 = VAR_20->quirks & VAR_9;

 while ((FUNC_0(VAR_19->membase + VAR_10) &
  VAR_11) != VAR_11) {
  if (VAR_26)
   VAR_22 = FUNC_0(VAR_19->membase + VAR_5);
  VAR_21 = FUNC_0(VAR_19->membase + VAR_0);
  VAR_19->icount.rx++;






  if (!VAR_26 && (VAR_18 & VAR_2)) {
   if (!VAR_21) {
    VAR_19->read_status_mask |= VAR_1;
    VAR_24 = 1;
    continue;
   }
  }
  if (VAR_26 && (VAR_22 & VAR_6)) {
   VAR_19->icount.brk++;
   VAR_25 = VAR_12;
   if (FUNC_5(VAR_19))
    continue;
  }

  VAR_18 &= VAR_19->read_status_mask;
  VAR_18 &= ~VAR_19->ignore_status_mask;
  VAR_23 = VAR_19->read_status_mask;
  VAR_23 &= ~VAR_19->ignore_status_mask;

  if (VAR_21 &&
      (VAR_19->read_status_mask & VAR_1)) {
   VAR_19->read_status_mask &= ~VAR_1;
   VAR_19->icount.brk++;
   if (FUNC_5(VAR_19))
    continue;
  }

  if (FUNC_6(VAR_19, VAR_21))
   continue;

  if (VAR_26) {
   if ((VAR_22 & VAR_8)
       && (VAR_23 & VAR_4)) {
    VAR_19->icount.parity++;
    VAR_25 = VAR_16;
   }
   if ((VAR_22 & VAR_7)
       && (VAR_23 & VAR_4)) {
    VAR_19->icount.frame++;
    VAR_25 = VAR_13;
   }
  } else {
   if (VAR_18 & VAR_4) {
    VAR_19->icount.parity++;
    VAR_25 = VAR_16;
   }
   if ((VAR_18 & VAR_2) &&
       !VAR_24) {
    VAR_19->icount.frame++;
    VAR_25 = VAR_13;
   }
  }
  if (VAR_18 & VAR_3) {
   VAR_19->icount.overrun++;
   FUNC_4(&VAR_19->state->port, 0,
          VAR_15);
  }
  FUNC_4(&VAR_19->state->port, VAR_21, VAR_25);
  VAR_18 = 0;
 }
 FUNC_2(&VAR_19->lock);
 FUNC_3(&VAR_19->state->port);
 FUNC_1(&VAR_19->lock);
}
