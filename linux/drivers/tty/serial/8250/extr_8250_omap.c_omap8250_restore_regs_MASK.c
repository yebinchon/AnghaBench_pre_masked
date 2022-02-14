
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mctrl; TYPE_1__* ops; struct omap8250_priv* private_data; } ;
struct uart_8250_port {int fcr; int ier; int lcr; TYPE_2__ port; int mcr; struct uart_8250_dma* dma; } ;
struct uart_8250_dma {scalar_t__ tx_running; } ;
struct omap8250_priv {int delayed_restore; int efr; int xon; int xoff; int quot; } ;
struct TYPE_3__ {int (* set_mctrl ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct uart_8250_port*,struct omap8250_priv*) ;
 int FUNC_4 (struct uart_8250_port*,struct omap8250_priv*) ;
 int FUNC_5 (struct uart_8250_port*,int ) ;
 int FUNC_6 (struct uart_8250_port*,int ) ;
 int FUNC_7 (struct uart_8250_port*,int ,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_9(struct uart_8250_port *VAR_16)
{
 struct omap8250_priv *VAR_17 = VAR_16->port.private_data;
 struct uart_8250_dma *VAR_18 = VAR_16->dma;

 if (VAR_18 && VAR_18->tx_running) {






  VAR_17->delayed_restore = 1;
  return;
 }

 FUNC_7(VAR_16, VAR_6, VAR_8);
 FUNC_7(VAR_16, VAR_2, VAR_3);

 FUNC_7(VAR_16, VAR_6, VAR_7);
 FUNC_5(VAR_16, VAR_9);
 FUNC_7(VAR_16, VAR_4, VAR_16->fcr);

 FUNC_4(VAR_16, VAR_17);

 FUNC_7(VAR_16, VAR_6, VAR_8);

 FUNC_7(VAR_16, VAR_10, FUNC_1(16) |
   FUNC_0(52));
 FUNC_7(VAR_16, VAR_11,
     FUNC_2(VAR_1) << VAR_13 |
     FUNC_2(VAR_0) << VAR_12);

 FUNC_7(VAR_16, VAR_6, 0);


 FUNC_5(VAR_16, VAR_16->mcr);
 FUNC_7(VAR_16, VAR_5, VAR_16->ier);

 FUNC_7(VAR_16, VAR_6, VAR_8);
 FUNC_6(VAR_16, VAR_17->quot);

 FUNC_7(VAR_16, VAR_2, VAR_17->efr);


 FUNC_7(VAR_16, VAR_6, VAR_8);
 FUNC_7(VAR_16, VAR_15, VAR_17->xon);
 FUNC_7(VAR_16, VAR_14, VAR_17->xoff);

 FUNC_7(VAR_16, VAR_6, VAR_16->lcr);

 FUNC_3(VAR_16, VAR_17);

 VAR_16->port.ops->set_mctrl(&VAR_16->port, VAR_16->port.mctrl);
}
