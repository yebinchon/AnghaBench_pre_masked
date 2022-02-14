
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct s3c24xx_uart_port {TYPE_1__ port; struct s3c24xx_uart_dma* dma; } ;
struct s3c24xx_uart_dma {int * tx_chan; int tx_addr; int * rx_chan; int rx_buf; int rx_size; int rx_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct s3c24xx_uart_port *VAR_3)
{
 struct s3c24xx_uart_dma *VAR_4 = VAR_3->dma;

 if (VAR_4->rx_chan) {
  FUNC_2(VAR_4->rx_chan);
  FUNC_1(VAR_3->port.dev, VAR_4->rx_addr,
    VAR_4->rx_size, VAR_0);
  FUNC_3(VAR_4->rx_buf);
  FUNC_0(VAR_4->rx_chan);
  VAR_4->rx_chan = ((void*)0);
 }

 if (VAR_4->tx_chan) {
  FUNC_2(VAR_4->tx_chan);
  FUNC_1(VAR_3->port.dev, VAR_4->tx_addr,
    VAR_2, VAR_1);
  FUNC_0(VAR_4->tx_chan);
  VAR_4->tx_chan = ((void*)0);
 }
}
