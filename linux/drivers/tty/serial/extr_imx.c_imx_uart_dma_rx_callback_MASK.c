
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct scatterlist {int dummy; } ;
struct TYPE_5__ {unsigned int rx; int buf_overrun; } ;
struct TYPE_6__ {int ignore_status_mask; int dev; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {int head; int tail; } ;
struct imx_port {unsigned int rx_periods; TYPE_3__ port; scalar_t__ rx_buf; int rx_cookie; struct circ_buf rx_ring; struct scatterlist rx_sgl; struct dma_chan* dma_chan_rx; } ;
struct dma_tx_state {int residue; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
struct TYPE_4__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,struct scatterlist*,int,int ) ;
 int FUNC_3 (int ,struct scatterlist*,int,int ) ;
 int FUNC_4 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_5 (struct imx_port*) ;
 unsigned int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct tty_port*) ;
 unsigned int FUNC_8 (struct tty_port*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_9(void *VAR_3)
{
 struct imx_port *VAR_4 = VAR_3;
 struct dma_chan *VAR_5 = VAR_4->dma_chan_rx;
 struct scatterlist *VAR_6 = &VAR_4->rx_sgl;
 struct tty_port *VAR_7 = &VAR_4->port.state->port;
 struct dma_tx_state VAR_8;
 struct circ_buf *VAR_9 = &VAR_4->rx_ring;
 enum dma_status VAR_10;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12;
 unsigned int VAR_13;

 VAR_10 = FUNC_4(VAR_5, VAR_4->rx_cookie, &VAR_8);

 if (VAR_10 == VAR_0) {
  FUNC_5(VAR_4);
  return;
 }

 if (!(VAR_4->port.ignore_status_mask & VAR_2)) {
  VAR_9->head = FUNC_6(VAR_6) - VAR_8.residue;


  VAR_13 = FUNC_6(VAR_6) / VAR_4->rx_periods;
  VAR_9->tail = ((VAR_9->head-1) / VAR_13) * VAR_13;

  if (VAR_9->head <= FUNC_6(VAR_6) &&
      VAR_9->head > VAR_9->tail) {


   VAR_12 = VAR_9->head - VAR_9->tail;


   FUNC_2(VAR_4->port.dev, VAR_6, 1,
    VAR_1);

   VAR_11 = FUNC_8(VAR_7,
    VAR_4->rx_buf + VAR_9->tail, VAR_12);


   FUNC_3(VAR_4->port.dev, VAR_6, 1,
    VAR_1);

   if (VAR_11 != VAR_12)
    VAR_4->port.icount.buf_overrun++;

   VAR_4->port.icount.rx += VAR_11;
  } else {
   FUNC_0(VAR_9->head > FUNC_6(VAR_6));
   FUNC_0(VAR_9->head <= VAR_9->tail);
  }
 }

 if (VAR_11) {
  FUNC_7(VAR_7);
  FUNC_1(VAR_4->port.dev, "We get %d bytes.\n", VAR_11);
 }
}
