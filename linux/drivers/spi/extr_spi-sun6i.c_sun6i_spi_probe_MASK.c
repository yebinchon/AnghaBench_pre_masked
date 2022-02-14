
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct sun6i_spi {unsigned long fifo_depth; void* rstc; int done; void* mclk; void* hclk; struct spi_master* master; void* base_addr; } ;
struct TYPE_15__ {int of_node; } ;
struct spi_master {int max_speed_hz; int min_speed_hz; int num_chipselect; int mode_bits; int auto_runtime_pm; int max_transfer_size; TYPE_1__ dev; int bits_per_word_mask; int transfer_one; int set_cs; } ;
struct TYPE_16__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,char*) ;
 void* FUNC_4 (TYPE_2__*,char*) ;
 void* FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (TYPE_2__*,int,int ,int ,char*,struct sun6i_spi*) ;
 void* FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,struct spi_master*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct platform_device*,struct spi_master*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 struct spi_master* FUNC_17 (TYPE_2__*,int) ;
 struct sun6i_spi* FUNC_18 (struct spi_master*) ;
 int FUNC_19 (struct spi_master*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_10)
{
 struct spi_master *VAR_11;
 struct sun6i_spi *VAR_12;
 int VAR_13 = 0, VAR_14;

 VAR_11 = FUNC_17(&VAR_10->dev, sizeof(struct sun6i_spi));
 if (!VAR_11) {
  FUNC_3(&VAR_10->dev, "Unable to allocate SPI Master\n");
  return -VAR_0;
 }

 FUNC_12(VAR_10, VAR_11);
 VAR_12 = FUNC_18(VAR_11);

 VAR_12->base_addr = FUNC_5(VAR_10, 0);
 if (FUNC_0(VAR_12->base_addr)) {
  VAR_13 = FUNC_1(VAR_12->base_addr);
  goto err_free_master;
 }

 VAR_14 = FUNC_11(VAR_10, 0);
 if (VAR_14 < 0) {
  VAR_13 = -VAR_1;
  goto err_free_master;
 }

 VAR_13 = FUNC_6(&VAR_10->dev, VAR_14, VAR_6,
          0, "sun6i-spi", VAR_12);
 if (VAR_13) {
  FUNC_3(&VAR_10->dev, "Cannot request IRQ\n");
  goto err_free_master;
 }

 VAR_12->master = VAR_11;
 VAR_12->fifo_depth = (unsigned long)FUNC_10(&VAR_10->dev);

 VAR_11->max_speed_hz = 100 * 1000 * 1000;
 VAR_11->min_speed_hz = 3 * 1000;
 VAR_11->set_cs = VAR_8;
 VAR_11->transfer_one = VAR_9;
 VAR_11->num_chipselect = 4;
 VAR_11->mode_bits = VAR_3 | VAR_2 | VAR_4 | VAR_5;
 VAR_11->bits_per_word_mask = FUNC_2(8);
 VAR_11->dev.of_node = VAR_10->dev.of_node;
 VAR_11->auto_runtime_pm = 1;
 VAR_11->max_transfer_size = VAR_7;

 VAR_12->hclk = FUNC_4(&VAR_10->dev, "ahb");
 if (FUNC_0(VAR_12->hclk)) {
  FUNC_3(&VAR_10->dev, "Unable to acquire AHB clock\n");
  VAR_13 = FUNC_1(VAR_12->hclk);
  goto err_free_master;
 }

 VAR_12->mclk = FUNC_4(&VAR_10->dev, "mod");
 if (FUNC_0(VAR_12->mclk)) {
  FUNC_3(&VAR_10->dev, "Unable to acquire module clock\n");
  VAR_13 = FUNC_1(VAR_12->mclk);
  goto err_free_master;
 }

 FUNC_9(&VAR_12->done);

 VAR_12->rstc = FUNC_7(&VAR_10->dev, ((void*)0));
 if (FUNC_0(VAR_12->rstc)) {
  FUNC_3(&VAR_10->dev, "Couldn't get reset controller\n");
  VAR_13 = FUNC_1(VAR_12->rstc);
  goto err_free_master;
 }





 VAR_13 = FUNC_20(&VAR_10->dev);
 if (VAR_13) {
  FUNC_3(&VAR_10->dev, "Couldn't resume the device\n");
  goto err_free_master;
 }

 FUNC_16(&VAR_10->dev);
 FUNC_14(&VAR_10->dev);
 FUNC_15(&VAR_10->dev);

 VAR_13 = FUNC_8(&VAR_10->dev, VAR_11);
 if (VAR_13) {
  FUNC_3(&VAR_10->dev, "cannot register SPI master\n");
  goto err_pm_disable;
 }

 return 0;

err_pm_disable:
 FUNC_13(&VAR_10->dev);
 FUNC_21(&VAR_10->dev);
err_free_master:
 FUNC_19(VAR_11);
 return VAR_13;
}
