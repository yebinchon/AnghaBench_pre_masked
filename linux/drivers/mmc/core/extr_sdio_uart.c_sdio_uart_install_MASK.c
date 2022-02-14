
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; struct sdio_uart_port* driver_data; } ;
struct tty_driver {int dummy; } ;
struct sdio_uart_port {int dummy; } ;


 struct sdio_uart_port* FUNC_0 (int) ;
 int FUNC_1 (struct sdio_uart_port*) ;
 int FUNC_2 (struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_3(struct tty_driver *VAR_0, struct tty_struct *VAR_1)
{
 int VAR_2 = VAR_1->index;
 struct sdio_uart_port *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = FUNC_2(VAR_0, VAR_1);

 if (VAR_4 == 0)

  VAR_1->driver_data = VAR_3;
 else
  FUNC_1(VAR_3);
 return VAR_4;
}
