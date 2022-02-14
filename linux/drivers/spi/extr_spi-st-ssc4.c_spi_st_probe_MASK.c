
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct spi_st {scalar_t__ clk; scalar_t__ base; int done; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct spi_master {int bits_per_word_mask; int auto_runtime_pm; int bus_num; int transfer_one; int cleanup; int setup; int mode_bits; TYPE_1__ dev; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; int name; int id; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (TYPE_2__*,int,int ,int ,int ,struct spi_st*) ;
 int FUNC_9 (TYPE_2__*,struct spi_master*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device_node*,int ) ;
 int FUNC_12 (struct platform_device*,struct spi_master*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 struct spi_master* FUNC_17 (TYPE_2__*,int) ;
 struct spi_st* FUNC_18 (struct spi_master*) ;
 int FUNC_19 (struct spi_master*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_20 (int) ;
 int FUNC_21 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_11)
{
 struct device_node *VAR_12 = VAR_11->dev.of_node;
 struct spi_master *VAR_13;
 struct spi_st *VAR_14;
 int VAR_15, VAR_16 = 0;
 u32 VAR_17;

 VAR_13 = FUNC_17(&VAR_11->dev, sizeof(*VAR_14));
 if (!VAR_13)
  return -VAR_1;

 VAR_13->dev.of_node = VAR_12;
 VAR_13->mode_bits = VAR_2;
 VAR_13->setup = VAR_9;
 VAR_13->cleanup = VAR_7;
 VAR_13->transfer_one = VAR_10;
 VAR_13->bits_per_word_mask = FUNC_2(8) | FUNC_2(16);
 VAR_13->auto_runtime_pm = 1;
 VAR_13->bus_num = VAR_11->id;
 VAR_14 = FUNC_18(VAR_13);

 VAR_14->clk = FUNC_6(&VAR_11->dev, "ssc");
 if (FUNC_0(VAR_14->clk)) {
  FUNC_5(&VAR_11->dev, "Unable to request clock\n");
  VAR_16 = FUNC_1(VAR_14->clk);
  goto put_master;
 }

 VAR_16 = FUNC_4(VAR_14->clk);
 if (VAR_16)
  goto put_master;

 FUNC_10(&VAR_14->done);


 VAR_14->base = FUNC_7(VAR_11, 0);
 if (FUNC_0(VAR_14->base)) {
  VAR_16 = FUNC_1(VAR_14->base);
  goto clk_disable;
 }


 FUNC_21(0x0, VAR_14->base + VAR_6);
 VAR_17 = FUNC_16(VAR_14->base + VAR_3);
 VAR_17 |= VAR_5;
 FUNC_21(VAR_17, VAR_14->base + VAR_3);

 FUNC_20(1);
 VAR_17 = FUNC_15(VAR_14->base + VAR_3);
 VAR_17 &= ~VAR_5;
 FUNC_21(VAR_17, VAR_14->base + VAR_3);


 VAR_17 = FUNC_15(VAR_14->base + VAR_3);
 VAR_17 &= ~VAR_4;
 FUNC_21(VAR_17, VAR_14->base + VAR_3);

 VAR_15 = FUNC_11(VAR_12, 0);
 if (!VAR_15) {
  FUNC_5(&VAR_11->dev, "IRQ missing or invalid\n");
  VAR_16 = -VAR_0;
  goto clk_disable;
 }

 VAR_16 = FUNC_8(&VAR_11->dev, VAR_15, VAR_8, 0,
          VAR_11->name, VAR_14);
 if (VAR_16) {
  FUNC_5(&VAR_11->dev, "Failed to request irq %d\n", VAR_15);
  goto clk_disable;
 }


 FUNC_14(&VAR_11->dev);
 FUNC_13(&VAR_11->dev);

 FUNC_12(VAR_11, VAR_13);

 VAR_16 = FUNC_9(&VAR_11->dev, VAR_13);
 if (VAR_16) {
  FUNC_5(&VAR_11->dev, "Failed to register master\n");
  goto clk_disable;
 }

 return 0;

clk_disable:
 FUNC_3(VAR_14->clk);
put_master:
 FUNC_19(VAR_13);
 return VAR_16;
}
