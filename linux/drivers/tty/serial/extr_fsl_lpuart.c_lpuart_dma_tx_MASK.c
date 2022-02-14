
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_6__ {struct device* dev; TYPE_1__* state; } ;
struct lpuart_port {int dma_tx_in_progress; int dma_tx_nents; int dma_tx_chan; TYPE_3__* dma_tx_desc; int dma_tx_cookie; int dma_tx_bytes; TYPE_2__ port; struct scatterlist* tx_sgl; } ;
struct device {int dummy; } ;
struct circ_buf {scalar_t__ tail; scalar_t__ head; scalar_t__ buf; } ;
struct TYPE_7__ {struct lpuart_port* callback_param; int callback; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct scatterlist*,int,int ) ;
 int FUNC_3 (struct device*,struct scatterlist*,int,int ) ;
 TYPE_3__* FUNC_4 (int ,struct scatterlist*,int,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_6 (struct scatterlist*,scalar_t__,int ) ;
 int FUNC_7 (struct scatterlist*,int) ;
 int FUNC_8 (struct scatterlist*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct circ_buf*) ;

__attribute__((used)) static void FUNC_10(struct lpuart_port *VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_5->port.state->xmit;
 struct scatterlist *VAR_7 = VAR_5->tx_sgl;
 struct device *VAR_8 = VAR_5->port.dev;
 int VAR_9;

 if (VAR_5->dma_tx_in_progress)
  return;

 VAR_5->dma_tx_bytes = FUNC_9(VAR_6);

 if (VAR_6->tail < VAR_6->head || VAR_6->head == 0) {
  VAR_5->dma_tx_nents = 1;
  FUNC_6(VAR_7, VAR_6->buf + VAR_6->tail, VAR_5->dma_tx_bytes);
 } else {
  VAR_5->dma_tx_nents = 2;
  FUNC_7(VAR_7, 2);
  FUNC_8(VAR_7, VAR_6->buf + VAR_6->tail,
    VAR_3 - VAR_6->tail);
  FUNC_8(VAR_7 + 1, VAR_6->buf, VAR_6->head);
 }

 VAR_9 = FUNC_2(VAR_8, VAR_7, VAR_5->dma_tx_nents, VAR_2);
 if (!VAR_9) {
  FUNC_0(VAR_8, "DMA mapping error for TX.\n");
  return;
 }

 VAR_5->dma_tx_desc = FUNC_4(VAR_5->dma_tx_chan, VAR_7,
     VAR_5->dma_tx_nents,
     VAR_0, VAR_1);
 if (!VAR_5->dma_tx_desc) {
  FUNC_3(VAR_8, VAR_7, VAR_5->dma_tx_nents, VAR_2);
  FUNC_0(VAR_8, "Cannot prepare TX slave DMA!\n");
  return;
 }

 VAR_5->dma_tx_desc->callback = VAR_4;
 VAR_5->dma_tx_desc->callback_param = VAR_5;
 VAR_5->dma_tx_in_progress = 1;
 VAR_5->dma_tx_cookie = FUNC_5(VAR_5->dma_tx_desc);
 FUNC_1(VAR_5->dma_tx_chan);
}
