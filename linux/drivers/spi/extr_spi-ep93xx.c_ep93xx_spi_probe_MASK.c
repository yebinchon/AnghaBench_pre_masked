
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int use_gpio_descriptors; int mode_bits; int max_speed_hz; int min_speed_hz; scalar_t__ num_chipselect; int bits_per_word_mask; int bus_num; int transfer_one; int prepare_message; int unprepare_transfer_hardware; int prepare_transfer_hardware; } ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; int id; } ;
struct ep93xx_spi_info {scalar_t__ use_dma; } ;
struct ep93xx_spi {scalar_t__ mmio; scalar_t__ sspdr_phys; scalar_t__ clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 struct ep93xx_spi_info* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,unsigned long,int) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,struct resource*) ;
 int FUNC_10 (int *,int,int ,int ,char*,struct spi_master*) ;
 int FUNC_11 (int *,struct spi_master*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (struct ep93xx_spi*) ;
 scalar_t__ FUNC_13 (struct ep93xx_spi*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct spi_master*) ;
 struct spi_master* FUNC_17 (int *,int) ;
 struct ep93xx_spi* FUNC_18 (struct spi_master*) ;
 int FUNC_19 (struct spi_master*) ;
 int FUNC_20 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_15)
{
 struct spi_master *VAR_16;
 struct ep93xx_spi_info *VAR_17;
 struct ep93xx_spi *VAR_18;
 struct resource *VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_17 = FUNC_5(&VAR_15->dev);
 if (!VAR_17) {
  FUNC_4(&VAR_15->dev, "missing platform data\n");
  return -VAR_1;
 }

 VAR_20 = FUNC_14(VAR_15, 0);
 if (VAR_20 < 0)
  return -VAR_0;

 VAR_19 = FUNC_15(VAR_15, VAR_4, 0);
 if (!VAR_19) {
  FUNC_4(&VAR_15->dev, "unable to get iomem resource\n");
  return -VAR_2;
 }

 VAR_16 = FUNC_17(&VAR_15->dev, sizeof(*VAR_18));
 if (!VAR_16)
  return -VAR_3;

 VAR_16->use_gpio_descriptors = 1;
 VAR_16->prepare_transfer_hardware = VAR_11;
 VAR_16->unprepare_transfer_hardware = VAR_14;
 VAR_16->prepare_message = VAR_12;
 VAR_16->transfer_one = VAR_13;
 VAR_16->bus_num = VAR_15->id;
 VAR_16->mode_bits = VAR_6 | VAR_5 | VAR_7;
 VAR_16->bits_per_word_mask = FUNC_2(4, 16);




 VAR_16->num_chipselect = 0;

 FUNC_16(VAR_15, VAR_16);

 VAR_18 = FUNC_18(VAR_16);

 VAR_18->clk = FUNC_8(&VAR_15->dev, ((void*)0));
 if (FUNC_0(VAR_18->clk)) {
  FUNC_4(&VAR_15->dev, "unable to get spi clock\n");
  VAR_21 = FUNC_1(VAR_18->clk);
  goto fail_release_master;
 }





 VAR_16->max_speed_hz = FUNC_3(VAR_18->clk) / 2;
 VAR_16->min_speed_hz = FUNC_3(VAR_18->clk) / (254 * 256);

 VAR_18->sspdr_phys = VAR_19->start + VAR_9;

 VAR_18->mmio = FUNC_9(&VAR_15->dev, VAR_19);
 if (FUNC_0(VAR_18->mmio)) {
  VAR_21 = FUNC_1(VAR_18->mmio);
  goto fail_release_master;
 }

 VAR_21 = FUNC_10(&VAR_15->dev, VAR_20, VAR_10,
    0, "ep93xx-spi", VAR_16);
 if (VAR_21) {
  FUNC_4(&VAR_15->dev, "failed to request irq\n");
  goto fail_release_master;
 }

 if (VAR_17->use_dma && FUNC_13(VAR_18))
  FUNC_7(&VAR_15->dev, "DMA setup failed. Falling back to PIO\n");


 FUNC_20(0, VAR_18->mmio + VAR_8);

 VAR_21 = FUNC_11(&VAR_15->dev, VAR_16);
 if (VAR_21) {
  FUNC_4(&VAR_15->dev, "failed to register SPI master\n");
  goto fail_free_dma;
 }

 FUNC_6(&VAR_15->dev, "EP93xx SPI Controller at 0x%08lx irq %d\n",
   (unsigned long)VAR_19->start, VAR_20);

 return 0;

fail_free_dma:
 FUNC_12(VAR_18);
fail_release_master:
 FUNC_19(VAR_16);

 return VAR_21;
}
