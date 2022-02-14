
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct uart_state {struct uart_port* uart_port; TYPE_1__ port; } ;
struct uart_port {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline struct uart_port *FUNC_1(struct uart_state *VAR_0)
{
 FUNC_0(&VAR_0->port.mutex);
 return VAR_0->uart_port;
}
