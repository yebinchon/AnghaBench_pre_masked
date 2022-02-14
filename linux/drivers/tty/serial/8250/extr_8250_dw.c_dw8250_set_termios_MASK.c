
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {long uartclk; int status; int private_data; } ;
struct ktermios {int c_cflag; } ;
struct dw8250_data {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 long FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,long) ;
 int FUNC_5 (struct uart_port*,struct ktermios*,struct ktermios*) ;
 struct dw8250_data* FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct ktermios*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_3, struct ktermios *VAR_4,
          struct ktermios *VAR_5)
{
 unsigned int VAR_6 = FUNC_7(VAR_4);
 struct dw8250_data *VAR_7 = FUNC_6(VAR_3->private_data);
 long VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_7->clk))
  goto out;

 FUNC_1(VAR_7->clk);
 VAR_8 = FUNC_3(VAR_7->clk, VAR_6 * 16);
 if (VAR_8 < 0)
  VAR_9 = VAR_8;
 else if (VAR_8 == 0)
  VAR_9 = -VAR_1;
 else
  VAR_9 = FUNC_4(VAR_7->clk, VAR_8);
 FUNC_2(VAR_7->clk);

 if (!VAR_9)
  VAR_3->uartclk = VAR_8;

out:
 VAR_3->status &= ~VAR_2;
 if (VAR_4->c_cflag & VAR_0)
  VAR_3->status |= VAR_2;

 FUNC_5(VAR_3, VAR_4, VAR_5);
}
