
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int rx; int overrun; int frame; int parity; } ;
struct uart_port {int lock; TYPE_2__* state; TYPE_1__ icount; } ;
struct TYPE_4__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,char) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_10)
{
 u32 VAR_11, VAR_12;

 VAR_11 = FUNC_0(VAR_10, VAR_5);
 while ((VAR_11 & VAR_1)) {
  char VAR_13 = VAR_7;

  if (VAR_11 & VAR_4) {
   VAR_10->icount.parity++;
   VAR_13 = VAR_9;
  }

  if (VAR_11 & VAR_2) {
   VAR_10->icount.frame++;
   VAR_13 = VAR_6;
  }

  if (VAR_11 & VAR_3) {
   VAR_10->icount.overrun++;
   VAR_13 = VAR_8;
  }

  VAR_12 = FUNC_0(VAR_10, VAR_0);
  VAR_12 &= 0xff;

  VAR_10->icount.rx++;
  FUNC_4(&VAR_10->state->port, VAR_12, VAR_13);

  VAR_11 = FUNC_0(VAR_10, VAR_5);
 }

 FUNC_2(&VAR_10->lock);
 FUNC_3(&VAR_10->state->port);
 FUNC_1(&VAR_10->lock);
}
