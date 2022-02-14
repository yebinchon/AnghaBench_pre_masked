
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int of_node; } ;
struct spi_master {int auto_runtime_pm; int num_chipselect; int mode_bits; int bits_per_word_mask; int transfer_one; int set_cs; int * mem_ops; TYPE_1__ dev; } ;
struct resource {int dummy; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mxic_spi {void* regs; void* send_dly_clk; void* send_clk; void* ps_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*,char*) ;
 void* FUNC_4 (TYPE_2__*,char*) ;
 void* FUNC_5 (TYPE_2__*,struct resource*) ;
 int FUNC_6 (struct mxic_spi*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct resource* FUNC_7 (struct platform_device*,int ,char*) ;
 int FUNC_8 (struct platform_device*,struct spi_master*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 struct spi_master* FUNC_11 (TYPE_2__*,int) ;
 struct mxic_spi* FUNC_12 (struct spi_master*) ;
 int FUNC_13 (struct spi_master*) ;
 int FUNC_14 (struct spi_master*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_11)
{
 struct spi_master *VAR_12;
 struct resource *VAR_13;
 struct mxic_spi *VAR_14;
 int VAR_15;

 VAR_12 = FUNC_11(&VAR_11->dev, sizeof(struct mxic_spi));
 if (!VAR_12)
  return -VAR_0;

 FUNC_8(VAR_11, VAR_12);

 VAR_14 = FUNC_12(VAR_12);

 VAR_12->dev.of_node = VAR_11->dev.of_node;

 VAR_14->ps_clk = FUNC_4(&VAR_11->dev, "ps_clk");
 if (FUNC_0(VAR_14->ps_clk))
  return FUNC_1(VAR_14->ps_clk);

 VAR_14->send_clk = FUNC_4(&VAR_11->dev, "send_clk");
 if (FUNC_0(VAR_14->send_clk))
  return FUNC_1(VAR_14->send_clk);

 VAR_14->send_dly_clk = FUNC_4(&VAR_11->dev, "send_dly_clk");
 if (FUNC_0(VAR_14->send_dly_clk))
  return FUNC_1(VAR_14->send_dly_clk);

 VAR_13 = FUNC_7(VAR_11, VAR_1, "regs");
 VAR_14->regs = FUNC_5(&VAR_11->dev, VAR_13);
 if (FUNC_0(VAR_14->regs))
  return FUNC_1(VAR_14->regs);

 FUNC_10(&VAR_11->dev);
 VAR_12->auto_runtime_pm = 1;

 VAR_12->num_chipselect = 1;
 VAR_12->mem_ops = &VAR_8;

 VAR_12->set_cs = VAR_9;
 VAR_12->transfer_one = VAR_10;
 VAR_12->bits_per_word_mask = FUNC_2(8);
 VAR_12->mode_bits = VAR_3 | VAR_2 |
   VAR_4 | VAR_6 |
   VAR_5 | VAR_7;

 FUNC_6(VAR_14);

 VAR_15 = FUNC_14(VAR_12);
 if (VAR_15) {
  FUNC_3(&VAR_11->dev, "spi_register_master failed\n");
  goto err_put_master;
 }

 return 0;

err_put_master:
 FUNC_13(VAR_12);
 FUNC_9(&VAR_11->dev);

 return VAR_15;
}
