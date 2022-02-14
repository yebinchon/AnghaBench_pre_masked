
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct uart_8250_port {int ier; TYPE_1__* dma; } ;
struct TYPE_2__ {scalar_t__ tx_err; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ FUNC_0 (struct uart_8250_port*,unsigned int) ;
 int FUNC_1 (struct uart_8250_port*) ;
 unsigned char FUNC_2 (struct uart_8250_port*,unsigned char) ;
 int FUNC_3 (struct uart_8250_port*) ;
 unsigned char FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct uart_port*,unsigned long) ;
 struct uart_8250_port* FUNC_7 (struct uart_port*) ;

int FUNC_8(struct uart_port *VAR_6, unsigned int VAR_7)
{
 unsigned char VAR_8;
 unsigned long VAR_9;
 struct uart_8250_port *VAR_10 = FUNC_7(VAR_6);

 if (VAR_7 & VAR_1)
  return 0;

 FUNC_5(&VAR_6->lock, VAR_9);

 VAR_8 = FUNC_4(VAR_6, VAR_2);

 if (VAR_8 & (VAR_4 | VAR_3)) {
  if (!VAR_10->dma || FUNC_0(VAR_10, VAR_7))
   VAR_8 = FUNC_2(VAR_10, VAR_8);
 }
 FUNC_1(VAR_10);
 if ((!VAR_10->dma || VAR_10->dma->tx_err) && (VAR_8 & VAR_5) &&
  (VAR_10->ier & VAR_0))
  FUNC_3(VAR_10);

 FUNC_6(VAR_6, VAR_9);
 return 1;
}
