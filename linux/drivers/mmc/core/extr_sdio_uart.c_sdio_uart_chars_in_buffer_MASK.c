
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {int xmit_fifo; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0)
{
 struct sdio_uart_port *VAR_1 = VAR_0->driver_data;
 return FUNC_0(&VAR_1->xmit_fifo);
}
