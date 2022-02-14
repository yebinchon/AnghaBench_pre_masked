
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int of_node; } ;
struct spi_master {int use_gpio_descriptors; int can_dma; int cleanup; int setup; int flags; int bits_per_word_mask; int num_chipselect; int bus_num; TYPE_1__ dev; } ;
struct resource {int start; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; int id; } ;
struct davinci_spi_platform_data {scalar_t__ version; scalar_t__ intr_line; int prescaler_limit; int num_chipselect; } ;
struct TYPE_12__ {int flags; int txrx_bufs; int setup_transfer; int chipselect; struct spi_master* master; } ;
struct davinci_spi {int base; int irq; int clk; scalar_t__ version; int * dma_tx; int * dma_rx; TYPE_2__ bitbang; int get_tx; int get_rx; int prescaler_limit; int done; int pbase; int * bytes_per_word; struct davinci_spi_platform_data pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_5 (struct davinci_spi*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 struct davinci_spi_platform_data* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,char*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_3__*,struct resource*) ;
 int * FUNC_11 (TYPE_3__*,int ,int,int ) ;
 int FUNC_12 (TYPE_3__*,int,int ,int ,int ,int ,struct davinci_spi*) ;
 int FUNC_13 (int *) ;
 int VAR_37 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,scalar_t__) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct spi_master*) ;
 int FUNC_19 (scalar_t__,int ) ;
 struct spi_master* FUNC_20 (TYPE_3__*,int) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (struct platform_device*,struct davinci_spi*) ;
 struct davinci_spi* FUNC_23 (struct spi_master*) ;
 int FUNC_24 (struct spi_master*) ;
 int FUNC_25 (int) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_38)
{
 struct spi_master *VAR_39;
 struct davinci_spi *VAR_40;
 struct davinci_spi_platform_data *VAR_41;
 struct resource *VAR_42;
 int VAR_43 = 0;
 u32 VAR_44;

 VAR_39 = FUNC_20(&VAR_38->dev, sizeof(struct davinci_spi));
 if (VAR_39 == ((void*)0)) {
  VAR_43 = -VAR_4;
  goto err;
 }

 FUNC_18(VAR_38, VAR_39);

 VAR_40 = FUNC_23(VAR_39);

 if (FUNC_6(&VAR_38->dev)) {
  VAR_41 = FUNC_6(&VAR_38->dev);
  VAR_40->pdata = *VAR_41;
 } else {

  VAR_43 = FUNC_22(VAR_38, VAR_40);
  if (VAR_43 < 0)
   goto free_master;
 }


 VAR_41 = &VAR_40->pdata;

 VAR_40->bytes_per_word = FUNC_11(&VAR_38->dev,
         VAR_41->num_chipselect,
         sizeof(*VAR_40->bytes_per_word),
         VAR_6);
 if (VAR_40->bytes_per_word == ((void*)0)) {
  VAR_43 = -VAR_4;
  goto free_master;
 }

 VAR_42 = FUNC_17(VAR_38, VAR_7, 0);
 if (VAR_42 == ((void*)0)) {
  VAR_43 = -VAR_3;
  goto free_master;
 }

 VAR_40->pbase = VAR_42->start;

 VAR_40->base = FUNC_10(&VAR_38->dev, VAR_42);
 if (FUNC_0(VAR_40->base)) {
  VAR_43 = FUNC_1(VAR_40->base);
  goto free_master;
 }

 FUNC_14(&VAR_40->done);

 VAR_43 = FUNC_16(VAR_38, 0);
 if (VAR_43 == 0)
  VAR_43 = -VAR_1;
 if (VAR_43 < 0)
  goto free_master;
 VAR_40->irq = VAR_43;

 VAR_43 = FUNC_12(&VAR_38->dev, VAR_40->irq, VAR_32,
    VAR_37, 0, FUNC_8(&VAR_38->dev), VAR_40);
 if (VAR_43)
  goto free_master;

 VAR_40->bitbang.master = VAR_39;

 VAR_40->clk = FUNC_9(&VAR_38->dev, ((void*)0));
 if (FUNC_0(VAR_40->clk)) {
  VAR_43 = -VAR_2;
  goto free_master;
 }
 VAR_43 = FUNC_4(VAR_40->clk);
 if (VAR_43)
  goto free_master;

 VAR_39->use_gpio_descriptors = 1;
 VAR_39->dev.of_node = VAR_38->dev.of_node;
 VAR_39->bus_num = VAR_38->id;
 VAR_39->num_chipselect = VAR_41->num_chipselect;
 VAR_39->bits_per_word_mask = FUNC_2(2, 16);
 VAR_39->flags = VAR_24;
 VAR_39->setup = VAR_34;
 VAR_39->cleanup = VAR_31;
 VAR_39->can_dma = VAR_29;

 VAR_40->bitbang.chipselect = VAR_30;
 VAR_40->bitbang.setup_transfer = VAR_35;
 VAR_40->prescaler_limit = VAR_41->prescaler_limit;
 VAR_40->version = VAR_41->version;

 VAR_40->bitbang.flags = VAR_25 | VAR_23 | VAR_22 | VAR_19;
 if (VAR_40->version == VAR_27)
  VAR_40->bitbang.flags |= VAR_26;

 VAR_40->bitbang.txrx_bufs = VAR_28;

 VAR_43 = FUNC_5(VAR_40);
 if (VAR_43 == -VAR_5) {
  goto free_clk;
 } else if (VAR_43) {
  FUNC_7(&VAR_38->dev, "DMA is not supported (%d)\n", VAR_43);
  VAR_40->dma_rx = ((void*)0);
  VAR_40->dma_tx = ((void*)0);
 }

 VAR_40->get_rx = VAR_33;
 VAR_40->get_tx = VAR_36;


 FUNC_15(0, VAR_40->base + VAR_9);
 FUNC_25(100);
 FUNC_15(1, VAR_40->base + VAR_9);


 VAR_44 = VAR_17 | VAR_18 | VAR_16;
 FUNC_15(VAR_44, VAR_40->base + VAR_15);

 if (VAR_41->intr_line)
  FUNC_15(VAR_21, VAR_40->base + VAR_14);
 else
  FUNC_15(VAR_20, VAR_40->base + VAR_14);

 FUNC_15(VAR_0, VAR_40->base + VAR_8);


 FUNC_19(VAR_40->base + VAR_10, VAR_11);
 FUNC_19(VAR_40->base + VAR_10, VAR_12);
 FUNC_19(VAR_40->base + VAR_10, VAR_13);

 VAR_43 = FUNC_21(&VAR_40->bitbang);
 if (VAR_43)
  goto free_dma;

 FUNC_7(&VAR_38->dev, "Controller at 0x%p\n", VAR_40->base);

 return VAR_43;

free_dma:
 if (VAR_40->dma_rx) {
  FUNC_13(VAR_40->dma_rx);
  FUNC_13(VAR_40->dma_tx);
 }
free_clk:
 FUNC_3(VAR_40->clk);
free_master:
 FUNC_24(VAR_39);
err:
 return VAR_43;
}
