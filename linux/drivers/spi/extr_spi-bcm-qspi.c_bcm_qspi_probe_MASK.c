
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {scalar_t__ of_node; } ;
struct spi_master {int bus_num; int mode_bits; int num_chipselect; TYPE_3__ dev; int cleanup; int * mem_ops; int transfer_one; int setup; } ;
struct resource {int dummy; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct bcm_qspi_soc_intc {int (* bcm_qspi_int_set ) (struct bcm_qspi_soc_intc*,int ,int) ;} ;
struct bcm_qspi_dev_id {int dummy; } ;
struct TYPE_9__ {int width; int addrlen; int hp; } ;
struct TYPE_10__ {int mspi_last_trans; scalar_t__ byte; int * trans; } ;
struct bcm_qspi {int bspi_mode; int base_clk; int max_speed_hz; int curr_cs; TYPE_5__* dev_ids; void* clk; TYPE_1__ xfer_mode; int bspi_done; int mspi_done; struct bcm_qspi_soc_intc* soc_intc; void** base; int big_endian; struct spi_master* master; TYPE_2__ trans_pos; struct platform_device* pdev; } ;
struct TYPE_13__ {TYPE_4__* irqp; struct bcm_qspi* dev; } ;
struct TYPE_12__ {char* irq_name; scalar_t__ irq_source; int irq_handler; } ;


 int FUNC_0 (TYPE_4__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (void*) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (void*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct bcm_qspi*) ;
 int FUNC_4 (struct bcm_qspi*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct device*,char*,char*,int) ;
 int FUNC_9 (struct device*,char*,...) ;
 int FUNC_10 (struct device*,char*,char*) ;
 int FUNC_11 (struct device*,char*) ;
 void* FUNC_12 (struct device*,int *) ;
 void* FUNC_13 (struct device*,struct resource*) ;
 int FUNC_14 (struct device*,int,int ,int ,char const*,TYPE_5__*) ;
 int FUNC_15 (struct device*,struct spi_master*) ;
 int FUNC_16 (int *) ;
 TYPE_5__* FUNC_17 (int,int,int ) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int ,scalar_t__) ;
 int FUNC_21 (scalar_t__,char*,int*) ;
 int FUNC_22 (struct platform_device*,int ) ;
 int FUNC_23 (struct platform_device*,char const*) ;
 struct resource* FUNC_24 (struct platform_device*,int ,char*) ;
 int FUNC_25 (struct platform_device*,struct bcm_qspi*) ;
 TYPE_4__* VAR_21 ;
 struct spi_master* FUNC_26 (struct device*,int) ;
 struct bcm_qspi* FUNC_27 (struct spi_master*) ;
 int FUNC_28 (struct spi_master*) ;
 int FUNC_29 (struct bcm_qspi_soc_intc*,int ,int) ;

int FUNC_30(struct platform_device *VAR_22,
     struct bcm_qspi_soc_intc *VAR_23)
{
 struct device *VAR_24 = &VAR_22->dev;
 struct bcm_qspi *VAR_25;
 struct spi_master *VAR_26;
 struct resource *VAR_27;
 int VAR_28, VAR_29 = 0, VAR_30 = 0;
 u32 VAR_31;
 const char *VAR_32 = ((void*)0);
 int VAR_33 = FUNC_0(VAR_21);


 if (!VAR_24->of_node)
  return -VAR_3;

 if (!FUNC_20(VAR_18, VAR_24->of_node))
  return -VAR_3;

 VAR_26 = FUNC_26(VAR_24, sizeof(struct bcm_qspi));
 if (!VAR_26) {
  FUNC_9(VAR_24, "error allocating spi_master\n");
  return -VAR_4;
 }

 VAR_25 = FUNC_27(VAR_26);
 VAR_25->pdev = VAR_22;
 VAR_25->trans_pos.trans = ((void*)0);
 VAR_25->trans_pos.byte = 0;
 VAR_25->trans_pos.mspi_last_trans = 1;
 VAR_25->master = VAR_26;

 VAR_26->bus_num = -1;
 VAR_26->mode_bits = VAR_12 | VAR_13 | VAR_14 | VAR_15;
 VAR_26->setup = VAR_19;
 VAR_26->transfer_one = VAR_20;
 VAR_26->mem_ops = &VAR_17;
 VAR_26->cleanup = VAR_16;
 VAR_26->dev.of_node = VAR_24->of_node;
 VAR_26->num_chipselect = VAR_9;

 VAR_25->big_endian = FUNC_19(VAR_24->of_node);

 if (!FUNC_21(VAR_24->of_node, "num-cs", &VAR_31))
  VAR_26->num_chipselect = VAR_31;

 VAR_27 = FUNC_24(VAR_22, VAR_6, "hif_mspi");
 if (!VAR_27)
  VAR_27 = FUNC_24(VAR_22, VAR_6,
         "mspi");

