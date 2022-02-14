
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int flags; int iobase; int lock; int mctrl; int irq; } ;
struct uart_8250_port {TYPE_1__* ops; scalar_t__ dma; scalar_t__ ier; } ;
struct TYPE_2__ {int (* release_irq ) (struct uart_8250_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_8250_port*) ;
 int FUNC_5 (struct uart_8250_port*) ;
 int FUNC_6 (struct uart_port*,int ) ;
 int FUNC_7 (struct uart_port*,int ) ;
 int FUNC_8 (struct uart_port*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct uart_8250_port*) ;
 int FUNC_12 (int ) ;
 struct uart_8250_port* FUNC_13 (struct uart_port*) ;

void FUNC_14(struct uart_port *VAR_7)
{
 struct uart_8250_port *VAR_8 = FUNC_13(VAR_7);
 unsigned long VAR_9;

 FUNC_4(VAR_8);



 FUNC_9(&VAR_7->lock, VAR_9);
 VAR_8->ier = 0;
 FUNC_8(VAR_7, VAR_2, 0);
 FUNC_10(&VAR_7->lock, VAR_9);

 FUNC_12(VAR_7->irq);

 if (VAR_8->dma)
  FUNC_3(VAR_8);

 FUNC_9(&VAR_7->lock, VAR_9);
 if (VAR_7->flags & VAR_6) {

  FUNC_1((VAR_7->iobase & 0xfe0) | 0x1f);
  VAR_7->mctrl |= VAR_0;
 } else
  VAR_7->mctrl &= ~VAR_1;

 FUNC_6(VAR_7, VAR_7->mctrl);
 FUNC_10(&VAR_7->lock, VAR_9);




 FUNC_8(VAR_7, VAR_3,
   FUNC_7(VAR_7, VAR_3) & ~VAR_4);
 FUNC_2(VAR_8);
 FUNC_7(VAR_7, VAR_5);
 FUNC_5(VAR_8);

 VAR_8->ops->release_irq(VAR_8);
}
