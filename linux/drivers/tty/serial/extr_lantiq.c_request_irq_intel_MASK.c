
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct ltq_uart_port {int common_irq; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,char*,struct uart_port*) ;
 struct ltq_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_1)
{
 struct ltq_uart_port *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->common_irq, VAR_0, 0,
        "asc_irq", VAR_1);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "failed to request asc_irq\n");

 return VAR_3;
}
