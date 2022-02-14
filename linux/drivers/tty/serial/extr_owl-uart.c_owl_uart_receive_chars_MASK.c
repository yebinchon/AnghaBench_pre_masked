
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int rx; int frame; int brk; int overrun; } ;
struct uart_port {int read_status_mask; int ignore_status_mask; int lock; TYPE_2__* state; TYPE_1__ icount; } ;
struct TYPE_4__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,char) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_9)
{
 u32 VAR_10, VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_0);
 VAR_11 &= ~VAR_1;
 FUNC_1(VAR_9, VAR_11, VAR_0);

 VAR_10 = FUNC_0(VAR_9, VAR_3);
 while (!(VAR_10 & VAR_4)) {
  char VAR_12 = VAR_7;

  if (VAR_10 & VAR_5)
   VAR_9->icount.overrun++;

  if (VAR_10 & VAR_6) {

   VAR_9->icount.brk++;
   VAR_9->icount.frame++;

   VAR_10 &= VAR_9->read_status_mask;
   if (VAR_10 & VAR_6)
    VAR_12 = VAR_8;
  } else
   VAR_9->icount.rx++;

  VAR_11 = FUNC_0(VAR_9, VAR_2);
  VAR_11 &= 0xff;

  if ((VAR_10 & VAR_9->ignore_status_mask) == 0)
   FUNC_5(&VAR_9->state->port, VAR_11, VAR_12);

  VAR_10 = FUNC_0(VAR_9, VAR_3);
 }

 FUNC_3(&VAR_9->lock);
 FUNC_4(&VAR_9->state->port);
 FUNC_2(&VAR_9->lock);
}
