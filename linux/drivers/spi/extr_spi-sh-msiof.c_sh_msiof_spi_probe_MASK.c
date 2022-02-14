
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int of_node; } ;
struct spi_controller {int mode_bits; int auto_runtime_pm; int use_gpio_descriptors; int transfer_one; int bits_per_word_mask; int slave_abort; int prepare_message; int setup; TYPE_2__ dev; int bus_num; int flags; int num_chipselect; } ;
struct sh_msiof_spi_priv {struct sh_msiof_spi_info* info; scalar_t__ rx_fifo_size; scalar_t__ tx_fifo_size; struct platform_device* pdev; int mapbase; int clk; int done_txdma; int done; int min_div_pow; struct spi_controller* ctlr; } ;
struct sh_msiof_spi_info {scalar_t__ mode; int num_chipselect; scalar_t__ rx_fifo_override; scalar_t__ tx_fifo_override; } ;
struct sh_msiof_chipdata {int bits_per_word_mask; int ctlr_flags; scalar_t__ rx_fifo_size; scalar_t__ tx_fifo_size; int min_div_pow; } ;
struct TYPE_18__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; int id; TYPE_1__* id_entry; } ;
struct TYPE_16__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 struct sh_msiof_spi_info* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (TYPE_3__*,int,int ,int ,int ,struct sh_msiof_spi_priv*) ;
 int FUNC_9 (TYPE_3__*,struct spi_controller*) ;
 int FUNC_10 (int *) ;
 struct sh_msiof_chipdata* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct sh_msiof_spi_priv*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (struct sh_msiof_spi_priv*) ;
 int VAR_8 ;
 int FUNC_17 (struct sh_msiof_spi_priv*) ;
 int FUNC_18 (struct sh_msiof_spi_priv*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct sh_msiof_spi_info* FUNC_19 (TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct spi_controller* FUNC_20 (TYPE_3__*,int) ;
 struct spi_controller* FUNC_21 (TYPE_3__*,int) ;
 struct sh_msiof_spi_priv* FUNC_22 (struct spi_controller*) ;
 int FUNC_23 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_13)
{
 struct spi_controller *VAR_14;
 const struct sh_msiof_chipdata *VAR_15;
 struct sh_msiof_spi_info *VAR_16;
 struct sh_msiof_spi_priv *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_15 = FUNC_11(&VAR_13->dev);
 if (VAR_15) {
  VAR_16 = FUNC_19(&VAR_13->dev);
 } else {
  VAR_15 = (const void *)VAR_13->id_entry->driver_data;
  VAR_16 = FUNC_3(&VAR_13->dev);
 }

 if (!VAR_16) {
  FUNC_2(&VAR_13->dev, "failed to obtain device info\n");
  return -VAR_1;
 }

 if (VAR_16->mode == VAR_2)
  VAR_14 = FUNC_21(&VAR_13->dev,
           sizeof(struct sh_msiof_spi_priv));
 else
  VAR_14 = FUNC_20(&VAR_13->dev,
     sizeof(struct sh_msiof_spi_priv));
 if (VAR_14 == ((void*)0))
  return -VAR_0;

 VAR_17 = FUNC_22(VAR_14);

 FUNC_13(VAR_13, VAR_17);
 VAR_17->ctlr = VAR_14;
 VAR_17->info = VAR_16;
 VAR_17->min_div_pow = VAR_15->min_div_pow;

 FUNC_10(&VAR_17->done);
 FUNC_10(&VAR_17->done_txdma);

 VAR_17->clk = FUNC_6(&VAR_13->dev, ((void*)0));
 if (FUNC_0(VAR_17->clk)) {
  FUNC_2(&VAR_13->dev, "cannot get clock\n");
  VAR_19 = FUNC_1(VAR_17->clk);
  goto err1;
 }

 VAR_18 = FUNC_12(VAR_13, 0);
 if (VAR_18 < 0) {
  VAR_19 = VAR_18;
  goto err1;
 }

 VAR_17->mapbase = FUNC_7(VAR_13, 0);
 if (FUNC_0(VAR_17->mapbase)) {
  VAR_19 = FUNC_1(VAR_17->mapbase);
  goto err1;
 }

 VAR_19 = FUNC_8(&VAR_13->dev, VAR_18, VAR_10, 0,
          FUNC_4(&VAR_13->dev), VAR_17);
 if (VAR_19) {
  FUNC_2(&VAR_13->dev, "unable to request irq\n");
  goto err1;
 }

 VAR_17->pdev = VAR_13;
 FUNC_15(&VAR_13->dev);


 VAR_17->tx_fifo_size = VAR_15->tx_fifo_size;
 VAR_17->rx_fifo_size = VAR_15->rx_fifo_size;
 if (VAR_17->info->tx_fifo_override)
  VAR_17->tx_fifo_size = VAR_17->info->tx_fifo_override;
 if (VAR_17->info->rx_fifo_override)
  VAR_17->rx_fifo_size = VAR_17->info->rx_fifo_override;


 VAR_14->num_chipselect = VAR_17->info->num_chipselect;
 VAR_19 = FUNC_16(VAR_17);
 if (VAR_19)
  goto err1;


 VAR_14->mode_bits = VAR_5 | VAR_4 | VAR_6;
 VAR_14->mode_bits |= VAR_7 | VAR_3;
 VAR_14->flags = VAR_15->ctlr_flags;
 VAR_14->bus_num = VAR_13->id;
 VAR_14->dev.of_node = VAR_13->dev.of_node;
 VAR_14->setup = VAR_11;
 VAR_14->prepare_message = VAR_8;
 VAR_14->slave_abort = VAR_9;
 VAR_14->bits_per_word_mask = VAR_15->bits_per_word_mask;
 VAR_14->auto_runtime_pm = 1;
 VAR_14->transfer_one = VAR_12;
 VAR_14->use_gpio_descriptors = 1;

 VAR_19 = FUNC_18(VAR_17);
 if (VAR_19 < 0)
  FUNC_5(&VAR_13->dev, "DMA not available, using PIO\n");

 VAR_19 = FUNC_9(&VAR_13->dev, VAR_14);
 if (VAR_19 < 0) {
  FUNC_2(&VAR_13->dev, "devm_spi_register_controller error.\n");
  goto err2;
 }

 return 0;

 err2:
 FUNC_17(VAR_17);
 FUNC_14(&VAR_13->dev);
 err1:
 FUNC_23(VAR_14);
 return VAR_19;
}
