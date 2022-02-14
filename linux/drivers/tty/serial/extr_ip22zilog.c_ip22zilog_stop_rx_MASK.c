
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int dummy; } ;
struct uart_port {int dummy; } ;
struct uart_ip22zilog_port {int * curregs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct uart_ip22zilog_port* FUNC_0 (struct uart_port*) ;
 struct zilog_channel* FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct uart_ip22zilog_port*) ;
 int FUNC_3 (struct uart_ip22zilog_port*,struct zilog_channel*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2)
{
 struct uart_ip22zilog_port *VAR_3 = FUNC_0(VAR_2);
 struct zilog_channel *VAR_4;

 if (FUNC_2(VAR_3))
  return;

 VAR_4 = FUNC_1(VAR_2);


 VAR_3->curregs[VAR_0] &= ~VAR_1;
 FUNC_3(VAR_3, VAR_4);
}
