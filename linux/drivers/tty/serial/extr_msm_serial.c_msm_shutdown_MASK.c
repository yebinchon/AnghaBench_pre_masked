
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; } ;
struct msm_port {int clk; scalar_t__ is_uartdm; scalar_t__ imr; } ;


 int VAR_0 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct uart_port*) ;
 int FUNC_3 (struct msm_port*) ;
 int FUNC_4 (struct uart_port*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_1)
{
 struct msm_port *VAR_2 = FUNC_0(VAR_1);

 VAR_2->imr = 0;
 FUNC_4(VAR_1, 0, VAR_0);

 if (VAR_2->is_uartdm)
  FUNC_3(VAR_2);

 FUNC_1(VAR_2->clk);

 FUNC_2(VAR_1->irq, VAR_1);
}
