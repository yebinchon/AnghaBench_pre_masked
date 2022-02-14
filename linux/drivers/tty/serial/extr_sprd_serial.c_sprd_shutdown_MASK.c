
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct uart_port*) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2)
{
 FUNC_2(VAR_2);
 FUNC_1(VAR_2, VAR_1, 0);
 FUNC_1(VAR_2, VAR_0, ~0);
 FUNC_0(VAR_2->dev, VAR_2->irq, VAR_2);
}
