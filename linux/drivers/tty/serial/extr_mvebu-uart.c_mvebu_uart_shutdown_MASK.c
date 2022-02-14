
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; scalar_t__ membase; } ;
struct mvebu_uart {int * irq; } ;


 scalar_t__ FUNC_0 (struct uart_port*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ,struct uart_port*) ;
 struct mvebu_uart* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_3)
{
 struct mvebu_uart *VAR_4 = FUNC_2(VAR_3);

 FUNC_3(0, VAR_3->membase + FUNC_0(VAR_3));

 if (!VAR_4->irq[VAR_2]) {
  FUNC_1(VAR_3->dev, VAR_4->irq[VAR_0], VAR_3);
 } else {
  FUNC_1(VAR_3->dev, VAR_4->irq[VAR_1], VAR_3);
  FUNC_1(VAR_3->dev, VAR_4->irq[VAR_2], VAR_3);
 }
}
