
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zs_scc {int zlock; } ;
struct uart_icount {int overrun; int parity; int frame; int brk; int rx; } ;
struct uart_port {unsigned int read_status_mask; TYPE_1__* state; struct uart_icount icount; } ;
struct zs_port {unsigned int tty_break; struct zs_scc* scc; struct uart_port port; } ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int FUNC_0 (struct zs_port*) ;
 unsigned int FUNC_1 (struct zs_port*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct uart_port*,unsigned int) ;
 int FUNC_6 (struct uart_port*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int FUNC_8 (struct zs_port*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct zs_port *VAR_13)
{
 struct uart_port *VAR_14 = &VAR_13->port;
 struct zs_scc *VAR_15 = VAR_13->scc;
 struct uart_icount *VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;

 for (VAR_21 = 16; VAR_21; VAR_21--) {
  FUNC_2(&VAR_15->zlock);
  VAR_17 = FUNC_1(VAR_13, VAR_3) & VAR_6;
  FUNC_3(&VAR_15->zlock);
  if (!VAR_17)
   break;

  FUNC_2(&VAR_15->zlock);
  VAR_18 = FUNC_1(VAR_13, VAR_4) & (VAR_7 | VAR_1 | VAR_2);
  VAR_19 = FUNC_0(VAR_13);
  FUNC_3(&VAR_15->zlock);

  VAR_20 = VAR_11;

  VAR_16 = &VAR_14->icount;
  VAR_16->rx++;


  if (!VAR_19)
   VAR_18 |= VAR_13->tty_break;
  if (FUNC_7(VAR_18 &
        (VAR_7 | VAR_1 | VAR_2 | VAR_8 | VAR_5))) {
   VAR_13->tty_break = 0;


   if (VAR_18 & (VAR_7 | VAR_1 | VAR_2)) {
    FUNC_2(&VAR_15->zlock);
    FUNC_8(VAR_13, VAR_3, VAR_0);
    FUNC_3(&VAR_15->zlock);
   }

   if (VAR_18 & (VAR_8 | VAR_5)) {
    VAR_16->brk++;

    if (VAR_18 & VAR_8)
     continue;
   } else if (VAR_18 & VAR_1)
    VAR_16->frame++;
   else if (VAR_18 & VAR_2)
    VAR_16->parity++;
   if (VAR_18 & VAR_7)
    VAR_16->overrun++;

   VAR_18 &= VAR_14->read_status_mask;
   if (VAR_18 & VAR_5)
    VAR_20 = VAR_9;
   else if (VAR_18 & VAR_1)
    VAR_20 = VAR_10;
   else if (VAR_18 & VAR_2)
    VAR_20 = VAR_12;
  }

  if (FUNC_5(VAR_14, VAR_19))
   continue;

  FUNC_6(VAR_14, VAR_18, VAR_7, VAR_19, VAR_20);
 }

 FUNC_4(&VAR_14->state->port);
}
