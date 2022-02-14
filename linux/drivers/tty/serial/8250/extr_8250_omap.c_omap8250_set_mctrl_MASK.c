
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {int status; } ;
struct TYPE_2__ {struct omap8250_priv* private_data; } ;
struct uart_8250_port {int gpios; TYPE_1__ port; } ;
struct omap8250_priv {int efr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (struct uart_8250_port*,int ) ;
 int FUNC_3 (struct uart_8250_port*,int ,int ) ;
 struct uart_8250_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_7, unsigned int VAR_8)
{
 struct uart_8250_port *VAR_9 = FUNC_4(VAR_7);
 struct omap8250_priv *VAR_10 = VAR_9->port.private_data;
 u8 VAR_11;

 FUNC_1(VAR_7, VAR_8);

 if (!FUNC_0(VAR_9->gpios, VAR_3)) {




  VAR_11 = FUNC_2(VAR_9, VAR_4);
  FUNC_3(VAR_9, VAR_4, VAR_5);
  if ((VAR_8 & VAR_0) && (VAR_7->status & VAR_6))
   VAR_10->efr |= VAR_2;
  else
   VAR_10->efr &= ~VAR_2;
  FUNC_3(VAR_9, VAR_1, VAR_10->efr);
  FUNC_3(VAR_9, VAR_4, VAR_11);
 }
}
