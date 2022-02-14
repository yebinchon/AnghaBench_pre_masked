
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ private_data; } ;
struct mvebu_uart {int dummy; } ;



__attribute__((used)) static struct mvebu_uart *FUNC_0(struct uart_port *VAR_0)
{
 return (struct mvebu_uart *)VAR_0->private_data;
}
