
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int bits_per_word; int speed_hz; scalar_t__ len; int rx_buf; scalar_t__ tx_buf; } ;
struct spi_device {int bits_per_word; int max_speed_hz; int dev; int master; } ;
struct sirfsoc_spi {int ctrl_freq; int word_width; int fifo_size; scalar_t__ type; int tx_by_cmd; TYPE_1__* regs; scalar_t__ base; int tx_word; int rx_word; } ;
struct TYPE_2__ {scalar_t__ rx_dma_io_ctrl; scalar_t__ tx_dma_io_ctrl; scalar_t__ spi_ctrl; scalar_t__ usp_mode2; scalar_t__ usp_rx_frame_ctrl; scalar_t__ usp_tx_frame_ctrl; scalar_t__ rxfifo_ctrl; scalar_t__ txfifo_ctrl; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct spi_transfer*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (struct sirfsoc_spi*) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (scalar_t__) ;
 struct sirfsoc_spi* FUNC_6 (int ) ;
 int FUNC_7 (struct spi_device*) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct spi_device *VAR_43, struct spi_transfer *VAR_44)
{
 struct sirfsoc_spi *VAR_45;
 u8 VAR_46 = 0;
 int VAR_47 = 0;
 u32 VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;

 VAR_45 = FUNC_6(VAR_43->master);

 VAR_46 = (VAR_44) ? VAR_44->bits_per_word : VAR_43->bits_per_word;
 VAR_47 = VAR_44 && VAR_44->speed_hz ? VAR_44->speed_hz : VAR_43->max_speed_hz;

 VAR_53 = VAR_48 = (VAR_45->ctrl_freq / (2 * VAR_47)) - 1;
 if (VAR_48 > 0xFFFF || VAR_48 < 0) {
  FUNC_4(&VAR_43->dev, "Speed %d not supported\n", VAR_47);
  return -VAR_0;
 }
 switch (VAR_46) {
 case 8:
  VAR_48 |= VAR_9;
  VAR_45->rx_word = VAR_39;
  VAR_45->tx_word = VAR_42;
  break;
 case 12:
 case 16:
  VAR_48 |= (VAR_46 == 12) ?
   VAR_6 :
   VAR_7;
  VAR_45->rx_word = VAR_37;
  VAR_45->tx_word = VAR_40;
  break;
 case 32:
  VAR_48 |= VAR_8;
  VAR_45->rx_word = VAR_38;
  VAR_45->tx_word = VAR_41;
  break;
 default:
  FUNC_4(&VAR_43->dev, "bpw %d not supported\n", VAR_46);
  return -VAR_0;
 }
 VAR_45->word_width = FUNC_0(VAR_46, 8);
 VAR_49 = (((VAR_45->fifo_size / 2) &
   FUNC_3(VAR_45))
   << VAR_3) |
   (VAR_45->word_width >> 1);
 VAR_50 = (((VAR_45->fifo_size / 2) &
   FUNC_3(VAR_45))
   << VAR_3) |
   (VAR_45->word_width >> 1);
 FUNC_8(VAR_49, VAR_45->base + VAR_45->regs->txfifo_ctrl);
 FUNC_8(VAR_50, VAR_45->base + VAR_45->regs->rxfifo_ctrl);
 if (VAR_45->type == VAR_36 ||
  VAR_45->type == VAR_35) {
  VAR_51 = 0;
  VAR_51 |= ((VAR_46 - 1) & VAR_26)
    << VAR_27;
  VAR_51 |= ((VAR_46 + 1 + VAR_24
    - 1) & VAR_32) <<
    VAR_33;
  VAR_51 |= ((VAR_46 + 1 + VAR_24
    + 2 - 1) & VAR_28) <<
    VAR_29;
  VAR_51 |= ((VAR_46 - 1) &
    VAR_30) <<
    VAR_31;
  VAR_52 = 0;
  VAR_52 |= ((VAR_46 - 1) & VAR_18)
    << VAR_19;
  VAR_52 |= ((VAR_46 + 1 + VAR_16
    + 2 - 1) & VAR_20) <<
    VAR_21;
  VAR_52 |= ((VAR_46 - 1)
    & VAR_22) <<
    VAR_23;
  FUNC_8(VAR_51 | (((VAR_53 >> 10) &
   VAR_10) <<
   VAR_11),
   VAR_45->base + VAR_45->regs->usp_tx_frame_ctrl);
  FUNC_8(VAR_52 | (((VAR_53 >> 12) &
   VAR_12) <<
   VAR_13),
   VAR_45->base + VAR_45->regs->usp_rx_frame_ctrl);
  FUNC_8(FUNC_5(VAR_45->base + VAR_45->regs->usp_mode2) |
   ((VAR_53 & VAR_14) <<
   VAR_15) |
   (VAR_16 <<
    VAR_17) |
   (VAR_24 <<
    VAR_25),
   VAR_45->base + VAR_45->regs->usp_mode2);
 }
 if (VAR_45->type == VAR_34)
  FUNC_8(VAR_48, VAR_45->base + VAR_45->regs->spi_ctrl);
 FUNC_7(VAR_43);
 if (VAR_45->type == VAR_34) {
  if (VAR_44 && VAR_44->tx_buf && !VAR_44->rx_buf &&
   (VAR_44->len <= VAR_1)) {
   VAR_45->tx_by_cmd = 1;
   FUNC_8(FUNC_5(VAR_45->base + VAR_45->regs->spi_ctrl) |
    (FUNC_2((VAR_44->len - 1)) |
    VAR_2),
    VAR_45->base + VAR_45->regs->spi_ctrl);
  } else {
   VAR_45->tx_by_cmd = 0;
   FUNC_8(FUNC_5(VAR_45->base + VAR_45->regs->spi_ctrl) &
    ~VAR_2,
    VAR_45->base + VAR_45->regs->spi_ctrl);
  }
 }
 if (FUNC_1(VAR_44)) {

  FUNC_8(0, VAR_45->base + VAR_45->regs->tx_dma_io_ctrl);
  FUNC_8(VAR_5,
   VAR_45->base + VAR_45->regs->rx_dma_io_ctrl);
 } else {

  FUNC_8(VAR_4,
   VAR_45->base + VAR_45->regs->tx_dma_io_ctrl);
  FUNC_8(VAR_4,
   VAR_45->base + VAR_45->regs->rx_dma_io_ctrl);
 }
 return 0;
}
