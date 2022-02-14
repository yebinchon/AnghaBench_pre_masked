
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct msm_port {int pclk; int clk; } ;


 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct msm_port *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->clk);
 FUNC_1(VAR_1->pclk);
 FUNC_2(VAR_0);
}
