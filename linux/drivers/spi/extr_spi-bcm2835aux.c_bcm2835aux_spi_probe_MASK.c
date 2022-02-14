
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int of_node; } ;
struct spi_master {int mode_bits; int num_chipselect; TYPE_1__ dev; int unprepare_message; int prepare_message; int handle_err; int transfer_one; int setup; int bits_per_word_mask; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct bcm2835aux_spi {int irq; int clk; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bcm2835aux_spi*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct bcm2835aux_spi*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (TYPE_2__*,int,int ,int ,int ,struct spi_master*) ;
 int FUNC_13 (TYPE_2__*,struct spi_master*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct spi_master*) ;
 struct spi_master* FUNC_16 (TYPE_2__*,int) ;
 struct bcm2835aux_spi* FUNC_17 (struct spi_master*) ;
 int FUNC_18 (struct spi_master*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_12)
{
 struct spi_master *VAR_13;
 struct bcm2835aux_spi *VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_13 = FUNC_16(&VAR_12->dev, sizeof(*VAR_14));
 if (!VAR_13)
  return -VAR_1;

 FUNC_15(VAR_12, VAR_13);
 VAR_13->mode_bits = (VAR_3 | VAR_4 | VAR_5);
 VAR_13->bits_per_word_mask = FUNC_2(8);
 VAR_13->num_chipselect = 1;
 VAR_13->setup = VAR_9;
 VAR_13->transfer_one = VAR_10;
 VAR_13->handle_err = VAR_6;
 VAR_13->prepare_message = VAR_8;
 VAR_13->unprepare_message = VAR_11;
 VAR_13->dev.of_node = VAR_12->dev.of_node;

 VAR_14 = FUNC_17(VAR_13);


 VAR_14->regs = FUNC_11(VAR_12, 0);
 if (FUNC_0(VAR_14->regs)) {
  VAR_16 = FUNC_1(VAR_14->regs);
  goto out_master_put;
 }

 VAR_14->clk = FUNC_10(&VAR_12->dev, ((void*)0));
 if (FUNC_0(VAR_14->clk)) {
  VAR_16 = FUNC_1(VAR_14->clk);
  FUNC_8(&VAR_12->dev, "could not get clk: %d\n", VAR_16);
  goto out_master_put;
 }

 VAR_14->irq = FUNC_14(VAR_12, 0);
 if (VAR_14->irq <= 0) {
  VAR_16 = VAR_14->irq ? VAR_14->irq : -VAR_0;
  goto out_master_put;
 }


 VAR_16 = FUNC_7(VAR_14->clk);
 if (VAR_16) {
  FUNC_8(&VAR_12->dev, "could not prepare clock: %d\n", VAR_16);
  goto out_master_put;
 }


 VAR_15 = FUNC_6(VAR_14->clk);
 if (!VAR_15) {
  FUNC_8(&VAR_12->dev, "clock returns 0 Hz\n");
  VAR_16 = -VAR_0;
  goto out_clk_disable;
 }


 FUNC_4(VAR_14);

 VAR_16 = FUNC_12(&VAR_12->dev, VAR_14->irq,
          VAR_7,
          VAR_2,
          FUNC_9(&VAR_12->dev), VAR_13);
 if (VAR_16) {
  FUNC_8(&VAR_12->dev, "could not request IRQ: %d\n", VAR_16);
  goto out_clk_disable;
 }

 VAR_16 = FUNC_13(&VAR_12->dev, VAR_13);
 if (VAR_16) {
  FUNC_8(&VAR_12->dev, "could not register SPI master: %d\n", VAR_16);
  goto out_clk_disable;
 }

 FUNC_3(VAR_14, FUNC_9(&VAR_12->dev));

 return 0;

out_clk_disable:
 FUNC_5(VAR_14->clk);
out_master_put:
 FUNC_18(VAR_13);
 return VAR_16;
}
