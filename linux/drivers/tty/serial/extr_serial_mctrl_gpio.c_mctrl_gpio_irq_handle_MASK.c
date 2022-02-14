
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dsr; int rng; } ;
struct uart_port {int lock; TYPE_3__* state; TYPE_1__ icount; } ;
struct mctrl_gpios {int mctrl_prev; struct uart_port* port; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {int delta_msr_wait; } ;
struct TYPE_6__ {TYPE_2__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mctrl_gpios*,int*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uart_port*,int) ;
 int FUNC_4 (struct uart_port*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct mctrl_gpios *VAR_8 = VAR_7;
 struct uart_port *VAR_9 = VAR_8->port;
 u32 VAR_10 = VAR_8->mctrl_prev;
 u32 VAR_11;
 unsigned long VAR_12;

 FUNC_0(VAR_8, &VAR_10);

 FUNC_1(&VAR_9->lock, VAR_12);

 VAR_11 = VAR_10 ^ VAR_8->mctrl_prev;
 VAR_8->mctrl_prev = VAR_10;

 if (VAR_11 & VAR_1 && VAR_9->state != ((void*)0)) {
  if ((VAR_11 & VAR_10) & VAR_5)
   VAR_9->icount.rng++;

  if ((VAR_11 & VAR_10) & VAR_4)
   VAR_9->icount.dsr++;

  if (VAR_11 & VAR_2)
   FUNC_4(VAR_9, VAR_10 & VAR_2);

  if (VAR_11 & VAR_3)
   FUNC_3(VAR_9, VAR_10 & VAR_3);

  FUNC_5(&VAR_9->state->port.delta_msr_wait);
 }

 FUNC_2(&VAR_9->lock, VAR_12);

 return VAR_0;
}
