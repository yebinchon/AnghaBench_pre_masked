
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct mxs_auart_port {int ms_irq_enabled; scalar_t__* gpio_irq; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct mxs_auart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_4)
{
 struct mxs_auart_port *VAR_5 = FUNC_1(VAR_4);




 if (!VAR_5->ms_irq_enabled)
  return;

 VAR_5->ms_irq_enabled = 0;

 if (VAR_5->gpio_irq[VAR_0] >= 0)
  FUNC_0(VAR_5->gpio_irq[VAR_0]);


 if (VAR_5->gpio_irq[VAR_2] >= 0)
  FUNC_0(VAR_5->gpio_irq[VAR_2]);

 if (VAR_5->gpio_irq[VAR_3] >= 0)
  FUNC_0(VAR_5->gpio_irq[VAR_3]);

 if (VAR_5->gpio_irq[VAR_1] >= 0)
  FUNC_0(VAR_5->gpio_irq[VAR_1]);
}
