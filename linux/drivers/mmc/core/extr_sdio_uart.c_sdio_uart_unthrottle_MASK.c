
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {int func; scalar_t__ x_char; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct sdio_uart_port*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sdio_uart_port*) ;
 int FUNC_6 (struct sdio_uart_port*,int ) ;
 int FUNC_7 (struct sdio_uart_port*) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_1)
{
 struct sdio_uart_port *VAR_2 = VAR_1->driver_data;

 if (!FUNC_1(VAR_1) && !FUNC_0(VAR_1))
  return;

 if (FUNC_3(VAR_2) != 0)
  return;

 if (FUNC_1(VAR_1)) {
  if (VAR_2->x_char) {
   VAR_2->x_char = 0;
  } else {
   VAR_2->x_char = FUNC_2(VAR_1);
   FUNC_7(VAR_2);
  }
 }

 if (FUNC_0(VAR_1))
  FUNC_6(VAR_2, VAR_0);

 FUNC_4(VAR_2->func);
 FUNC_5(VAR_2);
}
