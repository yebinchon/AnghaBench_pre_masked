
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ktermios {int c_cflag; } ;
struct tty_struct {struct ktermios termios; } ;
struct tty_port {struct tty_struct* tty; } ;
struct TYPE_11__ {scalar_t__ membase; int dev; TYPE_1__* state; } ;
struct TYPE_10__ {int length; } ;
struct circ_buf {int buf; } ;
struct lpuart_port {int rx_dma_rng_buf_len; TYPE_4__ port; int dma_rx_chan; TYPE_6__* dma_rx_desc; int dma_rx_cookie; TYPE_2__ rx_sgl; struct circ_buf rx_ring; } ;
struct dma_slave_config {int src_maxburst; int direction; int src_addr_width; int src_addr; } ;
struct TYPE_12__ {struct lpuart_port* callback_param; int callback; } ;
struct TYPE_9__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int,int ) ;
 TYPE_6__* FUNC_3 (int ,int ,int,int,int ,int ) ;
 int FUNC_4 (int ,struct dma_slave_config*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;
 unsigned long FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,unsigned long,int ) ;
 int FUNC_10 (struct lpuart_port*) ;
 int VAR_16 ;
 scalar_t__ FUNC_11 (struct lpuart_port*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int ,int) ;
 int FUNC_15 (struct tty_struct*) ;
 int FUNC_16 (int,scalar_t__) ;

__attribute__((used)) static inline int FUNC_17(struct lpuart_port *VAR_17)
{
 struct dma_slave_config VAR_18 = {};
 struct circ_buf *VAR_19 = &VAR_17->rx_ring;
 int VAR_20, VAR_21;
 int VAR_22, VAR_23;
 struct tty_port *VAR_24 = &VAR_17->port.state->port;
 struct tty_struct *VAR_25 = VAR_24->tty;
 struct ktermios *VAR_26 = &VAR_25->termios;

 VAR_23 = FUNC_15(VAR_25);

 VAR_22 = (VAR_26->c_cflag & VAR_1) == VAR_0 ? 9 : 10;
 if (VAR_26->c_cflag & VAR_11)
  VAR_22++;





 VAR_17->rx_dma_rng_buf_len = (VAR_5 * VAR_23 / VAR_22 / 1000) * 2;
 VAR_17->rx_dma_rng_buf_len = (1 << (FUNC_6(VAR_17->rx_dma_rng_buf_len) - 1));
 if (VAR_17->rx_dma_rng_buf_len < 16)
  VAR_17->rx_dma_rng_buf_len = 16;

 VAR_19->buf = FUNC_7(VAR_17->rx_dma_rng_buf_len, VAR_10);
 if (!VAR_19->buf)
  return -VAR_9;

 FUNC_14(&VAR_17->rx_sgl, VAR_19->buf, VAR_17->rx_dma_rng_buf_len);
 VAR_21 = FUNC_2(VAR_17->port.dev, &VAR_17->rx_sgl, 1, VAR_3);

 if (!VAR_21) {
  FUNC_0(VAR_17->port.dev, "DMA Rx mapping error\n");
  return -VAR_8;
 }

 VAR_18.src_addr = FUNC_10(VAR_17);
 VAR_18.src_addr_width = VAR_6;
 VAR_18.src_maxburst = 1;
 VAR_18.direction = VAR_2;
 VAR_20 = FUNC_4(VAR_17->dma_rx_chan, &VAR_18);

 if (VAR_20 < 0) {
  FUNC_0(VAR_17->port.dev,
    "DMA Rx slave config failed, err = %d\n", VAR_20);
  return VAR_20;
 }

 VAR_17->dma_rx_desc = FUNC_3(VAR_17->dma_rx_chan,
     FUNC_13(&VAR_17->rx_sgl),
     VAR_17->rx_sgl.length,
     VAR_17->rx_sgl.length / 2,
     VAR_2,
     VAR_4);
 if (!VAR_17->dma_rx_desc) {
  FUNC_0(VAR_17->port.dev, "Cannot prepare cyclic DMA\n");
  return -VAR_7;
 }

 VAR_17->dma_rx_desc->callback = VAR_16;
 VAR_17->dma_rx_desc->callback_param = VAR_17;
 VAR_17->dma_rx_cookie = FUNC_5(VAR_17->dma_rx_desc);
 FUNC_1(VAR_17->dma_rx_chan);

 if (FUNC_11(VAR_17)) {
  unsigned long VAR_27 = FUNC_8(&VAR_17->port, VAR_12);

  FUNC_9(&VAR_17->port, VAR_27 | VAR_13, VAR_12);
 } else {
  FUNC_16(FUNC_12(VAR_17->port.membase + VAR_14) | VAR_15,
         VAR_17->port.membase + VAR_14);
 }

 return 0;
}
