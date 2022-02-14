
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dev; int lock; struct omap8250_priv* private_data; } ;
struct uart_8250_port {int ier; TYPE_1__* dma; } ;
struct omap8250_priv {int throttled; } ;
struct TYPE_2__ {int (* rx_dma ) (struct uart_8250_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_8250_port*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct uart_8250_port*) ;
 struct uart_8250_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_3)
{
 struct omap8250_priv *VAR_4 = VAR_3->private_data;
 struct uart_8250_port *VAR_5 = FUNC_7(VAR_3);
 unsigned long VAR_6;

 FUNC_0(VAR_3->dev);

 FUNC_4(&VAR_3->lock, VAR_6);
 VAR_4->throttled = 0;
 if (VAR_5->dma)
  VAR_5->dma->rx_dma(VAR_5);
 VAR_5->ier |= VAR_2 | VAR_1;
 FUNC_3(VAR_5, VAR_0, VAR_5->ier);
 FUNC_5(&VAR_3->lock, VAR_6);

 FUNC_1(VAR_3->dev);
 FUNC_2(VAR_3->dev);
}
