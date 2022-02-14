
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_port*) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_2, int VAR_3)
{
 if (VAR_3 & VAR_1 && !FUNC_0(VAR_2))
  VAR_2->type = VAR_0;
}
