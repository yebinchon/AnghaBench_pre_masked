
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int ignore_status_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct uart_port *VAR_4)
{

 VAR_4->ignore_status_mask = VAR_3 | VAR_2
  | VAR_0 | VAR_1;
}
