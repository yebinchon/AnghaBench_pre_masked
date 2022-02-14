
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int of_node; } ;
struct spi_master {int num_chipselect; int mode_bits; int bits_per_word_mask; int flags; int min_speed_hz; int max_speed_hz; int transfer_one; int unprepare_transfer_hardware; int prepare_message; int cleanup; int setup; TYPE_1__ dev; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct meson_spicc_device {scalar_t__ core; scalar_t__ base; struct platform_device* pdev; struct spi_master* master; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int *,struct meson_spicc_device*) ;
 int FUNC_11 (TYPE_2__*,struct spi_master*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct meson_spicc_device*) ;
 struct spi_master* FUNC_14 (TYPE_2__*,int) ;
 struct meson_spicc_device* FUNC_15 (struct spi_master*) ;
 int FUNC_16 (struct spi_master*) ;
 int FUNC_17 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_14)
{
 struct spi_master *VAR_15;
 struct meson_spicc_device *VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_15 = FUNC_14(&VAR_14->dev, sizeof(*VAR_16));
 if (!VAR_15) {
  FUNC_6(&VAR_14->dev, "master allocation failed\n");
  return -VAR_0;
 }
 VAR_16 = FUNC_15(VAR_15);
 VAR_16->master = VAR_15;

 VAR_16->pdev = VAR_14;
 FUNC_13(VAR_14, VAR_16);

 VAR_16->base = FUNC_9(VAR_14, 0);
 if (FUNC_0(VAR_16->base)) {
  FUNC_6(&VAR_14->dev, "io resource mapping failed\n");
  VAR_17 = FUNC_1(VAR_16->base);
  goto out_master;
 }


 FUNC_17(0, VAR_16->base + VAR_1);

 VAR_18 = FUNC_12(VAR_14, 0);
 VAR_17 = FUNC_10(&VAR_14->dev, VAR_18, VAR_9,
          0, ((void*)0), VAR_16);
 if (VAR_17) {
  FUNC_6(&VAR_14->dev, "irq request failed\n");
  goto out_master;
 }

 VAR_16->core = FUNC_8(&VAR_14->dev, "core");
 if (FUNC_0(VAR_16->core)) {
  FUNC_6(&VAR_14->dev, "core clock request failed\n");
  VAR_17 = FUNC_1(VAR_16->core);
  goto out_master;
 }

 VAR_17 = FUNC_5(VAR_16->core);
 if (VAR_17) {
  FUNC_6(&VAR_14->dev, "core clock enable failed\n");
  goto out_master;
 }
 VAR_19 = FUNC_4(VAR_16->core);

 FUNC_7(&VAR_14->dev);

 VAR_15->num_chipselect = 4;
 VAR_15->dev.of_node = VAR_14->dev.of_node;
 VAR_15->mode_bits = VAR_3 | VAR_4 | VAR_5;
 VAR_15->bits_per_word_mask = FUNC_2(32) |
         FUNC_2(24) |
         FUNC_2(16) |
         FUNC_2(8);
 VAR_15->flags = (VAR_6 | VAR_7);
 VAR_15->min_speed_hz = VAR_19 >> 9;
 VAR_15->setup = VAR_11;
 VAR_15->cleanup = VAR_8;
 VAR_15->prepare_message = VAR_10;
 VAR_15->unprepare_transfer_hardware = VAR_13;
 VAR_15->transfer_one = VAR_12;


 if ((VAR_19 >> 2) > VAR_2)
  VAR_15->max_speed_hz = VAR_2;
 else
  VAR_15->max_speed_hz = VAR_19 >> 2;

 VAR_17 = FUNC_11(&VAR_14->dev, VAR_15);
 if (VAR_17) {
  FUNC_6(&VAR_14->dev, "spi master registration failed\n");
  goto out_clk;
 }

 return 0;

out_clk:
 FUNC_3(VAR_16->core);

out_master:
 FUNC_16(VAR_15);

 return VAR_17;
}
