
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct device_node* of_node; } ;
struct spi_master {int mode_bits; int bits_per_word_mask; int num_chipselect; int unprepare_transfer_hardware; int prepare_transfer_hardware; int transfer_one; int bus_num; TYPE_1__ dev; void* min_speed_hz; void* max_speed_hz; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct npcm_pspi {int is_save_param; int clk; int xfer_done; int rst_regmap; int base; int id; struct spi_master* master; } ;
struct device_node {int dummy; } ;


 void* FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,char*,int,int) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (TYPE_2__*,int,int ,int ,char*,struct npcm_pspi*) ;
 int FUNC_13 (TYPE_2__*,struct spi_master*) ;
 int FUNC_14 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (struct npcm_pspi*) ;
 int FUNC_16 (struct npcm_pspi*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (struct device_node*,char*) ;
 int FUNC_18 (struct device_node*,char*,int) ;
 int FUNC_19 (struct device_node*,char*) ;
 int FUNC_20 (struct platform_device*,int ) ;
 int FUNC_21 (struct platform_device*,struct spi_master*) ;
 int FUNC_22 (char*,int ) ;
 struct spi_master* FUNC_23 (TYPE_2__*,int) ;
 struct npcm_pspi* FUNC_24 (struct spi_master*) ;
 int FUNC_25 (struct spi_master*) ;
 int FUNC_26 (char*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_12)
{
 struct npcm_pspi *VAR_13;
 struct spi_master *VAR_14;
 unsigned long VAR_15;
 struct device_node *VAR_16 = VAR_12->dev.of_node;
 int VAR_17, VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_17 = FUNC_19(VAR_16, "cs-gpios");
 if (VAR_17 < 0)
  return VAR_17;

 VAR_12->id = FUNC_17(VAR_16, "spi");
 if (VAR_12->id < 0)
  VAR_12->id = 0;

 VAR_14 = FUNC_23(&VAR_12->dev, sizeof(*VAR_13));
 if (!VAR_14)
  return -VAR_1;

 FUNC_21(VAR_12, VAR_14);

 VAR_13 = FUNC_24(VAR_14);
 VAR_13->master = VAR_14;
 VAR_13->is_save_param = 0;
 VAR_13->id = VAR_12->id;

 VAR_13->base = FUNC_11(VAR_12, 0);
 if (FUNC_1(VAR_13->base)) {
  VAR_21 = FUNC_2(VAR_13->base);
  goto out_master_put;
 }

 VAR_13->clk = FUNC_9(&VAR_12->dev, ((void*)0));
 if (FUNC_1(VAR_13->clk)) {
  FUNC_8(&VAR_12->dev, "failed to get clock\n");
  VAR_21 = FUNC_2(VAR_13->clk);
  goto out_master_put;
 }

 VAR_21 = FUNC_6(VAR_13->clk);
 if (VAR_21)
  goto out_master_put;

 VAR_20 = FUNC_20(VAR_12, 0);
 if (VAR_20 < 0) {
  VAR_21 = VAR_20;
  goto out_disable_clk;
 }

 VAR_13->rst_regmap =
  FUNC_26("nuvoton,npcm750-rst");
 if (FUNC_1(VAR_13->rst_regmap)) {
  FUNC_8(&VAR_12->dev, "failed to find nuvoton,npcm750-rst\n");
  return FUNC_2(VAR_13->rst_regmap);
 }


 FUNC_15(VAR_13);

 VAR_21 = FUNC_12(&VAR_12->dev, VAR_20, VAR_8, 0,
          "npcm-pspi", VAR_13);
 if (VAR_21) {
  FUNC_8(&VAR_12->dev, "failed to request IRQ\n");
  goto out_disable_clk;
 }

 FUNC_14(&VAR_13->xfer_done);

 VAR_15 = FUNC_5(VAR_13->clk);

 VAR_14->max_speed_hz = FUNC_0(VAR_15, VAR_5);
 VAR_14->min_speed_hz = FUNC_0(VAR_15, VAR_4);
 VAR_14->mode_bits = VAR_6 | VAR_7;
 VAR_14->dev.of_node = VAR_12->dev.of_node;
 VAR_14->bus_num = VAR_12->id;
 VAR_14->bits_per_word_mask = FUNC_3(8) | FUNC_3(16);
 VAR_14->transfer_one = VAR_10;
 VAR_14->prepare_transfer_hardware =
  VAR_9;
 VAR_14->unprepare_transfer_hardware =
  VAR_11;
 VAR_14->num_chipselect = VAR_17;

 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  VAR_19 = FUNC_18(VAR_16, "cs-gpios", VAR_18);
  if (VAR_19 < 0) {
   FUNC_8(&VAR_12->dev, "failed to get csgpio#%u\n", VAR_18);
   goto out_disable_clk;
  }
  FUNC_7(&VAR_12->dev, "csgpio#%u = %d\n", VAR_18, VAR_19);
  VAR_21 = FUNC_10(&VAR_12->dev, VAR_19,
         VAR_2, VAR_0);
  if (VAR_21 < 0) {
   FUNC_8(&VAR_12->dev,
    "failed to configure csgpio#%u %d\n"
    , VAR_18, VAR_19);
   goto out_disable_clk;
  }
 }


 FUNC_16(VAR_13, VAR_3);

 VAR_21 = FUNC_13(&VAR_12->dev, VAR_14);
 if (VAR_21)
  goto out_disable_clk;

 FUNC_22("NPCM Peripheral SPI %d probed\n", VAR_12->id);

 return 0;

out_disable_clk:
 FUNC_4(VAR_13->clk);

out_master_put:
 FUNC_25(VAR_14);
 return VAR_21;
}
