
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; } ;
struct spi_device {int dev; int master; } ;
struct sirfsoc_spi {scalar_t__ left_tx_word; scalar_t__ left_rx_word; int type; int word_width; unsigned int fifo_size; TYPE_1__* regs; scalar_t__ base; int (* rx_word ) (struct sirfsoc_spi*) ;int rx_done; int tx_done; int (* tx_word ) (struct sirfsoc_spi*) ;} ;
struct TYPE_2__ {scalar_t__ txfifo_op; scalar_t__ rxfifo_op; scalar_t__ tx_rx_en; scalar_t__ rxfifo_st; scalar_t__ int_en; scalar_t__ txfifo_st; scalar_t__ rx_dma_io_len; scalar_t__ tx_dma_io_len; scalar_t__ spi_ctrl; scalar_t__ int_st; scalar_t__ usp_int_en_clr; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct sirfsoc_spi*) ;
 unsigned long FUNC_1 (struct sirfsoc_spi*) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;



 int FUNC_2 (int *,char*) ;
 unsigned long FUNC_3 (int,unsigned int) ;
 unsigned long FUNC_4 (scalar_t__) ;
 struct sirfsoc_spi* FUNC_5 (int ) ;
 int FUNC_6 (struct sirfsoc_spi*) ;
 int FUNC_7 (struct sirfsoc_spi*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct spi_device *VAR_10,
  struct spi_transfer *VAR_11)
{
 struct sirfsoc_spi *VAR_12;
 int VAR_13 = VAR_11->len * 10;
 unsigned int VAR_14;

 VAR_12 = FUNC_5(VAR_10->master);
 do {
  FUNC_9(VAR_1,
   VAR_12->base + VAR_12->regs->rxfifo_op);
  FUNC_9(VAR_1,
   VAR_12->base + VAR_12->regs->txfifo_op);
  switch (VAR_12->type) {
  case 128:
   FUNC_9(0x0, VAR_12->base + VAR_12->regs->rxfifo_op);
   FUNC_9(0x0, VAR_12->base + VAR_12->regs->txfifo_op);
   FUNC_9(0, VAR_12->base + VAR_12->regs->int_en);
   FUNC_9(FUNC_4(VAR_12->base + VAR_12->regs->int_st),
    VAR_12->base + VAR_12->regs->int_st);
   FUNC_9(FUNC_3((VAR_12->left_tx_word * VAR_12->word_width),
    VAR_12->fifo_size),
    VAR_12->base + VAR_12->regs->tx_dma_io_len);
   FUNC_9(FUNC_3((VAR_12->left_rx_word * VAR_12->word_width),
    VAR_12->fifo_size),
    VAR_12->base + VAR_12->regs->rx_dma_io_len);
   break;
  case 129:
   FUNC_9(0x0, VAR_12->base + VAR_12->regs->rxfifo_op);
   FUNC_9(0x0, VAR_12->base + VAR_12->regs->txfifo_op);
   FUNC_9(~0UL, VAR_12->base + VAR_12->regs->usp_int_en_clr);
   FUNC_9(FUNC_4(VAR_12->base + VAR_12->regs->int_st),
    VAR_12->base + VAR_12->regs->int_st);
   FUNC_9(FUNC_3((VAR_12->left_tx_word * VAR_12->word_width),
    VAR_12->fifo_size),
    VAR_12->base + VAR_12->regs->tx_dma_io_len);
   FUNC_9(FUNC_3((VAR_12->left_rx_word * VAR_12->word_width),
    VAR_12->fifo_size),
    VAR_12->base + VAR_12->regs->rx_dma_io_len);
   break;
  case 130:
   FUNC_9(VAR_2,
    VAR_12->base + VAR_12->regs->rxfifo_op);
   FUNC_9(VAR_2,
    VAR_12->base + VAR_12->regs->txfifo_op);
   FUNC_9(0, VAR_12->base + VAR_12->regs->int_en);
   FUNC_9(FUNC_4(VAR_12->base + VAR_12->regs->int_st),
    VAR_12->base + VAR_12->regs->int_st);
   FUNC_9(FUNC_4(VAR_12->base + VAR_12->regs->spi_ctrl) |
    VAR_3 |
    VAR_0,
    VAR_12->base + VAR_12->regs->spi_ctrl);
   VAR_14 = VAR_12->fifo_size / VAR_12->word_width;
   FUNC_9(FUNC_3(VAR_12->left_tx_word, VAR_14) - 1,
    VAR_12->base + VAR_12->regs->tx_dma_io_len);
   FUNC_9(FUNC_3(VAR_12->left_rx_word, VAR_14) - 1,
    VAR_12->base + VAR_12->regs->rx_dma_io_len);
   break;
  }
  while (!((FUNC_4(VAR_12->base + VAR_12->regs->txfifo_st)
   & FUNC_1(VAR_12))) &&
   VAR_12->left_tx_word)
   VAR_12->tx_word(VAR_12);
  FUNC_9(VAR_7 |
   VAR_9 |
   VAR_6 |
   VAR_5,
   VAR_12->base + VAR_12->regs->int_en);
  FUNC_9(VAR_4 | VAR_8,
   VAR_12->base + VAR_12->regs->tx_rx_en);
  if (VAR_12->type == 128 ||
   VAR_12->type == 129) {
   FUNC_9(VAR_2,
    VAR_12->base + VAR_12->regs->rxfifo_op);
   FUNC_9(VAR_2,
    VAR_12->base + VAR_12->regs->txfifo_op);
  }
  if (!FUNC_8(&VAR_12->tx_done, VAR_13) ||
   !FUNC_8(&VAR_12->rx_done, VAR_13)) {
   FUNC_2(&VAR_10->dev, "transfer timeout\n");
   if (VAR_12->type == 128 ||
    VAR_12->type == 129)
    FUNC_9(0, VAR_12->base + VAR_12->regs->tx_rx_en);
   break;
  }
  while (!((FUNC_4(VAR_12->base + VAR_12->regs->rxfifo_st)
   & FUNC_0(VAR_12))) &&
   VAR_12->left_rx_word)
   VAR_12->rx_word(VAR_12);
  if (VAR_12->type == 128 ||
   VAR_12->type == 129)
   FUNC_9(0, VAR_12->base + VAR_12->regs->tx_rx_en);
  FUNC_9(0, VAR_12->base + VAR_12->regs->rxfifo_op);
  FUNC_9(0, VAR_12->base + VAR_12->regs->txfifo_op);
 } while (VAR_12->left_tx_word != 0 || VAR_12->left_rx_word != 0);
}
