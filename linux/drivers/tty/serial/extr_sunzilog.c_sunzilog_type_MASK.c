
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sunzilog_port {int flags; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 struct uart_sunzilog_port* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static const char *FUNC_1(struct uart_port *VAR_1)
{
 struct uart_sunzilog_port *VAR_2 = FUNC_0(VAR_1);

 return (VAR_2->flags & VAR_0) ? "zs (ESCC)" : "zs";
}
