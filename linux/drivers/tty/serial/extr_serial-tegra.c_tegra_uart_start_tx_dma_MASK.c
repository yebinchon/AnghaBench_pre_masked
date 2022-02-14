
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dev; TYPE_1__* state; } ;
struct tegra_uart_port {unsigned long tx_bytes; unsigned long tx_bytes_requested; int tx_dma_chan; TYPE_3__* tx_dma_desc; int tx_cookie; int tx_in_progress; TYPE_2__ uport; scalar_t__ tx_dma_buf_phys; } ;
struct circ_buf {scalar_t__ tail; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_7__ {struct tegra_uart_port* callback_param; int callback; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 TYPE_3__* FUNC_3 (int ,scalar_t__,unsigned long,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct tegra_uart_port *VAR_7,
  unsigned long VAR_8)
{
 struct circ_buf *VAR_9 = &VAR_7->uport.state->xmit;
 dma_addr_t VAR_10;

 FUNC_2(VAR_7->uport.dev, VAR_7->tx_dma_buf_phys,
    VAR_5, VAR_2);

 VAR_7->tx_bytes = VAR_8 & ~(0xF);
 VAR_10 = VAR_7->tx_dma_buf_phys + VAR_9->tail;
 VAR_7->tx_dma_desc = FUNC_3(VAR_7->tx_dma_chan,
    VAR_10, VAR_7->tx_bytes, VAR_0,
    VAR_1);
 if (!VAR_7->tx_dma_desc) {
  FUNC_0(VAR_7->uport.dev, "Not able to get desc for Tx\n");
  return -VAR_3;
 }

 VAR_7->tx_dma_desc->callback = VAR_6;
 VAR_7->tx_dma_desc->callback_param = VAR_7;
 VAR_7->tx_in_progress = VAR_4;
 VAR_7->tx_bytes_requested = VAR_7->tx_bytes;
 VAR_7->tx_cookie = FUNC_4(VAR_7->tx_dma_desc);
 FUNC_1(VAR_7->tx_dma_chan);
 return 0;
}
