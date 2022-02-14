
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct dma_chan {int dummy; } ;
struct atmel_uart_port {int cookie_tx; struct dma_chan* chan_tx; int * desc_tx; int sg_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,int *,int,int ) ;
 int FUNC_2 (struct dma_chan*) ;
 struct atmel_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2)
{
 struct atmel_uart_port *VAR_3 = FUNC_3(VAR_2);
 struct dma_chan *VAR_4 = VAR_3->chan_tx;

 if (VAR_4) {
  FUNC_2(VAR_4);
  FUNC_0(VAR_4);
  FUNC_1(VAR_2->dev, &VAR_3->sg_tx, 1,
    VAR_0);
 }

 VAR_3->desc_tx = ((void*)0);
 VAR_3->chan_tx = ((void*)0);
 VAR_3->cookie_tx = -VAR_1;
}
