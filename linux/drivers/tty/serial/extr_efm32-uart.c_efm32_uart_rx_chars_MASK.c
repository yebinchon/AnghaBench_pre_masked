
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int frame; int parity; int brk; int rx; } ;
struct uart_port {int read_status_mask; int ignore_status_mask; TYPE_2__* state; TYPE_1__ icount; } ;
struct efm32_uart_port {struct uart_port port; } ;
struct TYPE_4__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct efm32_uart_port*,int ) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*,int) ;

__attribute__((used)) static void FUNC_4(struct efm32_uart_port *VAR_10)
{
 struct uart_port *VAR_11 = &VAR_10->port;

 while (FUNC_0(VAR_10, VAR_8) &
   VAR_9) {
  u32 VAR_12 = FUNC_0(VAR_10, VAR_4);
  int VAR_13 = 0;







  VAR_12 &= ~VAR_0;

  VAR_11->icount.rx++;

  if ((VAR_12 & VAR_5) &&
    !(VAR_12 & VAR_7)) {
   VAR_12 |= VAR_0;
   VAR_11->icount.brk++;
   if (FUNC_2(VAR_11))
    continue;
  } else if (VAR_12 & VAR_6)
   VAR_11->icount.parity++;
  else if (VAR_12 & VAR_5)
   VAR_11->icount.frame++;

  VAR_12 &= VAR_11->read_status_mask;

  if (VAR_12 & VAR_0)
   VAR_13 = VAR_1;
  else if (VAR_12 & VAR_6)
   VAR_13 = VAR_3;
  else if (VAR_12 & VAR_5)
   VAR_13 = VAR_2;
  else if (FUNC_3(VAR_11,
     VAR_12 & VAR_7))
   continue;

  if ((VAR_12 & VAR_11->ignore_status_mask) == 0)
   FUNC_1(&VAR_11->state->port,
     VAR_12 & VAR_7, VAR_13);
 }
}
