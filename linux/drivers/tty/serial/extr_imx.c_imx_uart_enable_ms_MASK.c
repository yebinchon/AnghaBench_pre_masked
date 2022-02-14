
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct imx_port {int gpios; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_1)
{
 struct imx_port *VAR_2 = (struct imx_port *)VAR_1;

 FUNC_1(&VAR_2->timer, VAR_0);

 FUNC_0(VAR_2->gpios);
}
