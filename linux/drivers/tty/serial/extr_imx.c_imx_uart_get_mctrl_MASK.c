
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct imx_port {int gpios; } ;


 unsigned int FUNC_0 (struct imx_port*) ;
 int FUNC_1 (int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_0)
{
 struct imx_port *VAR_1 = (struct imx_port *)VAR_0;
 unsigned int VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1->gpios, &VAR_2);

 return VAR_2;
}
