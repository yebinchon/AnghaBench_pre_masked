
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int * membase; } ;
struct men_z135_port {int mem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct men_z135_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct men_z135_port *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_0->membase);
 VAR_0->membase = ((void*)0);

 FUNC_1(VAR_1->mem);
}
