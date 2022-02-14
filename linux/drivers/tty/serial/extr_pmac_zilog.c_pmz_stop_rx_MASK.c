
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_pmac_port {int * curregs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct uart_pmac_port*) ;
 struct uart_pmac_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2)
{
 struct uart_pmac_port *VAR_3 = FUNC_2(VAR_2);

 FUNC_0("pmz: stop_rx()()\n");


 VAR_3->curregs[VAR_0] &= ~VAR_1;
 FUNC_1(VAR_3);

 FUNC_0("pmz: stop_rx() done.\n");
}
