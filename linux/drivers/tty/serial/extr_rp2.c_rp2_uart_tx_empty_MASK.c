
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct rp2_uart_port {TYPE_1__ port; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 struct rp2_uart_port* FUNC_0 (struct uart_port*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_4(struct uart_port *VAR_2)
{
 struct rp2_uart_port *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4, VAR_5;






 FUNC_2(&VAR_3->port.lock, VAR_5);
 VAR_4 = FUNC_1(VAR_3->base + VAR_0);
 FUNC_3(&VAR_3->port.lock, VAR_5);

 return VAR_4 ? 0 : VAR_1;
}
