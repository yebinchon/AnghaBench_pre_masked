
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int uartclk; scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_3, unsigned long VAR_4)
{
 u32 VAR_5;

 while (!FUNC_1(VAR_3))
  FUNC_0();

 if (VAR_3->uartclk == 24000000) {
  VAR_5 = ((VAR_3->uartclk / 3) / VAR_4) - 1;
  VAR_5 |= VAR_1;
 } else {
  VAR_5 = ((VAR_3->uartclk * 10 / (VAR_4 * 4) + 5) / 10) - 1;
 }
 VAR_5 |= VAR_0;
 FUNC_2(VAR_5, VAR_3->membase + VAR_2);
}
