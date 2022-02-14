
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct spi_master {int mode_bits; TYPE_1__ dev; int cleanup; int unprepare_transfer_hardware; int transfer_one_message; int prepare_transfer_hardware; int setup; int num_chipselect; int bus_num; } ;
struct mpc52xx_psc {int dummy; } ;
struct mpc512x_psc_spi {int type; unsigned int irq; struct clk* clk_mclk; struct clk* clk_ipg; int mclk_rate; int txisrdone; struct mpc512x_psc_fifo* fifo; void* psc; int cs_control; } ;
struct mpc512x_psc_fifo {int dummy; } ;
struct fsl_spi_platform_data {int max_chipselect; int bus_num; int cs_control; } ;
struct device {int of_node; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct device*,char*) ;
 struct fsl_spi_platform_data* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,struct spi_master*) ;
 struct clk* FUNC_8 (struct device*,char*) ;
 void* FUNC_9 (struct device*,int ,int ) ;
 int FUNC_10 (struct device*,unsigned int,int ,int ,char*,struct mpc512x_psc_spi*) ;
 int FUNC_11 (struct device*,struct spi_master*) ;
 int FUNC_12 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (struct spi_master*,struct mpc512x_psc_spi*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_14 (struct device*) ;
 struct spi_master* FUNC_15 (struct device*,int) ;
 struct mpc512x_psc_spi* FUNC_16 (struct spi_master*) ;
 int FUNC_17 (struct spi_master*) ;

__attribute__((used)) static int FUNC_18(struct device *VAR_14, u32 VAR_15,
           u32 VAR_16, unsigned int VAR_17)
{
 struct fsl_spi_platform_data *VAR_18 = FUNC_6(VAR_14);
 struct mpc512x_psc_spi *VAR_19;
 struct spi_master *VAR_20;
 int VAR_21;
 void *VAR_22;
 struct clk *VAR_23;

 VAR_20 = FUNC_15(VAR_14, sizeof *VAR_19);
 if (VAR_20 == ((void*)0))
  return -VAR_1;

 FUNC_7(VAR_14, VAR_20);
 VAR_19 = FUNC_16(VAR_20);
 VAR_19->type = (int)FUNC_14(VAR_14);
 VAR_19->irq = VAR_17;

 if (VAR_18 == ((void*)0)) {
  VAR_19->cs_control = VAR_13;
 } else {
  VAR_19->cs_control = VAR_18->cs_control;
  VAR_20->bus_num = VAR_18->bus_num;
  VAR_20->num_chipselect = VAR_18->max_chipselect;
 }

 VAR_20->mode_bits = VAR_4 | VAR_3 | VAR_5 | VAR_6;
 VAR_20->setup = VAR_11;
 VAR_20->prepare_transfer_hardware = VAR_10;
 VAR_20->transfer_one_message = VAR_9;
 VAR_20->unprepare_transfer_hardware = VAR_12;
 VAR_20->cleanup = VAR_7;
 VAR_20->dev.of_node = VAR_14->of_node;

 VAR_22 = FUNC_9(VAR_14, VAR_15, VAR_16);
 if (!VAR_22) {
  FUNC_5(VAR_14, "could not ioremap I/O port range\n");
  VAR_21 = -VAR_0;
  goto free_master;
 }
 VAR_19->psc = VAR_22;
 VAR_19->fifo =
  (struct mpc512x_psc_fifo *)(VAR_22 + sizeof(struct mpc52xx_psc));
 VAR_21 = FUNC_10(VAR_14, VAR_19->irq, VAR_8, VAR_2,
    "mpc512x-psc-spi", VAR_19);
 if (VAR_21)
  goto free_master;
 FUNC_12(&VAR_19->txisrdone);

 VAR_23 = FUNC_8(VAR_14, "mclk");
 if (FUNC_0(VAR_23)) {
  VAR_21 = FUNC_1(VAR_23);
  goto free_master;
 }
 VAR_21 = FUNC_4(VAR_23);
 if (VAR_21)
  goto free_master;
 VAR_19->clk_mclk = VAR_23;
 VAR_19->mclk_rate = FUNC_3(VAR_23);

 VAR_23 = FUNC_8(VAR_14, "ipg");
 if (FUNC_0(VAR_23)) {
  VAR_21 = FUNC_1(VAR_23);
  goto free_mclk_clock;
 }
 VAR_21 = FUNC_4(VAR_23);
 if (VAR_21)
  goto free_mclk_clock;
 VAR_19->clk_ipg = VAR_23;

 VAR_21 = FUNC_13(VAR_20, VAR_19);
 if (VAR_21 < 0)
  goto free_ipg_clock;

 VAR_21 = FUNC_11(VAR_14, VAR_20);
 if (VAR_21 < 0)
  goto free_ipg_clock;

 return VAR_21;

free_ipg_clock:
 FUNC_2(VAR_19->clk_ipg);
free_mclk_clock:
 FUNC_2(VAR_19->clk_mclk);
free_master:
 FUNC_17(VAR_20);

 return VAR_21;
}
