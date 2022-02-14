
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; scalar_t__ irq; scalar_t__ x_char; TYPE_1__* state; } ;
struct uart_8250_port {unsigned int lsr_saved_flags; int ier; TYPE_2__ port; int timer; } ;
struct timer_list {int dummy; } ;
struct TYPE_3__ {int xmit; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 struct uart_8250_port* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct uart_8250_port*) ;
 unsigned int FUNC_3 (struct uart_8250_port*,int ) ;
 int FUNC_4 (struct uart_8250_port*,int ,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_11 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 struct uart_8250_port* VAR_12 ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_13)
{
 struct uart_8250_port *VAR_14 = FUNC_0(VAR_14, VAR_13, VAR_11);
 unsigned int VAR_15, VAR_16 = 0, VAR_17;
 unsigned long VAR_18;

 FUNC_5(&VAR_14->port.lock, VAR_18);





 if (VAR_14->port.irq) {
  VAR_16 = FUNC_3(VAR_14, VAR_2);
  FUNC_4(VAR_14, VAR_2, 0);
 }

 VAR_15 = FUNC_3(VAR_14, VAR_4);







 VAR_17 = FUNC_3(VAR_14, VAR_8);
 VAR_14->lsr_saved_flags |= VAR_17 & VAR_1;
 if ((VAR_15 & VAR_6) && (VAR_14->ier & VAR_3) &&
     (!FUNC_7(&VAR_14->port.state->xmit) || VAR_14->port.x_char) &&
     (VAR_17 & VAR_9)) {
  VAR_15 &= ~(VAR_5 | VAR_6);
  VAR_15 |= VAR_7;
 }

 if (!(VAR_15 & VAR_6))
  FUNC_2(VAR_14);

 if (VAR_14->port.irq)
  FUNC_4(VAR_14, VAR_2, VAR_16);

 FUNC_6(&VAR_14->port.lock, VAR_18);


 FUNC_1(&VAR_14->timer,
  VAR_10 + FUNC_8(&VAR_14->port) + VAR_0 / 5);
}
