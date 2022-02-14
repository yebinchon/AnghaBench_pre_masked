
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct spi_master {int num_chipselect; int dma_alignment; int mode_bits; TYPE_1__ dev; int unprepare_transfer_hardware; int prepare_transfer_hardware; int transfer_one_message; int bits_per_word_mask; int can_dma; int flags; int max_dma_len; int max_speed_hz; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pic32_sqi {int irq; void* sys_clk; void* base_clk; int xfer_done; void* regs; struct spi_master* master; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 void* FUNC_8 (TYPE_1__*,char*) ;
 void* FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (TYPE_1__*,struct spi_master*) ;
 int FUNC_11 (int,struct pic32_sqi*) ;
 int FUNC_12 (int *) ;
 int VAR_9 ;
 int FUNC_13 (struct pic32_sqi*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct pic32_sqi*) ;
 int FUNC_16 (int,int ,int ,int ,struct pic32_sqi*) ;
 int FUNC_17 (struct pic32_sqi*) ;
 int FUNC_18 (struct pic32_sqi*) ;
 struct spi_master* FUNC_19 (TYPE_1__*,int) ;
 struct pic32_sqi* FUNC_20 (struct spi_master*) ;
 int FUNC_21 (struct spi_master*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_14)
{
 struct spi_master *VAR_15;
 struct pic32_sqi *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_19(&VAR_14->dev, sizeof(*VAR_16));
 if (!VAR_15)
  return -VAR_0;

 VAR_16 = FUNC_20(VAR_15);
 VAR_16->master = VAR_15;

 VAR_16->regs = FUNC_9(VAR_14, 0);
 if (FUNC_0(VAR_16->regs)) {
  VAR_17 = FUNC_1(VAR_16->regs);
  goto err_free_master;
 }


 VAR_16->irq = FUNC_14(VAR_14, 0);
 if (VAR_16->irq < 0) {
  VAR_17 = VAR_16->irq;
  goto err_free_master;
 }


 VAR_16->sys_clk = FUNC_8(&VAR_14->dev, "reg_ck");
 if (FUNC_0(VAR_16->sys_clk)) {
  VAR_17 = FUNC_1(VAR_16->sys_clk);
  FUNC_6(&VAR_14->dev, "no sys_clk ?\n");
  goto err_free_master;
 }

 VAR_16->base_clk = FUNC_8(&VAR_14->dev, "spi_ck");
 if (FUNC_0(VAR_16->base_clk)) {
  VAR_17 = FUNC_1(VAR_16->base_clk);
  FUNC_6(&VAR_14->dev, "no base clk ?\n");
  goto err_free_master;
 }

 VAR_17 = FUNC_5(VAR_16->sys_clk);
 if (VAR_17) {
  FUNC_6(&VAR_14->dev, "sys clk enable failed\n");
  goto err_free_master;
 }

 VAR_17 = FUNC_5(VAR_16->base_clk);
 if (VAR_17) {
  FUNC_6(&VAR_14->dev, "base clk enable failed\n");
  FUNC_3(VAR_16->sys_clk);
  goto err_free_master;
 }

 FUNC_12(&VAR_16->xfer_done);


 FUNC_13(VAR_16);


 VAR_17 = FUNC_17(VAR_16);
 if (VAR_17) {
  FUNC_6(&VAR_14->dev, "ring alloc failed\n");
  goto err_disable_clk;
 }


 VAR_17 = FUNC_16(VAR_16->irq, VAR_10, 0,
     FUNC_7(&VAR_14->dev), VAR_16);
 if (VAR_17 < 0) {
  FUNC_6(&VAR_14->dev, "request_irq(%d), failed\n", VAR_16->irq);
  goto err_free_ring;
 }


 VAR_15->num_chipselect = 2;
 VAR_15->max_speed_hz = FUNC_4(VAR_16->base_clk);
 VAR_15->dma_alignment = 32;
 VAR_15->max_dma_len = VAR_1;
 VAR_15->dev.of_node = VAR_14->dev.of_node;
 VAR_15->mode_bits = VAR_4 | VAR_3 | VAR_7 |
      VAR_5 | VAR_8 | VAR_6;
 VAR_15->flags = VAR_2;
 VAR_15->can_dma = VAR_9;
 VAR_15->bits_per_word_mask = FUNC_2(8, 32);
 VAR_15->transfer_one_message = VAR_11;
 VAR_15->prepare_transfer_hardware = VAR_12;
 VAR_15->unprepare_transfer_hardware = VAR_13;

 VAR_17 = FUNC_10(&VAR_14->dev, VAR_15);
 if (VAR_17) {
  FUNC_6(&VAR_15->dev, "failed registering spi master\n");
  FUNC_11(VAR_16->irq, VAR_16);
  goto err_free_ring;
 }

 FUNC_15(VAR_14, VAR_16);

 return 0;

err_free_ring:
 FUNC_18(VAR_16);

err_disable_clk:
 FUNC_3(VAR_16->base_clk);
 FUNC_3(VAR_16->sys_clk);

err_free_master:
 FUNC_21(VAR_15);
 return VAR_17;
}
