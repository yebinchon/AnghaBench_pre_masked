
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct uniphier_spi_priv {int is_save_param; int clk; int xfer_done; int base; struct spi_master* master; } ;
struct TYPE_7__ {int of_node; } ;
struct spi_master {int mode_bits; int num_chipselect; int unprepare_transfer_hardware; int prepare_transfer_hardware; int transfer_one; int set_cs; int bits_per_word_mask; int bus_num; TYPE_1__ dev; void* min_speed_hz; void* max_speed_hz; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int id; } ;


 void* FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,char*,struct uniphier_spi_priv*) ;
 int FUNC_11 (TYPE_2__*,struct spi_master*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct spi_master*) ;
 struct spi_master* FUNC_15 (TYPE_2__*,int) ;
 struct uniphier_spi_priv* FUNC_16 (struct spi_master*) ;
 int FUNC_17 (struct spi_master*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_12)
{
 struct uniphier_spi_priv *VAR_13;
 struct spi_master *VAR_14;
 unsigned long VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_14 = FUNC_15(&VAR_12->dev, sizeof(*VAR_13));
 if (!VAR_14)
  return -VAR_0;

 FUNC_14(VAR_12, VAR_14);

 VAR_13 = FUNC_16(VAR_14);
 VAR_13->master = VAR_14;
 VAR_13->is_save_param = 0;

 VAR_13->base = FUNC_9(VAR_12, 0);
 if (FUNC_1(VAR_13->base)) {
  VAR_17 = FUNC_2(VAR_13->base);
  goto out_master_put;
 }

 VAR_13->clk = FUNC_8(&VAR_12->dev, ((void*)0));
 if (FUNC_1(VAR_13->clk)) {
  FUNC_7(&VAR_12->dev, "failed to get clock\n");
  VAR_17 = FUNC_2(VAR_13->clk);
  goto out_master_put;
 }

 VAR_17 = FUNC_6(VAR_13->clk);
 if (VAR_17)
  goto out_master_put;

 VAR_16 = FUNC_13(VAR_12, 0);
 if (VAR_16 < 0) {
  VAR_17 = VAR_16;
  goto out_disable_clk;
 }

 VAR_17 = FUNC_10(&VAR_12->dev, VAR_16, VAR_7,
          0, "uniphier-spi", VAR_13);
 if (VAR_17) {
  FUNC_7(&VAR_12->dev, "failed to request IRQ\n");
  goto out_disable_clk;
 }

 FUNC_12(&VAR_13->xfer_done);

 VAR_15 = FUNC_5(VAR_13->clk);

 VAR_14->max_speed_hz = FUNC_0(VAR_15, VAR_6);
 VAR_14->min_speed_hz = FUNC_0(VAR_15, VAR_5);
 VAR_14->mode_bits = VAR_2 | VAR_1 | VAR_3 | VAR_4;
 VAR_14->dev.of_node = VAR_12->dev.of_node;
 VAR_14->bus_num = VAR_12->id;
 VAR_14->bits_per_word_mask = FUNC_3(1, 32);

 VAR_14->set_cs = VAR_9;
 VAR_14->transfer_one = VAR_10;
 VAR_14->prepare_transfer_hardware
    = VAR_8;
 VAR_14->unprepare_transfer_hardware
    = VAR_11;
 VAR_14->num_chipselect = 1;

 VAR_17 = FUNC_11(&VAR_12->dev, VAR_14);
 if (VAR_17)
  goto out_disable_clk;

 return 0;

out_disable_clk:
 FUNC_4(VAR_13->clk);

out_master_put:
 FUNC_17(VAR_14);
 return VAR_17;
}
