
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {int index; } ;
struct sdio_func {int dummy; } ;


 struct sdio_uart_port* FUNC_0 (struct sdio_func*) ;
 int FUNC_1 (struct sdio_uart_port*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sdio_func *VAR_1)
{
 struct sdio_uart_port *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_0, VAR_2->index);
 FUNC_1(VAR_2);
}
