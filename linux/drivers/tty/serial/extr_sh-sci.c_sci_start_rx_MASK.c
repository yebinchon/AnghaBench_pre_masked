
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 unsigned short FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_4)
{
 unsigned short VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_2) | FUNC_0(VAR_4);

 if (VAR_4->type == VAR_0 || VAR_4->type == VAR_1)
  VAR_5 &= ~VAR_3;

 FUNC_2(VAR_4, VAR_2, VAR_5);
}
