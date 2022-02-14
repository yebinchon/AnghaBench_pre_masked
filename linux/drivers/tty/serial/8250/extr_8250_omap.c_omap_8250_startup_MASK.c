
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dev; int irq; struct omap8250_priv* private_data; } ;
struct uart_8250_port {int ier; TYPE_1__* dma; int capabilities; scalar_t__ msr_saved_flags; scalar_t__ lsr_saved_flags; scalar_t__ mcr; } ;
struct omap8250_priv {int wer; int habit; scalar_t__ wakeirq; } ;
struct TYPE_2__ {int (* rx_dma ) (struct uart_8250_port*) ;} ;


 int VAR_0 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ,struct uart_port*) ;
 int FUNC_8 (struct uart_8250_port*) ;
 int FUNC_9 (struct uart_8250_port*,int ,int) ;
 int FUNC_10 (struct uart_8250_port*) ;
 scalar_t__ FUNC_11 (struct uart_port*) ;
 struct uart_8250_port* FUNC_12 (struct uart_port*) ;

__attribute__((used)) static int FUNC_13(struct uart_port *VAR_15)
{
 struct uart_8250_port *VAR_16 = FUNC_12(VAR_15);
 struct omap8250_priv *VAR_17 = VAR_15->private_data;
 int VAR_18;

 if (VAR_17->wakeirq) {
  VAR_18 = FUNC_2(VAR_15->dev, VAR_17->wakeirq);
  if (VAR_18)
   return VAR_18;
 }

 FUNC_4(VAR_15->dev);

 VAR_16->mcr = 0;
 FUNC_9(VAR_16, VAR_5, VAR_6 | VAR_7);

 FUNC_9(VAR_16, VAR_11, VAR_12);

 VAR_16->lsr_saved_flags = 0;
 VAR_16->msr_saved_flags = 0;


 if (FUNC_11(VAR_15))
  VAR_16->dma = ((void*)0);

 if (VAR_16->dma) {
  VAR_18 = FUNC_8(VAR_16);
  if (VAR_18) {
   FUNC_3(VAR_15->dev,
          "failed to request DMA\n");
   VAR_16->dma = ((void*)0);
  }
 }

 VAR_18 = FUNC_7(VAR_15->irq, VAR_14, VAR_0,
     FUNC_0(VAR_15->dev), VAR_15);
 if (VAR_18 < 0)
  goto err;

 VAR_16->ier = VAR_10 | VAR_9;
 FUNC_9(VAR_16, VAR_8, VAR_16->ier);






 VAR_17->wer = VAR_3;
 if (VAR_17->habit & VAR_2)
  VAR_17->wer |= VAR_1;
 FUNC_9(VAR_16, VAR_13, VAR_17->wer);

 if (VAR_16->dma)
  VAR_16->dma->rx_dma(VAR_16);

 FUNC_5(VAR_15->dev);
 FUNC_6(VAR_15->dev);
 return 0;
err:
 FUNC_5(VAR_15->dev);
 FUNC_6(VAR_15->dev);
 FUNC_1(VAR_15->dev);
 return VAR_18;
}
