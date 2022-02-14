
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dsr; int rng; } ;
struct uart_port {TYPE_3__* state; TYPE_1__ icount; } ;
struct uart_8250_port {unsigned int msr_saved_flags; int ier; struct uart_port port; } ;
struct TYPE_5__ {int delta_msr_wait; } ;
struct TYPE_6__ {TYPE_2__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (struct uart_8250_port*,int ) ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (int *) ;

unsigned int FUNC_4(struct uart_8250_port *VAR_9)
{
 struct uart_port *VAR_10 = &VAR_9->port;
 unsigned int VAR_11 = FUNC_0(VAR_9, VAR_1);

 VAR_11 |= VAR_9->msr_saved_flags;
 VAR_9->msr_saved_flags = 0;
 if (VAR_11 & VAR_2 && VAR_9->ier & VAR_0 &&
     VAR_10->state != ((void*)0)) {
  if (VAR_11 & VAR_8)
   VAR_10->icount.rng++;
  if (VAR_11 & VAR_7)
   VAR_10->icount.dsr++;
  if (VAR_11 & VAR_6)
   FUNC_2(VAR_10, VAR_11 & VAR_4);
  if (VAR_11 & VAR_5)
   FUNC_1(VAR_10, VAR_11 & VAR_3);

  FUNC_3(&VAR_10->state->port.delta_msr_wait);
 }

 return VAR_11;
}
