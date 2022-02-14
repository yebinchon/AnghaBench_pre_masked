
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* get_ipcr ) (struct uart_port*) ;scalar_t__ (* tx_rdy ) (struct uart_port*) ;int (* tx_clr_irq ) (struct uart_port*) ;scalar_t__ (* rx_rdy ) (struct uart_port*) ;int (* rx_clr_irq ) (struct uart_port*) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int FUNC_1 (struct uart_port*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*,int) ;
 int FUNC_8 (struct uart_port*,int) ;

__attribute__((used)) static irqreturn_t
FUNC_9(struct uart_port *VAR_7)
{
 unsigned long VAR_8 = VAR_1;
 unsigned int VAR_9;
 u8 VAR_10;


 do {

  VAR_9 = 0;

  VAR_6->rx_clr_irq(VAR_7);
  if (VAR_6->rx_rdy(VAR_7))
   VAR_9 |= FUNC_0(VAR_7);

  VAR_6->tx_clr_irq(VAR_7);
  if (VAR_6->tx_rdy(VAR_7))
   VAR_9 |= FUNC_1(VAR_7);

  VAR_10 = VAR_6->get_ipcr(VAR_7);
  if (VAR_10 & VAR_5)
   FUNC_8(VAR_7, !(VAR_10 & VAR_3));

  if (VAR_10 & VAR_4)
   FUNC_7(VAR_7, !(VAR_10 & VAR_2));


  if (!(--VAR_8))
   VAR_9 = 0;

 } while (VAR_9);

 return VAR_0;
}
