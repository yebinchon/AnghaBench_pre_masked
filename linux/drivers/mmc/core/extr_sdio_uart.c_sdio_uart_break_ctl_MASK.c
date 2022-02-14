
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {int lcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdio_uart_port*,int ,int ) ;
 int FUNC_1 (struct sdio_uart_port*) ;
 int FUNC_2 (struct sdio_uart_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_2, int VAR_3)
{
 struct sdio_uart_port *VAR_4 = VAR_2->driver_data;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 != 0)
  return VAR_5;

 if (VAR_3 == -1)
  VAR_4->lcr |= VAR_1;
 else
  VAR_4->lcr &= ~VAR_1;
 FUNC_0(VAR_4, VAR_0, VAR_4->lcr);

 FUNC_2(VAR_4);
 return 0;
}
