
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zynqmp_qspi {scalar_t__ irq; void* pclk; void* refclk; struct device* dev; void* regs; } ;
struct TYPE_2__ {struct TYPE_2__* parent; int of_node; } ;
struct spi_master {int max_speed_hz; int mode_bits; TYPE_1__ dev; int bits_per_word_mask; int unprepare_transfer_hardware; int prepare_transfer_hardware; int transfer_one; int set_cs; int setup; int num_chipselect; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct device*,char*) ;
 void* FUNC_7 (struct device*,char*) ;
 void* FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,scalar_t__,int ,int ,int ,struct spi_master*) ;
 void* VAR_10 ;
 scalar_t__ FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct platform_device*,struct spi_master*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*,int ) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 struct spi_master* FUNC_20 (struct device*,int) ;
 struct zynqmp_qspi* FUNC_21 (struct spi_master*) ;
 int FUNC_22 (struct spi_master*) ;
 int FUNC_23 (struct spi_master*) ;
 void* FUNC_24 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_25 (struct zynqmp_qspi*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_17)
{
 int VAR_18 = 0;
 struct spi_master *VAR_19;
 struct zynqmp_qspi *VAR_20;
 struct device *VAR_21 = &VAR_17->dev;

 VAR_10 = FUNC_24();
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_19 = FUNC_20(&VAR_17->dev, sizeof(*VAR_20));
 if (!VAR_19)
  return -VAR_0;

 VAR_20 = FUNC_21(VAR_19);
 VAR_19->dev.of_node = VAR_17->dev.of_node;
 FUNC_11(VAR_17, VAR_19);

 VAR_20->regs = FUNC_8(VAR_17, 0);
 if (FUNC_0(VAR_20->regs)) {
  VAR_18 = FUNC_1(VAR_20->regs);
  goto remove_master;
 }

 VAR_20->dev = VAR_21;
 VAR_20->pclk = FUNC_7(&VAR_17->dev, "pclk");
 if (FUNC_0(VAR_20->pclk)) {
  FUNC_6(VAR_21, "pclk clock not found.\n");
  VAR_18 = FUNC_1(VAR_20->pclk);
  goto remove_master;
 }

 VAR_18 = FUNC_5(VAR_20->pclk);
 if (VAR_18) {
  FUNC_6(VAR_21, "Unable to enable APB clock.\n");
  goto remove_master;
 }

 VAR_20->refclk = FUNC_7(&VAR_17->dev, "ref_clk");
 if (FUNC_0(VAR_20->refclk)) {
  FUNC_6(VAR_21, "ref_clk clock not found.\n");
  VAR_18 = FUNC_1(VAR_20->refclk);
  goto clk_dis_pclk;
 }

 VAR_18 = FUNC_5(VAR_20->refclk);
 if (VAR_18) {
  FUNC_6(VAR_21, "Unable to enable device clock.\n");
  goto clk_dis_pclk;
 }

 FUNC_19(&VAR_17->dev);
 FUNC_17(&VAR_17->dev, VAR_3);
 FUNC_16(&VAR_17->dev);
 FUNC_13(&VAR_17->dev);

 FUNC_25(VAR_20);

 FUNC_14(&VAR_17->dev);
 FUNC_15(&VAR_17->dev);
 VAR_20->irq = FUNC_10(VAR_17, 0);
 if (VAR_20->irq <= 0) {
  VAR_18 = -VAR_1;
  goto clk_dis_all;
 }
 VAR_18 = FUNC_9(&VAR_17->dev, VAR_20->irq, VAR_13,
          0, VAR_17->name, VAR_19);
 if (VAR_18 != 0) {
  VAR_18 = -VAR_1;
  FUNC_6(VAR_21, "request_irq failed\n");
  goto clk_dis_all;
 }

 VAR_19->num_chipselect = VAR_2;

 VAR_19->setup = VAR_14;
 VAR_19->set_cs = VAR_12;
 VAR_19->transfer_one = VAR_15;
 VAR_19->prepare_transfer_hardware = VAR_11;
 VAR_19->unprepare_transfer_hardware =
     VAR_16;
 VAR_19->max_speed_hz = FUNC_4(VAR_20->refclk) / 2;
 VAR_19->bits_per_word_mask = FUNC_2(8);
 VAR_19->mode_bits = VAR_5 | VAR_4 | VAR_6 | VAR_7 |
       VAR_8 | VAR_9;

 if (VAR_19->dev.parent == ((void*)0))
  VAR_19->dev.parent = &VAR_19->dev;

 VAR_18 = FUNC_23(VAR_19);
 if (VAR_18)
  goto clk_dis_all;

 return 0;

clk_dis_all:
 FUNC_18(&VAR_17->dev);
 FUNC_12(&VAR_17->dev);
 FUNC_3(VAR_20->refclk);
clk_dis_pclk:
 FUNC_3(VAR_20->pclk);
remove_master:
 FUNC_22(VAR_19);

 return VAR_18;
}
