
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_info {unsigned int clksel_mask; scalar_t__ type; } ;
struct s3c2410_uartcfg {unsigned long ucon; unsigned long ufcon; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long FUNC_0 (struct uart_port*,int ) ;
 struct s3c24xx_uart_info* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct uart_port*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_5,
       struct s3c2410_uartcfg *VAR_6)
{
 struct s3c24xx_uart_info *VAR_7 = FUNC_1(VAR_5);
 unsigned long VAR_8 = FUNC_0(VAR_5, VAR_1);
 unsigned int VAR_9;

 VAR_9 = VAR_7->clksel_mask;
 if (VAR_7->type == VAR_0)
  VAR_9 |= VAR_4;

 VAR_8 &= VAR_9;
 FUNC_3(VAR_5, VAR_1, VAR_8 | VAR_6->ucon);


 FUNC_3(VAR_5, VAR_2, VAR_6->ufcon | VAR_3);
 FUNC_3(VAR_5, VAR_2, VAR_6->ufcon);


 FUNC_2(1);
}
