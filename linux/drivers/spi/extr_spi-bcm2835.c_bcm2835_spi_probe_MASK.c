
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int of_node; } ;
struct spi_controller {int use_gpio_descriptors; TYPE_1__ dev; int prepare_message; int handle_err; int transfer_one; int setup; int num_chipselect; int bits_per_word_mask; int mode_bits; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct bcm2835_spi {int irq; int clk; int regs; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bcm2835_spi*,int ) ;
 int FUNC_5 (struct spi_controller*,TYPE_2__*,struct bcm2835_spi*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct bcm2835_spi*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,char*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (TYPE_2__*,int,int ,int ,int ,struct spi_controller*) ;
 int FUNC_14 (TYPE_2__*,struct spi_controller*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (struct platform_device*,struct spi_controller*) ;
 struct spi_controller* FUNC_18 (TYPE_2__*,int ) ;
 struct bcm2835_spi* FUNC_19 (struct spi_controller*) ;
 int FUNC_20 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_12)
{
 struct spi_controller *VAR_13;
 struct bcm2835_spi *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_18(&VAR_12->dev, FUNC_0(sizeof(*VAR_14),
        FUNC_15()));
 if (!VAR_13)
  return -VAR_6;

 FUNC_17(VAR_12, VAR_13);

 VAR_13->use_gpio_descriptors = 1;
 VAR_13->mode_bits = VAR_3;
 VAR_13->bits_per_word_mask = FUNC_3(8);
 VAR_13->num_chipselect = VAR_4;
 VAR_13->setup = VAR_10;
 VAR_13->transfer_one = VAR_11;
 VAR_13->handle_err = VAR_7;
 VAR_13->prepare_message = VAR_9;
 VAR_13->dev.of_node = VAR_12->dev.of_node;

 VAR_14 = FUNC_19(VAR_13);

 VAR_14->regs = FUNC_12(VAR_12, 0);
 if (FUNC_1(VAR_14->regs)) {
  VAR_15 = FUNC_2(VAR_14->regs);
  goto out_controller_put;
 }

 VAR_14->clk = FUNC_11(&VAR_12->dev, ((void*)0));
 if (FUNC_1(VAR_14->clk)) {
  VAR_15 = FUNC_2(VAR_14->clk);
  FUNC_9(&VAR_12->dev, "could not get clk: %d\n", VAR_15);
  goto out_controller_put;
 }

 VAR_14->irq = FUNC_16(VAR_12, 0);
 if (VAR_14->irq <= 0) {
  VAR_15 = VAR_14->irq ? VAR_14->irq : -VAR_5;
  goto out_controller_put;
 }

 FUNC_8(VAR_14->clk);

 FUNC_5(VAR_13, &VAR_12->dev, VAR_14);


 FUNC_6(VAR_14, VAR_0,
     VAR_1 | VAR_2);

 VAR_15 = FUNC_13(&VAR_12->dev, VAR_14->irq, VAR_8, 0,
          FUNC_10(&VAR_12->dev), VAR_13);
 if (VAR_15) {
  FUNC_9(&VAR_12->dev, "could not request IRQ: %d\n", VAR_15);
  goto out_clk_disable;
 }

 VAR_15 = FUNC_14(&VAR_12->dev, VAR_13);
 if (VAR_15) {
  FUNC_9(&VAR_12->dev, "could not register SPI controller: %d\n",
   VAR_15);
  goto out_clk_disable;
 }

 FUNC_4(VAR_14, FUNC_10(&VAR_12->dev));

 return 0;

out_clk_disable:
 FUNC_7(VAR_14->clk);
out_controller_put:
 FUNC_20(VAR_13);
 return VAR_15;
}
