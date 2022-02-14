
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct spi_master {int mode_bits; int auto_runtime_pm; unsigned int num_chipselect; void* max_speed_hz; void* min_speed_hz; int max_message_size; int transfer_one_message; int cleanup; int setup; int bits_per_word_mask; TYPE_1__ dev; } ;
struct resource {int dummy; } ;
struct fsl_espi {int spibrg; int reg_base; int done; struct device* dev; int lock; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,int ,unsigned int) ;
 int FUNC_6 (struct device*,struct spi_master*) ;
 int FUNC_7 (struct device*,struct resource*) ;
 int FUNC_8 (struct device*,unsigned int,int ,int ,char*,struct fsl_espi*) ;
 int FUNC_9 (struct device*,struct spi_master*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct device*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*,int ) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 struct spi_master* FUNC_23 (struct device*,int) ;
 struct fsl_espi* FUNC_24 (struct spi_master*) ;
 int FUNC_25 (struct spi_master*) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static int FUNC_27(struct device *VAR_14, struct resource *VAR_15,
     unsigned int VAR_16, unsigned int VAR_17)
{
 struct spi_master *VAR_18;
 struct fsl_espi *VAR_19;
 int VAR_20;

 VAR_18 = FUNC_23(VAR_14, sizeof(struct fsl_espi));
 if (!VAR_18)
  return -VAR_2;

 FUNC_6(VAR_14, VAR_18);

 VAR_18->mode_bits = VAR_8 | VAR_4 | VAR_3 | VAR_5 |
       VAR_7 | VAR_6;
 VAR_18->dev.of_node = VAR_14->of_node;
 VAR_18->bits_per_word_mask = FUNC_3(4, 16);
 VAR_18->setup = VAR_13;
 VAR_18->cleanup = VAR_9;
 VAR_18->transfer_one_message = VAR_10;
 VAR_18->auto_runtime_pm = 1;
 VAR_18->max_message_size = VAR_12;
 VAR_18->num_chipselect = VAR_17;

 VAR_19 = FUNC_24(VAR_18);
 FUNC_26(&VAR_19->lock);

 VAR_19->dev = VAR_14;
 VAR_19->spibrg = FUNC_11();
 if (VAR_19->spibrg == -1) {
  FUNC_4(VAR_14, "Can't get sys frequency!\n");
  VAR_20 = -VAR_1;
  goto err_probe;
 }

 VAR_18->min_speed_hz = FUNC_0(VAR_19->spibrg, 4 * 16 * 16);
 VAR_18->max_speed_hz = FUNC_0(VAR_19->spibrg, 4);

 FUNC_12(&VAR_19->done);

 VAR_19->reg_base = FUNC_7(VAR_14, VAR_15);
 if (FUNC_1(VAR_19->reg_base)) {
  VAR_20 = FUNC_2(VAR_19->reg_base);
  goto err_probe;
 }


 VAR_20 = FUNC_8(VAR_14, VAR_16, VAR_11, 0, "fsl_espi", VAR_19);
 if (VAR_20)
  goto err_probe;

 FUNC_10(VAR_14, 1);

 FUNC_20(VAR_14, VAR_0);
 FUNC_22(VAR_14);
 FUNC_19(VAR_14);
 FUNC_14(VAR_14);
 FUNC_15(VAR_14);

 VAR_20 = FUNC_9(VAR_14, VAR_18);
 if (VAR_20 < 0)
  goto err_pm;

 FUNC_5(VAR_14, "at 0x%p (irq = %u)\n", VAR_19->reg_base, VAR_16);

 FUNC_16(VAR_14);
 FUNC_17(VAR_14);

 return 0;

err_pm:
 FUNC_18(VAR_14);
 FUNC_13(VAR_14);
 FUNC_21(VAR_14);
err_probe:
 FUNC_25(VAR_18);
 return VAR_20;
}
