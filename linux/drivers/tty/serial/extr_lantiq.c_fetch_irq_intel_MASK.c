
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; } ;
struct ltq_uart_port {int common_irq; struct uart_port port; } ;
struct device {int of_node; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct ltq_uart_port *VAR_1)
{
 struct uart_port *VAR_2 = &VAR_1->port;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->of_node, 0);
 if (VAR_3 < 0) {
  FUNC_0(VAR_0, "failed to fetch IRQ for serial port\n");
  return VAR_3;
 }
 VAR_1->common_irq = VAR_3;
 VAR_2->irq = VAR_3;

 return 0;
}
