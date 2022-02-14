
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct msm_port {int pclk; int clk; } ;


 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2)
{
 struct msm_port *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 0:
  FUNC_2(VAR_3->clk);
  FUNC_2(VAR_3->pclk);
  break;
 case 3:
  FUNC_1(VAR_3->clk);
  FUNC_1(VAR_3->pclk);
  break;
 default:
  FUNC_3("msm_serial: Unknown PM state %d\n", VAR_1);
 }
}
