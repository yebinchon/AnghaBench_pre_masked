
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {int irq; int dev; } ;
struct mps2_uart_port {int flags; int rx_irq; int tx_irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct mps2_uart_port*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct uart_port*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct uart_port*,int,int ) ;
 int VAR_10 ;
 int FUNC_5 (int ,int ,int ,int ,struct mps2_uart_port*) ;
 int VAR_11 ;
 struct mps2_uart_port* FUNC_6 (struct uart_port*) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_13)
{
 struct mps2_uart_port *VAR_14 = FUNC_6(VAR_13);
 u8 VAR_15 = FUNC_3(VAR_13, VAR_2);
 int VAR_16;

 VAR_15 &= ~(VAR_3 | VAR_4);

 FUNC_4(VAR_13, VAR_15, VAR_2);

 if (VAR_14->flags & VAR_1) {
  VAR_16 = FUNC_5(VAR_13->irq, VAR_6, 0,
      FUNC_0(-VAR_5), VAR_14);

  if (VAR_16) {
   FUNC_1(VAR_13->dev, "failed to register combinedirq (%d)\n", VAR_16);
   return VAR_16;
  }
 } else {
  VAR_16 = FUNC_5(VAR_13->irq, VAR_7, VAR_0,
      FUNC_0(-VAR_10), VAR_14);

  if (VAR_16) {
   FUNC_1(VAR_13->dev, "failed to register oerrirq (%d)\n", VAR_16);
   return VAR_16;
  }

  VAR_16 = FUNC_5(VAR_14->rx_irq, VAR_8, 0,
      FUNC_0(-VAR_11), VAR_14);
  if (VAR_16) {
   FUNC_1(VAR_13->dev, "failed to register rxirq (%d)\n", VAR_16);
   goto err_free_oerrirq;
  }

  VAR_16 = FUNC_5(VAR_14->tx_irq, VAR_9, 0,
      FUNC_0(-VAR_12), VAR_14);
  if (VAR_16) {
   FUNC_1(VAR_13->dev, "failed to register txirq (%d)\n", VAR_16);
   goto err_free_rxirq;
  }

 }

 VAR_15 |= VAR_3 | VAR_4;

 FUNC_4(VAR_13, VAR_15, VAR_2);

 return 0;

err_free_rxirq:
 FUNC_2(VAR_14->rx_irq, VAR_14);
err_free_oerrirq:
 FUNC_2(VAR_13->irq, VAR_14);

 return VAR_16;
}
