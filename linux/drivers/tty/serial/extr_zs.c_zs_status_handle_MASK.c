
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct zs_scc {int zlock; } ;
struct TYPE_4__ {int rng; int dsr; } ;
struct uart_port {TYPE_3__* state; TYPE_1__ icount; } ;
struct zs_port {int* regs; int brk; unsigned int mctrl; int tty_break; struct zs_scc* scc; struct uart_port port; } ;
struct TYPE_5__ {int delta_msr_wait; } ;
struct TYPE_6__ {TYPE_2__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct zs_port*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,unsigned int) ;
 int FUNC_5 (struct uart_port*,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct zs_port*,int ,int ) ;
 unsigned int FUNC_8 (struct zs_port*) ;

__attribute__((used)) static void FUNC_9(struct zs_port *VAR_10, struct zs_port *VAR_11)
{
 struct uart_port *VAR_12 = &VAR_10->port;
 struct zs_scc *VAR_13 = VAR_10->scc;
 unsigned int VAR_14;
 u8 VAR_15, VAR_16;

 FUNC_1(&VAR_13->zlock);


 VAR_15 = FUNC_0(VAR_10, VAR_2);

 if (VAR_10->regs[15] & VAR_0) {
  VAR_16 = VAR_15 & VAR_1;
  if (VAR_16 && !VAR_10->brk) {
   FUNC_2(&VAR_13->zlock);
   if (FUNC_3(VAR_12))
    VAR_10->tty_break = VAR_5;
   else
    VAR_10->tty_break = VAR_4;
   FUNC_1(&VAR_13->zlock);
  }
  VAR_10->brk = VAR_16;
 }

 if (VAR_10 != VAR_11) {
  VAR_14 = FUNC_8(VAR_10);
  FUNC_2(&VAR_13->zlock);

  if (VAR_14 & VAR_7)
   FUNC_4(VAR_12,
            VAR_10->mctrl & VAR_7);
  if (VAR_14 & VAR_6)
   FUNC_5(VAR_12,
            VAR_10->mctrl & VAR_6);
  if (VAR_14 & VAR_9)
   VAR_12->icount.dsr++;
  if (VAR_14 & VAR_8)
   VAR_12->icount.rng++;

  if (VAR_14)
   FUNC_6(&VAR_12->state->port.delta_msr_wait);

  FUNC_1(&VAR_13->zlock);
 }


 FUNC_7(VAR_10, VAR_2, VAR_3);

 FUNC_2(&VAR_13->zlock);
}
