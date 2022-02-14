
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct s3c24xx_uart_port {unsigned int pm_level; int baudclk; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (struct uart_port*) ;
 struct s3c24xx_uart_port* FUNC_5 (struct uart_port*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2)
{
 struct s3c24xx_uart_port *VAR_3 = FUNC_5(VAR_0);
 int VAR_4 = 10000;

 VAR_3->pm_level = VAR_1;

 switch (VAR_1) {
 case 3:
  while (--VAR_4 && !FUNC_4(VAR_0))
   FUNC_6(100);

  if (!FUNC_0(VAR_3->baudclk))
   FUNC_1(VAR_3->baudclk);

  FUNC_1(VAR_3->clk);
  break;

 case 0:
  FUNC_2(VAR_3->clk);

  if (!FUNC_0(VAR_3->baudclk))
   FUNC_2(VAR_3->baudclk);

  break;
 default:
  FUNC_3(VAR_0->dev, "s3c24xx_serial: unknown pm %d\n", VAR_1);
 }
}
