
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {char x_char; int ier; int func; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sdio_uart_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sdio_uart_port*) ;
 int FUNC_3 (struct sdio_uart_port*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_1, char VAR_2)
{
 struct sdio_uart_port *VAR_3 = VAR_1->driver_data;

 VAR_3->x_char = VAR_2;
 if (VAR_2 && !(VAR_3->ier & VAR_0)) {
  if (FUNC_0(VAR_3) != 0)
   return;
  FUNC_3(VAR_3);
  FUNC_1(VAR_3->func);
  FUNC_2(VAR_3);
 }
}