 if (VAR_27) {
  VAR_25->base[VAR_7] = FUNC_13(VAR_24, VAR_27);
  if (FUNC_1(VAR_25->base[VAR_7])) {
   VAR_29 = FUNC_2(VAR_25->base[VAR_7]);
   goto qspi_resource_err;
  }
 } else {
  goto qspi_resource_err;
 }

 VAR_27 = FUNC_24(VAR_22, VAR_6, "bspi");
 if (VAR_27) {
  VAR_25->base[VAR_0] = FUNC_13(VAR_24, VAR_27);
  if (FUNC_1(VAR_25->base[VAR_0])) {
   VAR_29 = FUNC_2(VAR_25->base[VAR_0]);
   goto qspi_resource_err;
  }
  VAR_25->bspi_mode = 1;
 } else {
  VAR_25->bspi_mode = 0;
 }

 FUNC_10(VAR_24, "using %smspi mode\n", VAR_25->bspi_mode ? "bspi-" : "");

 VAR_27 = FUNC_24(VAR_22, VAR_6, "cs_reg");
 if (VAR_27) {
  VAR_25->base[VAR_1] = FUNC_13(VAR_24, VAR_27);
  if (FUNC_1(VAR_25->base[VAR_1])) {
   VAR_29 = FUNC_2(VAR_25->base[VAR_1]);
   goto qspi_resource_err;
  }
 }

 VAR_25->dev_ids = FUNC_17(VAR_33, sizeof(struct bcm_qspi_dev_id),
    VAR_5);
 if (!VAR_25->dev_ids) {
  VAR_29 = -VAR_4;
  goto qspi_resource_err;
 }

 for (VAR_31 = 0; VAR_31 < VAR_33; VAR_31++) {
  VAR_28 = -1;
  VAR_32 = VAR_21[VAR_31].irq_name;
  if (VAR_21[VAR_31].irq_source == VAR_11) {

   VAR_28 = FUNC_23(VAR_22, VAR_32);
  } else if (!VAR_30 && VAR_23) {

   VAR_28 = FUNC_22(VAR_22, 0);
  }

  if (VAR_28 >= 0) {
   VAR_29 = FUNC_14(&VAR_22->dev, VAR_28,
            VAR_21[VAR_31].irq_handler, 0,
            VAR_32,
            &VAR_25->dev_ids[VAR_31]);
   if (VAR_29 < 0) {
    FUNC_9(&VAR_22->dev, "IRQ %s not found\n", VAR_32);
    goto qspi_probe_err;
   }

   VAR_25->dev_ids[VAR_31].dev = VAR_25;
   VAR_25->dev_ids[VAR_31].irqp = &VAR_21[VAR_31];
   VAR_30++;
   FUNC_8(&VAR_22->dev, "registered IRQ %s %d\n",
    VAR_21[VAR_31].irq_name,
    VAR_28);
  }
 }

 if (!VAR_30) {
  FUNC_9(&VAR_22->dev, "no IRQs registered, cannot init driver\n");
  VAR_29 = -VAR_2;
  goto qspi_probe_err;
 }





 if (VAR_23) {
  VAR_25->soc_intc = VAR_23;
  VAR_23->bcm_qspi_int_set(VAR_23, VAR_8, 1);
 } else {
  VAR_25->soc_intc = ((void*)0);
 }

 VAR_25->clk = FUNC_12(&VAR_22->dev, ((void*)0));
 if (FUNC_1(VAR_25->clk)) {
  FUNC_11(VAR_24, "unable to get clock\n");
  VAR_29 = FUNC_2(VAR_25->clk);
  goto qspi_probe_err;
 }

 VAR_29 = FUNC_7(VAR_25->clk);
 if (VAR_29) {
  FUNC_9(VAR_24, "failed to prepare clock\n");
  goto qspi_probe_err;
 }

 VAR_25->base_clk = FUNC_6(VAR_25->clk);
 VAR_25->max_speed_hz = VAR_25->base_clk / (VAR_10 * 2);

 FUNC_3(VAR_25);
 FUNC_16(&VAR_25->mspi_done);
 FUNC_16(&VAR_25->bspi_done);
 VAR_25->curr_cs = -1;

 FUNC_25(VAR_22, VAR_25);

 VAR_25->xfer_mode.width = -1;
 VAR_25->xfer_mode.addrlen = -1;
 VAR_25->xfer_mode.hp = -1;

 VAR_29 = FUNC_15(&VAR_22->dev, VAR_26);
 if (VAR_29 < 0) {
  FUNC_9(VAR_24, "can't register master\n");
  goto qspi_reg_err;
 }

 return 0;

qspi_reg_err:
 FUNC_4(VAR_25);
 FUNC_5(VAR_25->clk);
qspi_probe_err:
 FUNC_18(VAR_25->dev_ids);
qspi_resource_err:
 FUNC_28(VAR_26);
 return VAR_29;
}
