
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; TYPE_1__* state; } ;
struct tegra_uart_port {unsigned int tx_bytes_requested; TYPE_2__ uport; scalar_t__ tx_in_progress; int tx_dma_desc; int tx_cookie; int tx_dma_chan; } ;
struct dma_tx_state {unsigned int residue; } ;
struct circ_buf {unsigned int tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct dma_tx_state*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tegra_uart_port*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(void *VAR_2)
{
 struct tegra_uart_port *VAR_3 = VAR_2;
 struct circ_buf *VAR_4 = &VAR_3->uport.state->xmit;
 struct dma_tx_state VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7;

 FUNC_1(VAR_3->tx_dma_chan, VAR_3->tx_cookie, &VAR_5);
 VAR_7 = VAR_3->tx_bytes_requested - VAR_5.residue;
 FUNC_0(VAR_3->tx_dma_desc);
 FUNC_2(&VAR_3->uport.lock, VAR_6);
 VAR_4->tail = (VAR_4->tail + VAR_7) & (VAR_0 - 1);
 VAR_3->tx_in_progress = 0;
 if (FUNC_5(VAR_4) < VAR_1)
  FUNC_6(&VAR_3->uport);
 FUNC_4(VAR_3);
 FUNC_3(&VAR_3->uport.lock, VAR_6);
}
