
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {int dummy; } ;


 int FUNC_0 (struct sdio_uart_port*) ;
 int FUNC_1 (struct sdio_uart_port*) ;
 int FUNC_2 (struct sdio_uart_port*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2)
{
 struct sdio_uart_port *VAR_3 = VAR_0->driver_data;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4) {
  FUNC_2(VAR_3, VAR_1, VAR_2);
  FUNC_1(VAR_3);
 }

 return VAR_4;
}
