
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; } ;
struct msm_port {scalar_t__ is_uartdm; } ;


 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct msm_port *VAR_1 = FUNC_0(VAR_0);





 if (VAR_1->is_uartdm)
  return;

 if (VAR_0->uartclk == 19200000)
  FUNC_1(VAR_0);
 else if (VAR_0->uartclk == 4800000)
  FUNC_2(VAR_0);
}
