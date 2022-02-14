
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dsr; int rng; } ;
struct uart_port {int dev; TYPE_3__* state; TYPE_1__ icount; } ;
struct atmel_uart_port {unsigned int irq_status_prev; } ;
struct TYPE_5__ {int delta_msr_wait; } ;
struct TYPE_6__ {TYPE_2__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 struct atmel_uart_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int) ;
 int FUNC_3 (struct uart_port*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct uart_port *VAR_10, unsigned int VAR_11,
      unsigned int VAR_12)
{
 struct atmel_uart_port *VAR_13 = FUNC_1(VAR_10);
 unsigned int VAR_14;

 if (VAR_11 & (VAR_9 | VAR_5 | VAR_3
    | VAR_1)) {
  VAR_14 = VAR_12 ^ VAR_13->irq_status_prev;
  VAR_13->irq_status_prev = VAR_12;

  if (VAR_14 & (VAR_8 | VAR_4
     | VAR_2 | VAR_0)) {

   if (VAR_14 & VAR_8)
    VAR_10->icount.rng++;
   if (VAR_14 & VAR_4)
    VAR_10->icount.dsr++;
   if (VAR_14 & VAR_2)
    FUNC_3(VAR_10, !(VAR_12 & VAR_2));
   if (VAR_14 & VAR_0)
    FUNC_2(VAR_10, !(VAR_12 & VAR_0));

   FUNC_4(&VAR_10->state->port.delta_msr_wait);
  }
 }

 if (VAR_11 & (VAR_7 | VAR_6))
  FUNC_0(VAR_10->dev, "ISO7816 ERROR (0x%08x)\n", VAR_11);
}
