
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;
struct spi_device {int dev; int master; } ;
struct sirfsoc_spi {int type; scalar_t__ left_tx_word; scalar_t__ dat_max_frm_len; unsigned long word_width; void* rx; TYPE_1__* regs; scalar_t__ base; void* dst_start; void* src_start; int tx_chan; int tx_done; scalar_t__ left_rx_word; int rx_chan; int rx_done; scalar_t__ tx; } ;
struct dma_async_tx_descriptor {int * callback_param; void* callback; } ;
struct TYPE_2__ {scalar_t__ tx_rx_en; scalar_t__ txfifo_op; scalar_t__ rxfifo_op; scalar_t__ rx_dma_io_len; scalar_t__ tx_dma_io_len; scalar_t__ spi_ctrl; scalar_t__ int_st; scalar_t__ usp_int_en_clr; scalar_t__ int_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,void*,int,int ) ;
 int FUNC_3 (int *,void*,int,int ) ;
 struct dma_async_tx_descriptor* FUNC_4 (int ,void*,int,int ,int) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (int ) ;
 unsigned long FUNC_7 (scalar_t__) ;
 struct sirfsoc_spi* FUNC_8 (int ) ;
 void* VAR_13 ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct spi_device *VAR_14,
 struct spi_transfer *VAR_15)
{
 struct sirfsoc_spi *VAR_16;
 struct dma_async_tx_descriptor *VAR_17, *VAR_18;
 int VAR_19 = VAR_15->len * 10;

 VAR_16 = FUNC_8(VAR_14->master);
 FUNC_10(VAR_8, VAR_16->base + VAR_16->regs->rxfifo_op);
 FUNC_10(VAR_8, VAR_16->base + VAR_16->regs->txfifo_op);
 switch (VAR_16->type) {
 case 130:
  FUNC_10(VAR_9,
   VAR_16->base + VAR_16->regs->rxfifo_op);
  FUNC_10(VAR_9,
   VAR_16->base + VAR_16->regs->txfifo_op);
  FUNC_10(0, VAR_16->base + VAR_16->regs->int_en);
  break;
 case 128:
  FUNC_10(0x0, VAR_16->base + VAR_16->regs->rxfifo_op);
  FUNC_10(0x0, VAR_16->base + VAR_16->regs->txfifo_op);
  FUNC_10(0, VAR_16->base + VAR_16->regs->int_en);
  break;
 case 129:
  FUNC_10(0x0, VAR_16->base + VAR_16->regs->rxfifo_op);
  FUNC_10(0x0, VAR_16->base + VAR_16->regs->txfifo_op);
  FUNC_10(~0UL, VAR_16->base + VAR_16->regs->usp_int_en_clr);
  break;
 }
 FUNC_10(FUNC_7(VAR_16->base + VAR_16->regs->int_st),
  VAR_16->base + VAR_16->regs->int_st);
 if (VAR_16->left_tx_word < VAR_16->dat_max_frm_len) {
  switch (VAR_16->type) {
  case 130:
   FUNC_10(FUNC_7(VAR_16->base + VAR_16->regs->spi_ctrl) |
    VAR_7 |
    VAR_10,
    VAR_16->base + VAR_16->regs->spi_ctrl);
   FUNC_10(VAR_16->left_tx_word - 1,
    VAR_16->base + VAR_16->regs->tx_dma_io_len);
   FUNC_10(VAR_16->left_tx_word - 1,
    VAR_16->base + VAR_16->regs->rx_dma_io_len);
   break;
  case 128:
  case 129:

   FUNC_10(VAR_16->left_tx_word * VAR_16->word_width,
    VAR_16->base + VAR_16->regs->tx_dma_io_len);
   FUNC_10(VAR_16->left_tx_word * VAR_16->word_width,
    VAR_16->base + VAR_16->regs->rx_dma_io_len);
   break;
  }
 } else {
  if (VAR_16->type == 130)
   FUNC_10(FUNC_7(VAR_16->base + VAR_16->regs->spi_ctrl),
    VAR_16->base + VAR_16->regs->spi_ctrl);
  FUNC_10(0, VAR_16->base + VAR_16->regs->tx_dma_io_len);
  FUNC_10(0, VAR_16->base + VAR_16->regs->rx_dma_io_len);
 }
 VAR_16->dst_start = FUNC_2(&VAR_14->dev, VAR_16->rx, VAR_15->len,
     (VAR_15->tx_buf != VAR_15->rx_buf) ?
     VAR_3 : VAR_0);
 VAR_17 = FUNC_4(VAR_16->rx_chan,
  VAR_16->dst_start, VAR_15->len, VAR_2,
  VAR_5 | VAR_1);
 VAR_17->callback = VAR_13;
 VAR_17->callback_param = &VAR_16->rx_done;

 VAR_16->src_start = FUNC_2(&VAR_14->dev, (void *)VAR_16->tx, VAR_15->len,
     (VAR_15->tx_buf != VAR_15->rx_buf) ?
     VAR_6 : VAR_0);
 VAR_18 = FUNC_4(VAR_16->tx_chan,
  VAR_16->src_start, VAR_15->len, VAR_4,
  VAR_5 | VAR_1);
 VAR_18->callback = VAR_13;
 VAR_18->callback_param = &VAR_16->tx_done;

 FUNC_5(VAR_18);
 FUNC_5(VAR_17);
 FUNC_1(VAR_16->tx_chan);
 FUNC_1(VAR_16->rx_chan);
 FUNC_10(VAR_11 | VAR_12,
   VAR_16->base + VAR_16->regs->tx_rx_en);
 if (VAR_16->type == 128 ||
  VAR_16->type == 129) {
  FUNC_10(VAR_9,
   VAR_16->base + VAR_16->regs->rxfifo_op);
  FUNC_10(VAR_9,
   VAR_16->base + VAR_16->regs->txfifo_op);
 }
 if (FUNC_9(&VAR_16->rx_done, VAR_19) == 0) {
  FUNC_0(&VAR_14->dev, "transfer timeout\n");
  FUNC_6(VAR_16->rx_chan);
 } else
  VAR_16->left_rx_word = 0;





 if (FUNC_9(&VAR_16->tx_done, VAR_19) == 0) {
  FUNC_0(&VAR_14->dev, "transfer timeout\n");
  if (VAR_16->type == 128 ||
   VAR_16->type == 129)
   FUNC_10(0, VAR_16->base + VAR_16->regs->tx_rx_en);
  FUNC_6(VAR_16->tx_chan);
 }
 FUNC_3(&VAR_14->dev, VAR_16->src_start, VAR_15->len, VAR_6);
 FUNC_3(&VAR_14->dev, VAR_16->dst_start, VAR_15->len, VAR_3);

 FUNC_10(0, VAR_16->base + VAR_16->regs->rxfifo_op);
 FUNC_10(0, VAR_16->base + VAR_16->regs->txfifo_op);
 if (VAR_16->left_tx_word >= VAR_16->dat_max_frm_len)
  FUNC_10(0, VAR_16->base + VAR_16->regs->tx_rx_en);
 if (VAR_16->type == 128 ||
  VAR_16->type == 129)
  FUNC_10(0, VAR_16->base + VAR_16->regs->tx_rx_en);
}
