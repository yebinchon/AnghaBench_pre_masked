
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct uart_port*) ;
 int ** VAR_2 ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_3)
{
 int VAR_4 = VAR_3->line;

 FUNC_0(VAR_2[VAR_4][VAR_0], VAR_3);
 FUNC_0(VAR_2[VAR_4][VAR_1], VAR_3);
}
