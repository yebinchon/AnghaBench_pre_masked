
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {int irq; } ;
struct mps2_uart_port {int flags; int tx_irq; int rx_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct mps2_uart_port*) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int,int ) ;
 struct mps2_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_4)
{
 struct mps2_uart_port *VAR_5 = FUNC_3(VAR_4);
 u8 VAR_6 = FUNC_1(VAR_4, VAR_1);

 VAR_6 &= ~(VAR_2 | VAR_3);

 FUNC_2(VAR_4, VAR_6, VAR_1);

 if (!(VAR_5->flags & VAR_0)) {
  FUNC_0(VAR_5->rx_irq, VAR_5);
  FUNC_0(VAR_5->tx_irq, VAR_5);
 }

 FUNC_0(VAR_4->irq, VAR_5);
}
