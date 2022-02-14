
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*) ;
 int VAR_1 ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,struct uart_port*) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_2)
{
 if (FUNC_4(VAR_2->irq, VAR_1, 0,
   FUNC_1(VAR_2), VAR_2)) {
  FUNC_3(VAR_2->dev, "cannot allocate irq.\n");
  return -VAR_0;
 }

 FUNC_2(VAR_2);
 FUNC_0(VAR_2);

 return 0;
}
