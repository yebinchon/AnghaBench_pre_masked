
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int overrun; int frame; int parity; int rx; } ;
struct uart_port {int read_status_mask; int ignore_status_mask; TYPE_2__* state; int lock; TYPE_1__ icount; scalar_t__ membase; } ;
struct TYPE_4__ {int port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct uart_port*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uart_port*,int,int,int,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_9)
{
 unsigned long VAR_10;

 FUNC_2(&VAR_9->lock, VAR_10);

 while (1) {
  u8 VAR_11, VAR_12;
  unsigned int VAR_13;

  if (FUNC_0(VAR_9))
   break;

  VAR_12 = FUNC_1(VAR_9->membase + VAR_4);
  VAR_11 = FUNC_1(VAR_9->membase + VAR_5);

  VAR_9->icount.rx++;
  VAR_13 = VAR_1;

  if (VAR_11) {
   if (VAR_11 & VAR_8)
    VAR_9->icount.parity++;
   else if (VAR_11 & VAR_6)
    VAR_9->icount.frame++;
   else if (VAR_11 & VAR_7)
    VAR_9->icount.overrun++;

   VAR_11 &= VAR_9->read_status_mask;

   if (VAR_11 & VAR_8)
    VAR_13 = VAR_3;
   else if (VAR_11 & VAR_6)
    VAR_13 = VAR_0;
   else if (VAR_11 & VAR_7)
    VAR_13 = VAR_2;
  }

  if (VAR_11 & VAR_9->ignore_status_mask)
   continue;

  FUNC_5(VAR_9, VAR_11, VAR_7, VAR_12,
     VAR_13);
 }

 FUNC_3(&VAR_9->lock, VAR_10);

 FUNC_4(&VAR_9->state->port);
}
