
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct s3c24xx_uart_port {TYPE_1__ port; struct s3c24xx_uart_dma* dma; } ;
struct s3c24xx_uart_dma {int rx_chan; TYPE_2__* rx_desc; int rx_cookie; int rx_size; int rx_bytes_requested; int rx_addr; } ;
struct TYPE_5__ {struct s3c24xx_uart_port* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct s3c24xx_uart_port *VAR_4)
{
 struct s3c24xx_uart_dma *VAR_5 = VAR_4->dma;

 FUNC_2(VAR_4->port.dev, VAR_5->rx_addr,
    VAR_5->rx_size, VAR_1);

 VAR_5->rx_desc = FUNC_3(VAR_5->rx_chan,
    VAR_5->rx_addr, VAR_5->rx_size, VAR_0,
    VAR_2);
 if (!VAR_5->rx_desc) {
  FUNC_0(VAR_4->port.dev, "Unable to get desc for Rx\n");
  return;
 }

 VAR_5->rx_desc->callback = VAR_3;
 VAR_5->rx_desc->callback_param = VAR_4;
 VAR_5->rx_bytes_requested = VAR_5->rx_size;

 VAR_5->rx_cookie = FUNC_4(VAR_5->rx_desc);
 FUNC_1(VAR_5->rx_chan);
}
