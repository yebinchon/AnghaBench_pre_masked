
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_qspi {scalar_t__ mm_size; int lock; struct device* dev; struct reset_control* clk; int clk_rate; int data_completion; struct reset_control* mm_base; int phys_base; struct reset_control* io_base; struct spi_controller* ctrl; } ;
struct TYPE_2__ {int of_node; } ;
struct spi_controller {int mode_bits; int bus_num; TYPE_1__ dev; int num_chipselect; int * mem_ops; int setup; } ;
struct resource {int start; } ;
struct reset_control {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct reset_control*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 struct reset_control* FUNC_6 (struct device*,int *) ;
 void* FUNC_7 (struct device*,struct resource*) ;
 int FUNC_8 (struct device*,int,int ,int ,int ,struct stm32_qspi*) ;
 struct reset_control* FUNC_9 (struct device*,int *) ;
 int FUNC_10 (struct device*,struct spi_controller*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,char*) ;
 int FUNC_15 (struct platform_device*,struct stm32_qspi*) ;
 int FUNC_16 (struct reset_control*) ;
 int FUNC_17 (struct reset_control*) ;
 scalar_t__ FUNC_18 (struct resource*) ;
 struct spi_controller* FUNC_19 (struct device*,int) ;
 struct stm32_qspi* FUNC_20 (struct spi_controller*) ;
 int FUNC_21 (struct stm32_qspi*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_22 (struct stm32_qspi*) ;
 int VAR_11 ;
 int FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct spi_controller *VAR_14;
 struct reset_control *VAR_15;
 struct stm32_qspi *VAR_16;
 struct resource *VAR_17;
 int VAR_18, VAR_19;

 VAR_14 = FUNC_19(VAR_13, sizeof(*VAR_16));
 if (!VAR_14)
  return -VAR_1;

 VAR_16 = FUNC_20(VAR_14);
 VAR_16->ctrl = VAR_14;

 VAR_17 = FUNC_14(VAR_12, VAR_2, "qspi");
 VAR_16->io_base = FUNC_7(VAR_13, VAR_17);
 if (FUNC_0(VAR_16->io_base)) {
  VAR_18 = FUNC_1(VAR_16->io_base);
  goto err;
 }

 VAR_16->phys_base = VAR_17->start;

 VAR_17 = FUNC_14(VAR_12, VAR_2, "qspi_mm");
 VAR_16->mm_base = FUNC_7(VAR_13, VAR_17);
 if (FUNC_0(VAR_16->mm_base)) {
  VAR_18 = FUNC_1(VAR_16->mm_base);
  goto err;
 }

 VAR_16->mm_size = FUNC_18(VAR_17);
 if (VAR_16->mm_size > VAR_7) {
  VAR_18 = -VAR_0;
  goto err;
 }

 VAR_19 = FUNC_13(VAR_12, 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_18 = FUNC_8(VAR_13, VAR_19, VAR_9, 0,
          FUNC_5(VAR_13), VAR_16);
 if (VAR_18) {
  FUNC_4(VAR_13, "failed to request irq\n");
  goto err;
 }

 FUNC_11(&VAR_16->data_completion);

 VAR_16->clk = FUNC_6(VAR_13, ((void*)0));
 if (FUNC_0(VAR_16->clk)) {
  VAR_18 = FUNC_1(VAR_16->clk);
  goto err;
 }

 VAR_16->clk_rate = FUNC_2(VAR_16->clk);
 if (!VAR_16->clk_rate) {
  VAR_18 = -VAR_0;
  goto err;
 }

 VAR_18 = FUNC_3(VAR_16->clk);
 if (VAR_18) {
  FUNC_4(VAR_13, "can not enable the clock\n");
  goto err;
 }

 VAR_15 = FUNC_9(VAR_13, ((void*)0));
 if (!FUNC_0(VAR_15)) {
  FUNC_16(VAR_15);
  FUNC_23(2);
  FUNC_17(VAR_15);
 }

 VAR_16->dev = VAR_13;
 FUNC_15(VAR_12, VAR_16);
 FUNC_21(VAR_16);
 FUNC_12(&VAR_16->lock);

 VAR_14->mode_bits = VAR_3 | VAR_4
  | VAR_5 | VAR_6;
 VAR_14->setup = VAR_11;
 VAR_14->bus_num = -1;
 VAR_14->mem_ops = &VAR_10;
 VAR_14->num_chipselect = VAR_8;
 VAR_14->dev.of_node = VAR_13->of_node;

 VAR_18 = FUNC_10(VAR_13, VAR_14);
 if (!VAR_18)
  return 0;

err:
 FUNC_22(VAR_16);
 return VAR_18;
}
