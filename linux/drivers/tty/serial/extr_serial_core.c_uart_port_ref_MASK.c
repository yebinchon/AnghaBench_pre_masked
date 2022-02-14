
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_state {struct uart_port* uart_port; int refcount; } ;
struct uart_port {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int,int ) ;

__attribute__((used)) static inline struct uart_port *FUNC_1(struct uart_state *VAR_0)
{
 if (FUNC_0(&VAR_0->refcount, 1, 0))
  return VAR_0->uart_port;
 return ((void*)0);
}
