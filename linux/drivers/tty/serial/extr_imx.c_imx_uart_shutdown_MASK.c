
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; int dev; } ;
struct imx_port {int dma_tx_nents; int clk_ipg; int clk_per; TYPE_1__ port; int timer; int gpios; scalar_t__ dma_is_rxing; int rx_sgl; int dma_chan_rx; scalar_t__ dma_is_txing; int * tx_sgl; int dma_chan_tx; scalar_t__ dma_is_enabled; } ;


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
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct imx_port*) ;
 int FUNC_5 (struct imx_port*) ;
 int FUNC_6 (struct imx_port*,int ) ;
 int FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct imx_port*,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(struct uart_port *VAR_14)
{
 struct imx_port *VAR_15 = (struct imx_port *)VAR_14;
 unsigned long VAR_16;
 u32 VAR_17, VAR_18, VAR_19;

 if (VAR_15->dma_is_enabled) {
  FUNC_3(VAR_15->dma_chan_tx);
  if (VAR_15->dma_is_txing) {
   FUNC_2(VAR_15->port.dev, &VAR_15->tx_sgl[0],
         VAR_15->dma_tx_nents, VAR_1);
   VAR_15->dma_is_txing = 0;
  }
  FUNC_3(VAR_15->dma_chan_rx);
  if (VAR_15->dma_is_rxing) {
   FUNC_2(VAR_15->port.dev, &VAR_15->rx_sgl,
         1, VAR_0);
   VAR_15->dma_is_rxing = 0;
  }

  FUNC_11(&VAR_15->port.lock, VAR_16);
  FUNC_8(VAR_14);
  FUNC_7(VAR_14);
  FUNC_4(VAR_15);
  FUNC_12(&VAR_15->port.lock, VAR_16);
  FUNC_5(VAR_15);
 }

 FUNC_10(VAR_15->gpios);

 FUNC_11(&VAR_15->port.lock, VAR_16);
 VAR_18 = FUNC_6(VAR_15, VAR_9);
 VAR_18 &= ~(VAR_11 | VAR_10);
 FUNC_9(VAR_15, VAR_18, VAR_9);

 VAR_19 = FUNC_6(VAR_15, VAR_12);
 VAR_19 &= ~VAR_13;
 FUNC_9(VAR_15, VAR_19, VAR_12);
 FUNC_12(&VAR_15->port.lock, VAR_16);




 FUNC_1(&VAR_15->timer);





 FUNC_11(&VAR_15->port.lock, VAR_16);
 VAR_17 = FUNC_6(VAR_15, VAR_2);
 VAR_17 &= ~(VAR_7 | VAR_4 | VAR_5 | VAR_8 | VAR_6 | VAR_3);

 FUNC_9(VAR_15, VAR_17, VAR_2);
 FUNC_12(&VAR_15->port.lock, VAR_16);

 FUNC_0(VAR_15->clk_per);
 FUNC_0(VAR_15->clk_ipg);
}
