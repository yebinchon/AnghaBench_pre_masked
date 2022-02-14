
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {unsigned int (* serial_in ) (struct uart_port*,int ) ;TYPE_1__* ops; } ;
struct TYPE_5__ {unsigned char (* serial_in ) (TYPE_2__*,int ) ;int lock; } ;
struct uart_8250_port {unsigned char lsr_saved_flags; int ier; scalar_t__ overrun_backoff_time_ms; TYPE_2__ port; int overrun_backoff; } ;
struct TYPE_4__ {int (* stop_rx ) (struct uart_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uart_8250_port*) ;
 unsigned char FUNC_4 (struct uart_8250_port*,unsigned char) ;
 int FUNC_5 (struct uart_8250_port*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 unsigned int FUNC_8 (struct uart_port*,int ) ;
 unsigned int FUNC_9 (struct uart_port*,int ) ;
 unsigned char FUNC_10 (TYPE_2__*,int ) ;
 unsigned int FUNC_11 (struct uart_port*,int ) ;
 int FUNC_12 (struct uart_port*) ;
 int FUNC_13 (TYPE_2__*,unsigned long) ;
 scalar_t__ FUNC_14 (unsigned char) ;
 struct uart_8250_port* FUNC_15 (struct uart_port*) ;

int FUNC_16(struct uart_port *VAR_11)
{
 unsigned char VAR_12, VAR_13;
 unsigned long VAR_14;
 unsigned int VAR_15;
 struct uart_8250_port *VAR_16 = FUNC_15(VAR_11);

 FUNC_6(&VAR_16->port.lock, VAR_14);

 VAR_15 = VAR_11->serial_in(VAR_11, VAR_3);
 if (VAR_15 & VAR_4) {
  FUNC_7(&VAR_16->port.lock, VAR_14);
  return 0;
 }


 if (FUNC_14(VAR_16->lsr_saved_flags & VAR_6)) {
  VAR_16->lsr_saved_flags &= ~VAR_6;
  VAR_11->serial_in(VAR_11, VAR_10);
  FUNC_7(&VAR_16->port.lock, VAR_14);
  return 1;
 }

 VAR_12 = VAR_13 = VAR_16->port.serial_in(&VAR_16->port, VAR_5);


 if ((VAR_12 & (VAR_7 | VAR_6)) &&
     (VAR_16->ier & (VAR_2 | VAR_1))) {
  VAR_12 = FUNC_4(VAR_16, VAR_12);
 }


 if ((VAR_13 & VAR_8) && (VAR_16->overrun_backoff_time_ms > 0)) {
  unsigned long VAR_17;

  VAR_16->ier = VAR_11->serial_in(VAR_11, VAR_0);
  if (VAR_16->ier & (VAR_2 | VAR_1)) {
   VAR_11->ops->stop_rx(VAR_11);
  } else {



   FUNC_0(&VAR_16->overrun_backoff);
  }

  VAR_17 = FUNC_1(VAR_16->overrun_backoff_time_ms);
  FUNC_2(&VAR_16->overrun_backoff, VAR_17);
 }

 FUNC_3(VAR_16);

 if (VAR_12 & VAR_9)
  FUNC_5(VAR_16);

 VAR_16->lsr_saved_flags = VAR_13;
 FUNC_13(&VAR_16->port, VAR_14);
 return 1;
}
