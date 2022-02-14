
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct stm32_port {scalar_t__ rx_ch; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_port*,int) ;
 struct stm32_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct uart_port *VAR_3 = VAR_2;
 struct stm32_port *VAR_4 = FUNC_3(VAR_3);

 FUNC_0(&VAR_3->lock);

 if (VAR_4->rx_ch)
  FUNC_2(VAR_3, 1);

 FUNC_1(&VAR_3->lock);

 return VAR_0;
}
