
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct spi_master {int num_chipselect; int auto_runtime_pm; int mode_bits; int bus_num; TYPE_1__ dev; int rt; int unprepare_transfer_hardware; int transfer_one_message; int setup; int cleanup; } ;
struct pl022_ssp_controller {int num_chipselect; int* chipselects; int enable_dma; int autosuspend_delay; int rt; int bus_id; } ;
struct pl022 {int* chipselects; int clk; int * virtbase; int pump_transfers; int phybase; TYPE_2__* vendor; struct amba_device* adev; struct pl022_ssp_controller* master_info; struct spi_master* master; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct amba_id {TYPE_2__* data; } ;
struct TYPE_6__ {int start; } ;
struct amba_device {struct device dev; int * irq; TYPE_3__ res; int periphid; } ;
struct TYPE_5__ {scalar_t__ extended_cr; scalar_t__ internal_cs_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int VAR_10 ;
 int FUNC_4 (struct amba_device*) ;
 int FUNC_5 (struct amba_device*,int *) ;
 int FUNC_6 (struct amba_device*,struct pl022*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct device*,char*,...) ;
 int FUNC_10 (struct device*,char*,...) ;
 struct pl022_ssp_controller* FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*,char*,int ,...) ;
 int FUNC_13 (struct device*,int *) ;
 scalar_t__ FUNC_14 (struct device*,int,char*) ;
 int * FUNC_15 (struct device*,int ,int ) ;
 int* FUNC_16 (struct device*,int,int,int ) ;
 int FUNC_17 (struct device*,int ,int ,int ,char*,struct pl022*) ;
 int FUNC_18 (struct device*,struct spi_master*) ;
 scalar_t__ FUNC_19 (int,int) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct pl022*) ;
 int FUNC_22 (struct device_node*,char*,int) ;
 int VAR_11 ;
 int FUNC_23 (struct pl022*) ;
 int FUNC_24 (struct pl022*) ;
 int FUNC_25 (struct pl022*) ;
 int VAR_12 ;
 struct pl022_ssp_controller* FUNC_26 (struct device*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct device*,int ) ;
 int FUNC_29 (struct device*) ;
 int VAR_16 ;
 int FUNC_30 (int ) ;
 int FUNC_31 (TYPE_3__*) ;
 struct spi_master* FUNC_32 (struct device*,int) ;
 struct pl022* FUNC_33 (struct spi_master*) ;
 int FUNC_34 (struct spi_master*) ;
 int FUNC_35 (int *,int ,unsigned long) ;
 int FUNC_36 (int,int ) ;

