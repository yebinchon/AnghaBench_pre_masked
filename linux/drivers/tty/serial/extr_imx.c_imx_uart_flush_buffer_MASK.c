
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int dummy; } ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct imx_port {scalar_t__ dma_is_txing; int dma_tx_nents; TYPE_1__ port; int dma_chan_tx; scalar_t__ tx_bytes; struct scatterlist* tx_sgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct imx_port*,int ) ;
 int FUNC_3 (struct imx_port*,int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_8)
{
 struct imx_port *VAR_9 = (struct imx_port *)VAR_8;
 struct scatterlist *VAR_10 = &VAR_9->tx_sgl[0];
 u32 VAR_11;
 int VAR_12 = 100, VAR_13, VAR_14, VAR_15;

 if (!VAR_9->dma_chan_tx)
  return;

 VAR_9->tx_bytes = 0;
 FUNC_1(VAR_9->dma_chan_tx);
 if (VAR_9->dma_is_txing) {
  u32 VAR_16;

  FUNC_0(VAR_9->port.dev, VAR_10, VAR_9->dma_tx_nents,
        VAR_0);
  VAR_16 = FUNC_2(VAR_9, VAR_4);
  VAR_16 &= ~VAR_5;
  FUNC_3(VAR_9, VAR_16, VAR_4);
  VAR_9->dma_is_txing = 0;
 }
 VAR_13 = FUNC_2(VAR_9, VAR_2);
 VAR_14 = FUNC_2(VAR_9, VAR_3);
 VAR_15 = FUNC_2(VAR_9, VAR_1);

 VAR_11 = FUNC_2(VAR_9, VAR_6);
 VAR_11 &= ~VAR_7;
 FUNC_3(VAR_9, VAR_11, VAR_6);

 while (!(FUNC_2(VAR_9, VAR_6) & VAR_7) && (--VAR_12 > 0))
  FUNC_4(1);


 FUNC_3(VAR_9, VAR_13, VAR_2);
 FUNC_3(VAR_9, VAR_14, VAR_3);
 FUNC_3(VAR_9, VAR_15, VAR_1);
}
