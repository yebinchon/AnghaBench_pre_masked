
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame; int overrun; int parity; int brk; int rx; } ;
struct uart_port {unsigned short read_status_mask; int lock; TYPE_2__* state; TYPE_1__ icount; } ;
struct altera_uart {struct uart_port port; } ;
struct TYPE_4__ {int port; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 void* FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,unsigned short,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct uart_port*,unsigned char) ;
 int FUNC_7 (struct uart_port*,unsigned short,unsigned short,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_8(struct altera_uart *VAR_12)
{
 struct uart_port *VAR_13 = &VAR_12->port;
 unsigned char VAR_14, VAR_15;
 unsigned short VAR_16;

 while ((VAR_16 = FUNC_0(VAR_13, VAR_5)) &
        VAR_7) {
  VAR_14 = FUNC_0(VAR_13, VAR_0);
  VAR_15 = VAR_10;
  VAR_13->icount.rx++;

  if (VAR_16 & VAR_2) {
   FUNC_1(VAR_13, VAR_16,
        VAR_5);

   if (VAR_16 & VAR_1) {
    VAR_13->icount.brk++;
    if (FUNC_5(VAR_13))
     continue;
   } else if (VAR_16 & VAR_4) {
    VAR_13->icount.parity++;
   } else if (VAR_16 & VAR_6) {
    VAR_13->icount.overrun++;
   } else if (VAR_16 & VAR_3) {
    VAR_13->icount.frame++;
   }

   VAR_16 &= VAR_13->read_status_mask;

   if (VAR_16 & VAR_1)
    VAR_15 = VAR_8;
   else if (VAR_16 & VAR_4)
    VAR_15 = VAR_11;
   else if (VAR_16 & VAR_3)
    VAR_15 = VAR_9;
  }

  if (FUNC_6(VAR_13, VAR_14))
   continue;
  FUNC_7(VAR_13, VAR_16, VAR_6, VAR_14,
     VAR_15);
 }

 FUNC_3(&VAR_13->lock);
 FUNC_4(&VAR_13->state->port);
 FUNC_2(&VAR_13->lock);
}
