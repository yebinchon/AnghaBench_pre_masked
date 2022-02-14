
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct tegra_uart_port {unsigned int rx_bytes_requested; int rx_dma_chan; TYPE_2__* rx_dma_desc; int rx_cookie; int rx_dma_buf_phys; TYPE_1__ uport; } ;
struct TYPE_5__ {struct tegra_uart_port* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 TYPE_2__* FUNC_3 (int ,int ,unsigned int,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct tegra_uart_port *VAR_6)
{
 unsigned int VAR_7 = VAR_4;

 VAR_6->rx_dma_desc = FUNC_3(VAR_6->rx_dma_chan,
    VAR_6->rx_dma_buf_phys, VAR_7, VAR_0,
    VAR_1);
 if (!VAR_6->rx_dma_desc) {
  FUNC_0(VAR_6->uport.dev, "Not able to get desc for Rx\n");
  return -VAR_3;
 }

 VAR_6->rx_dma_desc->callback = VAR_5;
 VAR_6->rx_dma_desc->callback_param = VAR_6;
 FUNC_2(VAR_6->uport.dev, VAR_6->rx_dma_buf_phys,
    VAR_7, VAR_2);
 VAR_6->rx_bytes_requested = VAR_7;
 VAR_6->rx_cookie = FUNC_4(VAR_6->rx_dma_desc);
 FUNC_1(VAR_6->rx_dma_chan);
 return 0;
}
