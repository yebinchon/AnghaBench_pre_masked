
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct synquacer_spi {void* clk; TYPE_2__* dev; int tx_irq_name; int rx_irq_name; void* rtm; void* aces; void* clk_src_type; void* regs; int transfer_done; } ;
struct TYPE_15__ {int fwnode; struct device_node* of_node; } ;
struct spi_master {int max_speed_hz; int min_speed_hz; int auto_runtime_pm; int mode_bits; int bits_per_word_mask; int transfer_one; int set_cs; int bus_num; TYPE_1__ dev; int num_chipselect; } ;
struct TYPE_16__ {int fwnode; struct device_node* of_node; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 char* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,char*,char*) ;
 void* FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_2__*,char*,int*) ;
 void* FUNC_12 (TYPE_2__*,char*) ;
 void* FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (TYPE_2__*,int,int ,int ,int ,struct synquacer_spi*) ;
 int FUNC_15 (TYPE_2__*,struct spi_master*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct platform_device*,int) ;
 int FUNC_18 (struct platform_device*,struct spi_master*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (int ,int ,char*,char*) ;
 struct spi_master* FUNC_23 (TYPE_2__*,int) ;
 struct synquacer_spi* FUNC_24 (struct spi_master*) ;
 int FUNC_25 (struct spi_master*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_26 (struct spi_master*) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_17)
{
 struct device_node *VAR_18 = VAR_17->dev.of_node;
 struct spi_master *VAR_19;
 struct synquacer_spi *VAR_20;
 int VAR_21;
 int VAR_22, VAR_23;

 VAR_19 = FUNC_23(&VAR_17->dev, sizeof(*VAR_20));
 if (!VAR_19)
  return -VAR_1;

 FUNC_18(VAR_17, VAR_19);

 VAR_20 = FUNC_24(VAR_19);
 VAR_20->dev = &VAR_17->dev;

 FUNC_16(&VAR_20->transfer_done);

 VAR_20->regs = FUNC_13(VAR_17, 0);
 if (FUNC_0(VAR_20->regs)) {
  VAR_21 = FUNC_1(VAR_20->regs);
  goto put_spi;
 }

 VAR_20->clk_src_type = VAR_9;
 FUNC_11(&VAR_17->dev, "socionext,ihclk-rate",
     &VAR_19->max_speed_hz);

 if (FUNC_8(&VAR_17->dev)) {
  if (FUNC_9(&VAR_17->dev,
      "clock-names", "iHCLK") >= 0) {
   VAR_20->clk_src_type = VAR_9;
   VAR_20->clk = FUNC_12(VAR_20->dev, "iHCLK");
  } else if (FUNC_9(&VAR_17->dev,
      "clock-names", "iPCLK") >= 0) {
   VAR_20->clk_src_type = VAR_10;
   VAR_20->clk = FUNC_12(VAR_20->dev, "iPCLK");
  } else {
   FUNC_6(&VAR_17->dev, "specified wrong clock source\n");
   VAR_21 = -VAR_0;
   goto put_spi;
  }

  if (FUNC_0(VAR_20->clk)) {
   if (!(FUNC_1(VAR_20->clk) == -VAR_2))
    FUNC_6(&VAR_17->dev, "clock not found\n");
   VAR_21 = FUNC_1(VAR_20->clk);
   goto put_spi;
  }

  VAR_21 = FUNC_5(VAR_20->clk);
  if (VAR_21) {
   FUNC_6(&VAR_17->dev, "failed to enable clock (%d)\n",
    VAR_21);
   goto put_spi;
  }

  VAR_19->max_speed_hz = FUNC_4(VAR_20->clk);
 }

 if (!VAR_19->max_speed_hz) {
  FUNC_6(&VAR_17->dev, "missing clock source\n");
  return -VAR_0;
 }
 VAR_19->min_speed_hz = VAR_19->max_speed_hz / 254;

 VAR_20->aces = FUNC_10(&VAR_17->dev,
            "socionext,set-aces");
 VAR_20->rtm = FUNC_10(&VAR_17->dev, "socionext,use-rtm");

 VAR_19->num_chipselect = VAR_12;

 VAR_22 = FUNC_17(VAR_17, 0);
 if (VAR_22 <= 0) {
  VAR_21 = VAR_22;
  goto put_spi;
 }
 FUNC_22(VAR_20->rx_irq_name, VAR_11, "%s-rx",
   FUNC_7(&VAR_17->dev));
 VAR_21 = FUNC_14(&VAR_17->dev, VAR_22, VAR_13,
    0, VAR_20->rx_irq_name, VAR_20);
 if (VAR_21) {
  FUNC_6(&VAR_17->dev, "request rx_irq failed (%d)\n", VAR_21);
  goto put_spi;
 }

 VAR_23 = FUNC_17(VAR_17, 1);
 if (VAR_23 <= 0) {
  VAR_21 = VAR_23;
  goto put_spi;
 }
 FUNC_22(VAR_20->tx_irq_name, VAR_11, "%s-tx",
   FUNC_7(&VAR_17->dev));
 VAR_21 = FUNC_14(&VAR_17->dev, VAR_23, VAR_14,
    0, VAR_20->tx_irq_name, VAR_20);
 if (VAR_21) {
  FUNC_6(&VAR_17->dev, "request tx_irq failed (%d)\n", VAR_21);
  goto put_spi;
 }

 VAR_19->dev.of_node = VAR_18;
 VAR_19->dev.fwnode = VAR_17->dev.fwnode;
 VAR_19->auto_runtime_pm = 1;
 VAR_19->bus_num = VAR_17->id;

 VAR_19->mode_bits = VAR_4 | VAR_3 | VAR_7 | VAR_5 |
       VAR_8 | VAR_6;
 VAR_19->bits_per_word_mask = FUNC_2(32) | FUNC_2(24) |
         FUNC_2(16) | FUNC_2(8);

 VAR_19->set_cs = VAR_15;
 VAR_19->transfer_one = VAR_16;

 VAR_21 = FUNC_26(VAR_19);
 if (VAR_21)
  goto fail_enable;

 FUNC_21(VAR_20->dev);
 FUNC_20(VAR_20->dev);

 VAR_21 = FUNC_15(VAR_20->dev, VAR_19);
 if (VAR_21)
  goto disable_pm;

 return 0;

disable_pm:
 FUNC_19(VAR_20->dev);
fail_enable:
 FUNC_3(VAR_20->clk);
put_spi:
 FUNC_25(VAR_19);

 return VAR_21;
}
