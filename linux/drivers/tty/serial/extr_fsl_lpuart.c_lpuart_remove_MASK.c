
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int line; } ;
struct lpuart_port {scalar_t__ dma_rx_chan; scalar_t__ dma_tx_chan; TYPE_1__ port; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct lpuart_port*) ;
 int VAR_1 ;
 struct lpuart_port* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct lpuart_port *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(&VAR_1, &VAR_3->port);

 FUNC_1(&VAR_0, VAR_3->port.line);

 FUNC_2(VAR_3);

 if (VAR_3->dma_tx_chan)
  FUNC_0(VAR_3->dma_tx_chan);

 if (VAR_3->dma_rx_chan)
  FUNC_0(VAR_3->dma_rx_chan);

 return 0;
}
