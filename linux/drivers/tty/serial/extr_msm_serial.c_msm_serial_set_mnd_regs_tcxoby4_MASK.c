
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_port*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_4)
{
 FUNC_0(VAR_4, 0x18, VAR_2);
 FUNC_0(VAR_4, 0xF6, VAR_3);
 FUNC_0(VAR_4, 0x0F, VAR_0);
 FUNC_0(VAR_4, 0x0A, VAR_1);
 VAR_4->uartclk = 1843200;
}
