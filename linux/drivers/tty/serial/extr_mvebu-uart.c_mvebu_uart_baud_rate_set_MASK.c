
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct uart_port {scalar_t__ membase; int uartclk; } ;
struct mvebu_uart {int clk; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_3 (scalar_t__) ;
 struct mvebu_uart* FUNC_4 (struct uart_port*) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_5, unsigned int VAR_6)
{
 struct mvebu_uart *VAR_7 = FUNC_4(VAR_5);
 unsigned int VAR_8, VAR_9;
 u32 VAR_10, VAR_11;

 if (FUNC_1(VAR_7->clk))
  return -FUNC_2(VAR_7->clk);
 VAR_9 = VAR_1;
 VAR_8 = FUNC_0(VAR_5->uartclk, VAR_6 * VAR_9);

 VAR_10 = FUNC_3(VAR_5->membase + VAR_3);
 VAR_10 &= ~VAR_0;
 VAR_10 |= VAR_8;
 FUNC_5(VAR_10, VAR_5->membase + VAR_3);

 VAR_11 = FUNC_3(VAR_5->membase + VAR_4);
 VAR_11 &= ~VAR_2;
 FUNC_5(VAR_11, VAR_5->membase + VAR_4);

 return 0;
}
