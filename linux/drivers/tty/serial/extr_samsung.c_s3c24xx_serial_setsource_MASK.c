
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_info {int num_clks; unsigned int clksel_mask; unsigned int clksel_shift; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 struct s3c24xx_uart_info* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1,
   unsigned int VAR_2)
{
 struct s3c24xx_uart_info *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4;

 if (VAR_3->num_clks == 1)
  return;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 if ((VAR_4 & VAR_3->clksel_mask) >> VAR_3->clksel_shift == VAR_2)
  return;

 VAR_4 &= ~VAR_3->clksel_mask;
 VAR_4 |= VAR_2 << VAR_3->clksel_shift;
 FUNC_2(VAR_1, VAR_0, VAR_4);
}
