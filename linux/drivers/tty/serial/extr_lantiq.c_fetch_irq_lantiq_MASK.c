
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; } ;
struct resource {int start; } ;
struct ltq_uart_port {int err_irq; int rx_irq; int tx_irq; struct uart_port port; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,struct resource*,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct ltq_uart_port *VAR_2)
{
 struct uart_port *VAR_3 = &VAR_2->port;
 struct resource VAR_4[3];
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1->of_node, VAR_4, 3);
 if (VAR_5 != 3) {
  FUNC_0(VAR_1,
   "failed to get IRQs for serial port\n");
  return -VAR_0;
 }
 VAR_2->tx_irq = VAR_4[0].start;
 VAR_2->rx_irq = VAR_4[1].start;
 VAR_2->err_irq = VAR_4[2].start;
 VAR_3->irq = VAR_4[0].start;

 return 0;
}
