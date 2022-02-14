
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; int irq; struct omap8250_priv* private_data; } ;
struct uart_8250_port {int lcr; scalar_t__ dma; scalar_t__ ier; } ;
struct omap8250_priv {int qos_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct uart_port*) ;
 int FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct uart_8250_port*) ;
 int FUNC_8 (struct uart_8250_port*,int ,int) ;
 struct uart_8250_port* FUNC_9 (struct uart_port*) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_7)
{
 struct uart_8250_port *VAR_8 = FUNC_9(VAR_7);
 struct omap8250_priv *VAR_9 = VAR_7->private_data;

 FUNC_1(&VAR_9->qos_work);
 if (VAR_8->dma)
  FUNC_3(VAR_8);

 FUNC_4(VAR_7->dev);

 FUNC_8(VAR_8, VAR_6, 0);

 VAR_8->ier = 0;
 FUNC_8(VAR_8, VAR_3, 0);

 if (VAR_8->dma)
  FUNC_7(VAR_8);




 if (VAR_8->lcr & VAR_5)
  FUNC_8(VAR_8, VAR_4, VAR_8->lcr & ~VAR_5);
 FUNC_8(VAR_8, VAR_0, VAR_1 | VAR_2);

 FUNC_5(VAR_7->dev);
 FUNC_6(VAR_7->dev);
 FUNC_2(VAR_7->irq, VAR_7);
 FUNC_0(VAR_7->dev);
}
