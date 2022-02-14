
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_17__ {int of_node; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_14__ {int * ops; } ;
struct TYPE_15__ {int chip_delay; TYPE_3__ dummy_controller; int waitfunc; void* IO_ADDR_W; void* IO_ADDR_R; int dev_ready; int cmd_ctrl; } ;
struct TYPE_13__ {int strength; int bytes; int read_oob; int write_oob; void* write_page; void* write_page_raw; void* read_page; void* read_page_raw; int hwctl; } ;
struct nand_chip {int bbt_options; TYPE_4__ legacy; int * bbt_md; int * bbt_td; int options; TYPE_2__ ecc; } ;
struct TYPE_12__ {TYPE_6__* parent; } ;
struct mtd_info {int name; TYPE_1__ dev; } ;
struct lpc32xx_nand_host {scalar_t__ irq; TYPE_5__* ncfg; int clk; int dma_chan; int comp_controller; int comp_nand; int io_base; int pdata; struct nand_chip nand_chip; int io_base_phy; struct platform_device* pdev; } ;
typedef int irq_handler_t ;
struct TYPE_16__ {int wp_gpio; int num_parts; int parts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,char*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*,struct resource*) ;
 struct lpc32xx_nand_host* FUNC_11 (TYPE_6__*,int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__,struct lpc32xx_nand_host*) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct lpc32xx_nand_host*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_19 (struct lpc32xx_nand_host*) ;
 TYPE_5__* FUNC_20 (TYPE_6__*) ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int FUNC_21 (struct lpc32xx_nand_host*) ;
 int FUNC_22 (struct lpc32xx_nand_host*) ;
 int VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int FUNC_23 (struct mtd_info*,int ,int ) ;
 int FUNC_24 (struct nand_chip*) ;
 int FUNC_25 (struct nand_chip*,int) ;
 int FUNC_26 (struct nand_chip*,struct lpc32xx_nand_host*) ;
 int FUNC_27 (struct nand_chip*,int ) ;
 struct mtd_info* FUNC_28 (struct nand_chip*) ;
 scalar_t__ FUNC_29 (struct platform_device*,int ) ;
 struct resource* FUNC_30 (struct platform_device*,int ,int ) ;
 int FUNC_31 (struct platform_device*,struct lpc32xx_nand_host*) ;
 int FUNC_32 (int ) ;
 scalar_t__ FUNC_33 (scalar_t__,int ,int ,int ,struct lpc32xx_nand_host*) ;
 scalar_t__ VAR_26 ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_27)
{
 struct lpc32xx_nand_host *VAR_28;
 struct mtd_info *VAR_29;
 struct nand_chip *VAR_30;
 struct resource *VAR_31;
 int VAR_32;


 VAR_28 = FUNC_11(&VAR_27->dev, sizeof(*VAR_28), VAR_8);
 if (!VAR_28)
  return -VAR_5;

 VAR_28->pdev = VAR_27;

 VAR_31 = FUNC_30(VAR_27, VAR_9, 0);
 VAR_28->io_base = FUNC_10(&VAR_27->dev, VAR_31);
 if (FUNC_0(VAR_28->io_base))
  return FUNC_3(VAR_28->io_base);

 VAR_28->io_base_phy = VAR_31->start;

 VAR_30 = &VAR_28->nand_chip;
 VAR_29 = FUNC_28(VAR_30);
 if (VAR_27->dev.of_node)
  VAR_28->ncfg = FUNC_20(&VAR_27->dev);
 if (!VAR_28->ncfg) {
  FUNC_8(&VAR_27->dev,
   "Missing or bad NAND config from device tree\n");
  return -VAR_4;
 }
 if (VAR_28->ncfg->wp_gpio == -VAR_7)
  return -VAR_7;
 if (FUNC_15(VAR_28->ncfg->wp_gpio) &&
   FUNC_16(VAR_28->ncfg->wp_gpio, "NAND WP")) {
  FUNC_8(&VAR_27->dev, "GPIO not available\n");
  return -VAR_1;
 }
 FUNC_21(VAR_28);

 VAR_28->pdata = FUNC_9(&VAR_27->dev);


 FUNC_26(VAR_30, VAR_28);
 FUNC_27(VAR_30, VAR_27->dev.of_node);
 VAR_29->dev.parent = &VAR_27->dev;


 VAR_28->clk = FUNC_5(&VAR_27->dev, ((void*)0));
 if (FUNC_0(VAR_28->clk)) {
  FUNC_8(&VAR_27->dev, "Clock initialization failure\n");
  VAR_32 = -VAR_4;
  goto free_gpio;
 }
 VAR_32 = FUNC_6(VAR_28->clk);
 if (VAR_32)
  goto put_clk;

 VAR_30->legacy.cmd_ctrl = VAR_17;
 VAR_30->legacy.dev_ready = VAR_19;
 VAR_30->legacy.chip_delay = 25;
 VAR_30->legacy.IO_ADDR_R = FUNC_1(VAR_28->io_base);
 VAR_30->legacy.IO_ADDR_W = FUNC_1(VAR_28->io_base);


 FUNC_19(VAR_28);

 FUNC_31(VAR_27, VAR_28);


 VAR_30->ecc.hwctl = VAR_14;
 VAR_30->ecc.read_page_raw = VAR_21;
 VAR_30->ecc.read_page = VAR_21;
 VAR_30->ecc.write_page_raw = VAR_24;
 VAR_30->ecc.write_page = VAR_24;
 VAR_30->ecc.write_oob = VAR_23;
 VAR_30->ecc.read_oob = VAR_20;
 VAR_30->ecc.strength = 4;
 VAR_30->ecc.bytes = 10;
 VAR_30->legacy.waitfunc = VAR_22;

 VAR_30->options = VAR_13;
 VAR_30->bbt_options = VAR_12 | VAR_11;
 VAR_30->bbt_td = &VAR_15;
 VAR_30->bbt_md = &VAR_16;

 if (VAR_26) {
  VAR_32 = FUNC_18(VAR_28);
  if (VAR_32) {
   VAR_32 = -VAR_3;
   goto unprepare_clk;
  }
 }


 FUNC_32(FUNC_2(VAR_28->io_base));

 FUNC_17(&VAR_28->comp_nand);
 FUNC_17(&VAR_28->comp_controller);

 VAR_28->irq = FUNC_29(VAR_27, 0);
 if (VAR_28->irq < 0) {
  FUNC_8(&VAR_27->dev, "failed to get platform irq\n");
  VAR_32 = -VAR_2;
  goto release_dma_chan;
 }

 if (FUNC_33(VAR_28->irq, (irq_handler_t)&VAR_25,
   VAR_10, VAR_0, VAR_28)) {
  FUNC_8(&VAR_27->dev, "Error requesting NAND IRQ\n");
  VAR_32 = -VAR_6;
  goto release_dma_chan;
 }





 VAR_30->legacy.dummy_controller.ops = &VAR_18;
 VAR_32 = FUNC_25(VAR_30, 1);
 if (VAR_32)
  goto free_irq;

 VAR_29->name = VAR_0;

 VAR_32 = FUNC_23(VAR_29, VAR_28->ncfg->parts,
      VAR_28->ncfg->num_parts);
 if (VAR_32)
  goto cleanup_nand;

 return 0;

cleanup_nand:
 FUNC_24(VAR_30);
free_irq:
 FUNC_13(VAR_28->irq, VAR_28);
release_dma_chan:
 if (VAR_26)
  FUNC_12(VAR_28->dma_chan);
unprepare_clk:
 FUNC_4(VAR_28->clk);
put_clk:
 FUNC_7(VAR_28->clk);
free_gpio:
 FUNC_22(VAR_28);
 FUNC_14(VAR_28->ncfg->wp_gpio);

 return VAR_32;
}
