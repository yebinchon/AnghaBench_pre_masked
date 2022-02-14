
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; int dev; } ;
struct clps711x_port {scalar_t__ tx_enabled; } ;


 struct clps711x_port* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 struct clps711x_port *VAR_1 = FUNC_0(VAR_0->dev);

 if (VAR_1->tx_enabled) {
  FUNC_1(VAR_0->irq);
  VAR_1->tx_enabled = 0;
 }
}