__attribute__((used)) static int FUNC_37(struct amba_device *VAR_17, const struct amba_id *VAR_18)
{
 struct device *VAR_19 = &VAR_17->dev;
 struct pl022_ssp_controller *VAR_20 =
   FUNC_11(&VAR_17->dev);
 struct spi_master *VAR_21;
 struct pl022 *VAR_22 = ((void*)0);
 struct device_node *VAR_23 = VAR_17->dev.of_node;
 int VAR_24 = 0, VAR_25, VAR_26;

 FUNC_12(&VAR_17->dev,
   "ARM PL022 driver, device ID: 0x%08x\n", VAR_17->periphid);
 if (!VAR_20 && FUNC_0(VAR_0))
  VAR_20 = FUNC_26(VAR_19);

 if (!VAR_20) {
  FUNC_10(VAR_19, "probe: no platform data defined\n");
  return -VAR_1;
 }

 if (VAR_20->num_chipselect) {
  VAR_26 = VAR_20->num_chipselect;
 } else {
  FUNC_10(VAR_19, "probe: no chip select defined\n");
  return -VAR_1;
 }


 VAR_21 = FUNC_32(VAR_19, sizeof(struct pl022));
 if (VAR_21 == ((void*)0)) {
  FUNC_10(&VAR_17->dev, "probe - cannot alloc SPI master\n");
  return -VAR_2;
 }

 VAR_22 = FUNC_33(VAR_21);
 VAR_22->master = VAR_21;
 VAR_22->master_info = VAR_20;
 VAR_22->adev = VAR_17;
 VAR_22->vendor = VAR_18->data;
 VAR_22->chipselects = FUNC_16(VAR_19, VAR_26, sizeof(int),
       VAR_4);
 if (!VAR_22->chipselects) {
  VAR_24 = -VAR_2;
  goto err_no_mem;
 }





 VAR_21->bus_num = VAR_20->bus_id;
 VAR_21->num_chipselect = VAR_26;
 VAR_21->cleanup = VAR_11;
 VAR_21->setup = VAR_13;
 VAR_21->auto_runtime_pm = 1;
 VAR_21->transfer_one_message = VAR_14;
 VAR_21->unprepare_transfer_hardware = VAR_15;
 VAR_21->rt = VAR_20->rt;
 VAR_21->dev.of_node = VAR_19->of_node;

 if (VAR_20->num_chipselect && VAR_20->chipselects) {
  for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++)
   VAR_22->chipselects[VAR_25] = VAR_20->chipselects[VAR_25];
 } else if (VAR_22->vendor->internal_cs_ctrl) {
  for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++)
   VAR_22->chipselects[VAR_25] = VAR_25;
 } else if (FUNC_0(VAR_0)) {
  for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++) {
   int VAR_27 = FUNC_22(VAR_23, "cs-gpios", VAR_25);

   if (VAR_27 == -VAR_3) {
    VAR_24 = -VAR_3;
    goto err_no_gpio;
   }

   VAR_22->chipselects[VAR_25] = VAR_27;

   if (FUNC_20(VAR_27)) {
    if (FUNC_14(VAR_19, VAR_27, "ssp-pl022"))
     FUNC_10(&VAR_17->dev,
      "could not request %d gpio\n",
      VAR_27);
    else if (FUNC_19(VAR_27, 1))
     FUNC_10(&VAR_17->dev,
      "could not set gpio %d as output\n",
      VAR_27);
   }
  }
 }





 VAR_21->mode_bits = VAR_6 | VAR_5 | VAR_7 | VAR_8;
 if (VAR_22->vendor->extended_cr)
  VAR_21->mode_bits |= VAR_9;

 FUNC_9(&VAR_17->dev, "BUSNO: %d\n", VAR_21->bus_num);

 VAR_24 = FUNC_5(VAR_17, ((void*)0));
 if (VAR_24)
  goto err_no_ioregion;

 VAR_22->phybase = VAR_17->res.start;
 VAR_22->virtbase = FUNC_15(VAR_19, VAR_17->res.start,
           FUNC_31(&VAR_17->res));
 if (VAR_22->virtbase == ((void*)0)) {
  VAR_24 = -VAR_2;
  goto err_no_ioremap;
 }
 FUNC_12(&VAR_17->dev, "mapped registers from %pa to %p\n",
  VAR_17->res.start, VAR_22->virtbase);

 VAR_22->clk = FUNC_13(&VAR_17->dev, ((void*)0));
 if (FUNC_1(VAR_22->clk)) {
  VAR_24 = FUNC_2(VAR_22->clk);
  FUNC_10(&VAR_17->dev, "could not retrieve SSP/SPI bus clock\n");
  goto err_no_clk;
 }

 VAR_24 = FUNC_8(VAR_22->clk);
 if (VAR_24) {
  FUNC_10(&VAR_17->dev, "could not enable SSP/SPI bus clock\n");
  goto err_no_clk_en;
 }


 FUNC_35(&VAR_22->pump_transfers, VAR_16,
       (unsigned long)VAR_22);


 FUNC_36((FUNC_30(FUNC_3(VAR_22->virtbase)) & (~VAR_10)),
        FUNC_3(VAR_22->virtbase));
 FUNC_21(VAR_22);

 VAR_24 = FUNC_17(VAR_19, VAR_17->irq[0], VAR_12,
      0, "pl022", VAR_22);
 if (VAR_24 < 0) {
  FUNC_10(&VAR_17->dev, "probe - cannot get IRQ (%d)\n", VAR_24);
  goto err_no_irq;
 }


 VAR_24 = FUNC_23(VAR_22);
 if (VAR_24 == -VAR_3) {
  FUNC_9(VAR_19, "deferring probe to get DMA channel\n");
  goto err_no_irq;
 }


 if (VAR_24 == 0)
  VAR_20->enable_dma = 1;
 else if (VAR_20->enable_dma) {
  VAR_24 = FUNC_24(VAR_22);
  if (VAR_24 != 0)
   VAR_20->enable_dma = 0;
 }


 FUNC_6(VAR_17, VAR_22);
 VAR_24 = FUNC_18(&VAR_17->dev, VAR_21);
 if (VAR_24 != 0) {
  FUNC_10(&VAR_17->dev,
   "probe - problem registering spi master\n");
  goto err_spi_register;
 }
 FUNC_9(VAR_19, "probe succeeded\n");


 if (VAR_20->autosuspend_delay > 0) {
  FUNC_12(&VAR_17->dev,
   "will use autosuspend for runtime pm, delay %dms\n",
   VAR_20->autosuspend_delay);
  FUNC_28(VAR_19,
   VAR_20->autosuspend_delay);
  FUNC_29(VAR_19);
 }
 FUNC_27(VAR_19);

 return 0;

 err_spi_register:
 if (VAR_20->enable_dma)
  FUNC_25(VAR_22);
 err_no_irq:
 FUNC_7(VAR_22->clk);
 err_no_clk_en:
 err_no_clk:
 err_no_ioremap:
 FUNC_4(VAR_17);
 err_no_ioregion:
 err_no_gpio:
 err_no_mem:
 FUNC_34(VAR_21);
 return VAR_24;
}
