
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * ops; } ;
struct TYPE_5__ {int strength; int size; int mode; } ;
struct nand_chip {int options; TYPE_2__ ecc; TYPE_3__* controller; } ;
struct stm32_fmc2_nand {int ncs; struct nand_chip chip; } ;
struct stm32_fmc2_nfc {int cs_assigned; struct reset_control* clk; int dma_ecc_sg; int dma_data_sg; scalar_t__ dma_rx_ch; scalar_t__ dma_tx_ch; scalar_t__ dma_ecc_ch; TYPE_3__ base; struct stm32_fmc2_nand nand; int complete; struct reset_control** addr_base; struct reset_control** cmd_base; int * data_phys_addr; struct reset_control** data_base; int io_phys_addr; struct reset_control* io_base; struct device* dev; } ;
struct resource {int start; } ;
struct reset_control {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {struct device* parent; } ;
struct mtd_info {TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct reset_control*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct reset_control*) ;
 int FUNC_4 (struct reset_control*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*) ;
 struct reset_control* FUNC_7 (struct device*,int *) ;
 void* FUNC_8 (struct device*,struct resource*) ;
 struct stm32_fmc2_nfc* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,int,int ,int ,int ,struct stm32_fmc2_nfc*) ;
 struct reset_control* FUNC_11 (struct device*,int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct mtd_info*,int *,int ) ;
 int FUNC_15 (struct nand_chip*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (struct nand_chip*,int ) ;
 struct mtd_info* FUNC_18 (struct nand_chip*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int) ;
 int FUNC_21 (struct platform_device*,struct stm32_fmc2_nfc*) ;
 int FUNC_22 (struct reset_control*) ;
 int FUNC_23 (struct reset_control*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct stm32_fmc2_nfc*) ;
 int FUNC_26 (struct stm32_fmc2_nfc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_27 (struct stm32_fmc2_nfc*) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct reset_control *VAR_15;
 struct stm32_fmc2_nfc *VAR_16;
 struct stm32_fmc2_nand *VAR_17;
 struct resource *VAR_18;
 struct mtd_info *VAR_19;
 struct nand_chip *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_16 = FUNC_9(VAR_14, sizeof(*VAR_16), VAR_5);
 if (!VAR_16)
  return -VAR_0;

 VAR_16->dev = VAR_14;
 FUNC_16(&VAR_16->base);
 VAR_16->base.ops = &VAR_12;

 VAR_23 = FUNC_27(VAR_16);
 if (VAR_23)
  return VAR_23;

 VAR_18 = FUNC_20(VAR_13, VAR_6, 0);
 VAR_16->io_base = FUNC_8(VAR_14, VAR_18);
 if (FUNC_1(VAR_16->io_base))
  return FUNC_2(VAR_16->io_base);

 VAR_16->io_phys_addr = VAR_18->start;

 for (VAR_21 = 0, VAR_22 = 1; VAR_21 < VAR_4;
      VAR_21++, VAR_22 += 3) {
  if (!(VAR_16->cs_assigned & FUNC_0(VAR_21)))
   continue;

  VAR_18 = FUNC_20(VAR_13, VAR_6, VAR_22);
  VAR_16->data_base[VAR_21] = FUNC_8(VAR_14, VAR_18);
  if (FUNC_1(VAR_16->data_base[VAR_21]))
   return FUNC_2(VAR_16->data_base[VAR_21]);

  VAR_16->data_phys_addr[VAR_21] = VAR_18->start;

  VAR_18 = FUNC_20(VAR_13, VAR_6,
         VAR_22 + 1);
  VAR_16->cmd_base[VAR_21] = FUNC_8(VAR_14, VAR_18);
  if (FUNC_1(VAR_16->cmd_base[VAR_21]))
   return FUNC_2(VAR_16->cmd_base[VAR_21]);

  VAR_18 = FUNC_20(VAR_13, VAR_6,
         VAR_22 + 2);
  VAR_16->addr_base[VAR_21] = FUNC_8(VAR_14, VAR_18);
  if (FUNC_1(VAR_16->addr_base[VAR_21]))
   return FUNC_2(VAR_16->addr_base[VAR_21]);
 }

 VAR_24 = FUNC_19(VAR_13, 0);
 if (VAR_24 < 0) {
  if (VAR_24 != -VAR_1)
   FUNC_5(VAR_14, "IRQ error missing or invalid\n");
  return VAR_24;
 }

 VAR_23 = FUNC_10(VAR_14, VAR_24, VAR_11, 0,
          FUNC_6(VAR_14), VAR_16);
 if (VAR_23) {
  FUNC_5(VAR_14, "failed to request irq\n");
  return VAR_23;
 }

 FUNC_13(&VAR_16->complete);

 VAR_16->clk = FUNC_7(VAR_14, ((void*)0));
 if (FUNC_1(VAR_16->clk))
  return FUNC_2(VAR_16->clk);

 VAR_23 = FUNC_4(VAR_16->clk);
 if (VAR_23) {
  FUNC_5(VAR_14, "can not enable the clock\n");
  return VAR_23;
 }

 VAR_15 = FUNC_11(VAR_14, ((void*)0));
 if (!FUNC_1(VAR_15)) {
  FUNC_22(VAR_15);
  FUNC_23(VAR_15);
 }


 VAR_23 = FUNC_25(VAR_16);
 if (VAR_23)
  return VAR_23;


 FUNC_26(VAR_16);

 VAR_17 = &VAR_16->nand;
 VAR_20 = &VAR_17->chip;
 VAR_19 = FUNC_18(VAR_20);
 VAR_19->dev.parent = VAR_14;

 VAR_20->controller = &VAR_16->base;
 VAR_20->options |= VAR_7 | VAR_9 |
    VAR_10;


 VAR_20->ecc.mode = VAR_8;
 VAR_20->ecc.size = VAR_3;
 VAR_20->ecc.strength = VAR_2;


 VAR_23 = FUNC_17(VAR_20, VAR_17->ncs);
 if (VAR_23)
  goto err_scan;

 VAR_23 = FUNC_14(VAR_19, ((void*)0), 0);
 if (VAR_23)
  goto err_device_register;

 FUNC_21(VAR_13, VAR_16);

 return 0;

err_device_register:
 FUNC_15(VAR_20);

err_scan:
 if (VAR_16->dma_ecc_ch)
  FUNC_12(VAR_16->dma_ecc_ch);
 if (VAR_16->dma_tx_ch)
  FUNC_12(VAR_16->dma_tx_ch);
 if (VAR_16->dma_rx_ch)
  FUNC_12(VAR_16->dma_rx_ch);

 FUNC_24(&VAR_16->dma_data_sg);
 FUNC_24(&VAR_16->dma_ecc_sg);

 FUNC_3(VAR_16->clk);

 return VAR_23;
}
