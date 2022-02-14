
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct sirfsoc_uart_port {int cts_gpio; scalar_t__ ms_enabled; struct uart_port port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct uart_port*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct sirfsoc_uart_port *VAR_3 = (struct sirfsoc_uart_port *)VAR_2;
 struct uart_port *VAR_4 = &VAR_3->port;
 FUNC_2(&VAR_4->lock);
 if (FUNC_1(VAR_3->cts_gpio) && VAR_3->ms_enabled)
  FUNC_4(VAR_4,
    !FUNC_0(VAR_3->cts_gpio));
 FUNC_3(&VAR_4->lock);
 return VAR_0;
}
