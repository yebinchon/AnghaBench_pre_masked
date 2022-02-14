
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_info {int num_clks; unsigned int clksel_mask; unsigned int clksel_shift; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 struct s3c24xx_uart_info* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static inline int FUNC_2(struct uart_port *VAR_1)
{
 struct s3c24xx_uart_info *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3;

 if (VAR_2->num_clks == 1)
  return 0;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 VAR_3 &= VAR_2->clksel_mask;
 return VAR_3 >> VAR_2->clksel_shift;
}
