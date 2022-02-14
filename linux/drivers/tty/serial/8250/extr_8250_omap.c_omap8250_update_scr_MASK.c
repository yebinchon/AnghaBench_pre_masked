
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_8250_port {int dummy; } ;
struct omap8250_priv {int scr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_8250_port*,int ) ;
 int FUNC_1 (struct uart_8250_port*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uart_8250_port *VAR_2,
    struct omap8250_priv *VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4 == VAR_3->scr)
  return;






 if (VAR_3->scr & VAR_0)
  FUNC_1(VAR_2, VAR_1,
      VAR_3->scr & ~VAR_0);
 FUNC_1(VAR_2, VAR_1, VAR_3->scr);
}
