
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct TYPE_7__ {int rx; int frame; int parity; } ;
struct TYPE_8__ {int lock; int dev; TYPE_2__ icount; scalar_t__ membase; TYPE_1__* state; } ;
struct TYPE_9__ {scalar_t__ length; } ;
struct circ_buf {scalar_t__ head; scalar_t__ tail; int buf; } ;
struct lpuart_port {scalar_t__ dma_rx_timeout; int lpuart_timer; TYPE_3__ port; TYPE_4__ rx_sgl; int dma_rx_cookie; int dma_rx_chan; int dma_rx_desc; struct circ_buf rx_ring; } ;
struct dma_tx_state {scalar_t__ residue; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
struct TYPE_6__ {struct tty_port port; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,TYPE_4__*,int,int ) ;
 int FUNC_4 (int ,TYPE_4__*,int,int ) ;
 int FUNC_5 (int ,int ,struct dma_tx_state*) ;
 scalar_t__ VAR_16 ;
 unsigned long FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (struct lpuart_port*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct tty_port*) ;
 int FUNC_13 (struct tty_port*,int,int) ;
 int FUNC_14 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct lpuart_port *VAR_17)
{
 struct tty_port *VAR_18 = &VAR_17->port.state->port;
 struct dma_tx_state VAR_19;
 enum dma_status VAR_20;
 struct circ_buf *VAR_21 = &VAR_17->rx_ring;
 unsigned long VAR_22;
 int VAR_23 = 0;

 if (FUNC_7(VAR_17)) {
  unsigned long VAR_24 = FUNC_6(&VAR_17->port, VAR_13);

  if (VAR_24 & (VAR_15 | VAR_14)) {

   FUNC_6(&VAR_17->port, VAR_6);

   if (VAR_24 & VAR_15)
    VAR_17->port.icount.parity++;
   else if (VAR_24 & VAR_14)
    VAR_17->port.icount.frame++;
  }
 } else {
  unsigned char VAR_25 = FUNC_9(VAR_17->port.membase + VAR_10);

  if (VAR_25 & (VAR_12 | VAR_11)) {
   unsigned char VAR_26;


   VAR_26 = FUNC_9(VAR_17->port.membase + VAR_4);
   VAR_26 &= ~VAR_5;
   FUNC_14(VAR_26, VAR_17->port.membase + VAR_4);


   FUNC_9(VAR_17->port.membase + VAR_7);

   if (VAR_25 & VAR_12)
    VAR_17->port.icount.parity++;
   else if (VAR_25 & VAR_11)
    VAR_17->port.icount.frame++;
   if (FUNC_9(VAR_17->port.membase + VAR_8) &
       VAR_9) {
    FUNC_14(VAR_9,
           VAR_17->port.membase + VAR_8);
    FUNC_14(VAR_3,
           VAR_17->port.membase + VAR_2);
   }

   VAR_26 |= VAR_5;
   FUNC_14(VAR_26, VAR_17->port.membase + VAR_4);
  }
 }

 FUNC_1(VAR_17->dma_rx_desc);

 FUNC_10(&VAR_17->port.lock, VAR_22);

 VAR_20 = FUNC_5(VAR_17->dma_rx_chan,
    VAR_17->dma_rx_cookie,
    &VAR_19);

 if (VAR_20 == VAR_0) {
  FUNC_2(VAR_17->port.dev, "Rx DMA transfer failed!\n");
  FUNC_11(&VAR_17->port.lock, VAR_22);
  return;
 }


 FUNC_3(VAR_17->port.dev, &VAR_17->rx_sgl, 1, VAR_1);
 VAR_21->head = VAR_17->rx_sgl.length - VAR_19.residue;
 FUNC_0(VAR_21->head > VAR_17->rx_sgl.length);
 if (VAR_21->head < VAR_21->tail) {
  VAR_23 = VAR_17->rx_sgl.length - VAR_21->tail;

  FUNC_13(VAR_18, VAR_21->buf + VAR_21->tail, VAR_23);
  VAR_21->tail = 0;
  VAR_17->port.icount.rx += VAR_23;
 }


 if (VAR_21->tail < VAR_21->head) {
  VAR_23 = VAR_21->head - VAR_21->tail;
  FUNC_13(VAR_18, VAR_21->buf + VAR_21->tail, VAR_23);

  if (VAR_21->head >= VAR_17->rx_sgl.length)
   VAR_21->head = 0;
  VAR_21->tail = VAR_21->head;
  VAR_17->port.icount.rx += VAR_23;
 }

 FUNC_4(VAR_17->port.dev, &VAR_17->rx_sgl, 1,
          VAR_1);

 FUNC_11(&VAR_17->port.lock, VAR_22);

 FUNC_12(VAR_18);
 FUNC_8(&VAR_17->lpuart_timer, VAR_16 + VAR_17->dma_rx_timeout);
}
