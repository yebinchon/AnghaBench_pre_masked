
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int of_node; } ;
struct spi_master {int mode_bits; int bits_per_word_mask; int flags; int bus_num; TYPE_1__ dev; int max_speed_hz; int cleanup; int setup; } ;
struct TYPE_11__ {struct spi_master* master; int txrx_bufs; int setup_transfer; int chipselect; } ;
struct sirfsoc_spi {int fifo_size; int fifo_level_chk_mask; void* rx_chan; void* tx_chan; int clk; TYPE_2__ bitbang; int tx_done; int rx_done; int ctrl_freq; int base; int dat_max_frm_len; int type; int regs; int fifo_full_offset; } ;
struct sirf_spi_comp_data {int fifo_size; int (* hwinit ) (struct sirfsoc_spi*) ;int dat_max_frm_len; int type; int regs; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; int id; } ;
struct of_device_id {struct sirf_spi_comp_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_3__*,char*,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (TYPE_3__*,int,int ,int ,int ,struct sirfsoc_spi*) ;
 int FUNC_13 (void*) ;
 void* FUNC_14 (TYPE_3__*,char*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 struct of_device_id* FUNC_17 (int ,int ) ;
 int FUNC_18 (struct platform_device*,int ) ;
 int FUNC_19 (struct platform_device*,struct spi_master*) ;
 struct spi_master* FUNC_20 (TYPE_3__*,int) ;
 int FUNC_21 (TYPE_2__*) ;
 struct sirfsoc_spi* FUNC_22 (struct spi_master*) ;
 int FUNC_23 (struct spi_master*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_24 (struct sirfsoc_spi*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_18)
{
 struct sirfsoc_spi *VAR_19;
 struct spi_master *VAR_20;
 const struct sirf_spi_comp_data *VAR_21;
 int VAR_22;
 int VAR_23;
 const struct of_device_id *VAR_24;

 VAR_23 = FUNC_10(&VAR_18->dev);
 if (VAR_23) {
  FUNC_8(&VAR_18->dev, "SPI reset failed!\n");
  return VAR_23;
 }

 VAR_20 = FUNC_20(&VAR_18->dev, sizeof(*VAR_19));
 if (!VAR_20) {
  FUNC_8(&VAR_18->dev, "Unable to allocate SPI master\n");
  return -VAR_2;
 }
 VAR_24 = FUNC_17(VAR_14, VAR_18->dev.of_node);
 FUNC_19(VAR_18, VAR_20);
 VAR_19 = FUNC_22(VAR_20);
 VAR_19->fifo_full_offset = FUNC_15(VAR_19->fifo_size);
 VAR_21 = VAR_24->data;
 VAR_19->regs = VAR_21->regs;
 VAR_19->type = VAR_21->type;
 VAR_19->fifo_level_chk_mask = (VAR_19->fifo_size / 4) - 1;
 VAR_19->dat_max_frm_len = VAR_21->dat_max_frm_len;
 VAR_19->fifo_size = VAR_21->fifo_size;
 VAR_19->base = FUNC_11(VAR_18, 0);
 if (FUNC_0(VAR_19->base)) {
  VAR_23 = FUNC_1(VAR_19->base);
  goto free_master;
 }
 VAR_22 = FUNC_18(VAR_18, 0);
 if (VAR_22 < 0) {
  VAR_23 = -VAR_3;
  goto free_master;
 }
 VAR_23 = FUNC_12(&VAR_18->dev, VAR_22, VAR_13, 0,
    VAR_0, VAR_19);
 if (VAR_23)
  goto free_master;

 VAR_19->bitbang.master = VAR_20;
 VAR_19->bitbang.chipselect = VAR_11;
 VAR_19->bitbang.setup_transfer = VAR_16;
 VAR_19->bitbang.txrx_bufs = VAR_17;
 VAR_19->bitbang.master->setup = VAR_15;
 VAR_19->bitbang.master->cleanup = VAR_12;
 VAR_20->bus_num = VAR_18->id;
 VAR_20->mode_bits = VAR_6 | VAR_5 | VAR_8 | VAR_7;
 VAR_20->bits_per_word_mask = FUNC_2(8) | FUNC_2(12) |
     FUNC_2(16) | FUNC_2(32);
 VAR_20->max_speed_hz = VAR_4;
 VAR_20->flags = VAR_9 | VAR_10;
 VAR_19->bitbang.master->dev.of_node = VAR_18->dev.of_node;


 VAR_19->rx_chan = FUNC_14(&VAR_18->dev, "rx");
 if (!VAR_19->rx_chan) {
  FUNC_8(&VAR_18->dev, "can not allocate rx dma channel\n");
  VAR_23 = -VAR_1;
  goto free_master;
 }
 VAR_19->tx_chan = FUNC_14(&VAR_18->dev, "tx");
 if (!VAR_19->tx_chan) {
  FUNC_8(&VAR_18->dev, "can not allocate tx dma channel\n");
  VAR_23 = -VAR_1;
  goto free_rx_dma;
 }

 VAR_19->clk = FUNC_4(&VAR_18->dev, ((void*)0));
 if (FUNC_0(VAR_19->clk)) {
  VAR_23 = FUNC_1(VAR_19->clk);
  goto free_tx_dma;
 }
 FUNC_6(VAR_19->clk);
 if (VAR_21->hwinit)
  VAR_21->hwinit(VAR_19);
 VAR_19->ctrl_freq = FUNC_5(VAR_19->clk);

 FUNC_16(&VAR_19->rx_done);
 FUNC_16(&VAR_19->tx_done);

 VAR_23 = FUNC_21(&VAR_19->bitbang);
 if (VAR_23)
  goto free_clk;
 FUNC_9(&VAR_18->dev, "registered, bus number = %d\n", VAR_20->bus_num);

 return 0;
free_clk:
 FUNC_3(VAR_19->clk);
 FUNC_7(VAR_19->clk);
free_tx_dma:
 FUNC_13(VAR_19->tx_chan);
free_rx_dma:
 FUNC_13(VAR_19->rx_chan);
free_master:
 FUNC_23(VAR_20);

 return VAR_23;
}
