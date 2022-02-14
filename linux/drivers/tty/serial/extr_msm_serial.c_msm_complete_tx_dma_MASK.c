
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned int tx; } ;
struct uart_port {int lock; TYPE_2__ icount; int dev; TYPE_1__* state; } ;
struct msm_dma {unsigned int count; int enable_bit; int dir; int phys; int cookie; int chan; } ;
struct msm_port {scalar_t__ is_uartdm; int imr; struct msm_dma tx_dma; struct uart_port uart; } ;
struct dma_tx_state {unsigned int residue; } ;
struct circ_buf {unsigned int tail; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,unsigned int,int ) ;
 int FUNC_1 (int ,int ,struct dma_tx_state*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 int FUNC_8 (struct uart_port*) ;

__attribute__((used)) static void FUNC_9(void *VAR_9)
{
 struct msm_port *VAR_10 = VAR_9;
 struct uart_port *VAR_11 = &VAR_10->uart;
 struct circ_buf *VAR_12 = &VAR_11->state->xmit;
 struct msm_dma *VAR_13 = &VAR_10->tx_dma;
 struct dma_tx_state VAR_14;
 enum dma_status VAR_15;
 unsigned long VAR_16;
 unsigned int VAR_17;
 u32 VAR_18;

 FUNC_5(&VAR_11->lock, VAR_16);


 if (!VAR_13->count)
  goto done;

 VAR_15 = FUNC_1(VAR_13->chan, VAR_13->cookie, &VAR_14);

 FUNC_0(VAR_11->dev, VAR_13->phys, VAR_13->count, VAR_13->dir);

 VAR_18 = FUNC_3(VAR_11, VAR_1);
 VAR_18 &= ~VAR_13->enable_bit;
 FUNC_4(VAR_11, VAR_18, VAR_1);

 if (VAR_10->is_uartdm > VAR_0) {
  FUNC_4(VAR_11, VAR_3, VAR_2);
  FUNC_4(VAR_11, VAR_4, VAR_2);
 }

 VAR_17 = VAR_13->count - VAR_14.residue;
 VAR_11->icount.tx += VAR_17;
 VAR_13->count = 0;

 VAR_12->tail += VAR_17;
 VAR_12->tail &= VAR_7 - 1;


 VAR_10->imr |= VAR_6;
 FUNC_4(VAR_11, VAR_10->imr, VAR_5);

 if (FUNC_7(VAR_12) < VAR_8)
  FUNC_8(VAR_11);

 FUNC_2(VAR_11);
done:
 FUNC_6(&VAR_11->lock, VAR_16);
}
