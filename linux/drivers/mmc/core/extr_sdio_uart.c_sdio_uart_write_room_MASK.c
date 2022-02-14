
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {int xmit_fifo; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1)
{
 struct sdio_uart_port *VAR_2 = VAR_1->driver_data;
 return VAR_0 - FUNC_0(&VAR_2->xmit_fifo);
}
