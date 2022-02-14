
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;
struct omap8250_priv {int habit; int mdr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_8250_port*,struct omap8250_priv*) ;
 int FUNC_1 (struct uart_8250_port*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_8250_port *VAR_2,
     struct omap8250_priv *VAR_3)
{
 if (VAR_3->habit & VAR_0)
  FUNC_0(VAR_2, VAR_3);
 else
  FUNC_1(VAR_2, VAR_1, VAR_3->mdr1);
}
