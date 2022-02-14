
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_18__ {int of_node; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_15__ {int * ops; } ;
struct TYPE_16__ {int chip_delay; TYPE_3__ dummy_controller; int write_buf; int read_buf; int read_byte; int dev_ready; int cmd_ctrl; void* IO_ADDR_W; void* IO_ADDR_R; } ;
struct TYPE_14__ {int strength; int hwctl; int correct; int calculate; int read_oob; int write_oob; int write_page; int write_page_raw; int read_page; int read_page_raw; int mode; } ;
struct nand_chip {TYPE_4__ legacy; TYPE_2__ ecc; } ;
struct TYPE_13__ {TYPE_6__* parent; } ;
struct mtd_info {char* name; TYPE_1__ dev; int owner; } ;
struct lpc32xx_nand_host {int dma_buf_len; int clk; int dma_chan; TYPE_5__* ncfg; int * data_buf; int io_base; struct nand_chip nand_chip; int pdata; int io_base_dma; } ;
struct TYPE_17__ {int wp_gpio; int num_parts; int parts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*,char*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_6__*,int,char*) ;
 int FUNC_9 (TYPE_6__*,struct resource*) ;
 void* FUNC_10 (TYPE_6__*,int,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (struct lpc32xx_nand_host*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_14 (struct lpc32xx_nand_host*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_5__* FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (struct lpc32xx_nand_host*) ;
 int FUNC_17 (struct lpc32xx_nand_host*) ;
 int FUNC_18 (struct mtd_info*,int ,int ) ;
 int FUNC_19 (struct nand_chip*) ;
 int VAR_25 ;
 int FUNC_20 (struct nand_chip*,int) ;
 int FUNC_21 (struct nand_chip*,struct lpc32xx_nand_host*) ;
 int FUNC_22 (struct nand_chip*,int ) ;
 struct mtd_info* FUNC_23 (struct nand_chip*) ;
 struct resource* FUNC_24 (struct platform_device*,int ,int ) ;
 int FUNC_25 (struct platform_device*,struct lpc32xx_nand_host*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_26)
{
 struct lpc32xx_nand_host *VAR_27;
 struct mtd_info *VAR_28;
 struct nand_chip *VAR_29;
 struct resource *VAR_30;
 int VAR_31;


 VAR_27 = FUNC_10(&VAR_26->dev, sizeof(*VAR_27), VAR_5);
 if (!VAR_27)
  return -VAR_3;

 VAR_30 = FUNC_24(VAR_26, VAR_6, 0);
 VAR_27->io_base = FUNC_9(&VAR_26->dev, VAR_30);
 if (FUNC_0(VAR_27->io_base))
  return FUNC_1(VAR_27->io_base);

 VAR_27->io_base_dma = VAR_30->start;
 if (VAR_26->dev.of_node)
  VAR_27->ncfg = FUNC_15(&VAR_26->dev);
 if (!VAR_27->ncfg) {
  FUNC_5(&VAR_26->dev,
   "Missing or bad NAND config from device tree\n");
  return -VAR_2;
 }
 if (VAR_27->ncfg->wp_gpio == -VAR_4)
  return -VAR_4;
 if (FUNC_12(VAR_27->ncfg->wp_gpio) && FUNC_8(&VAR_26->dev,
   VAR_27->ncfg->wp_gpio, "NAND WP")) {
  FUNC_5(&VAR_26->dev, "GPIO not available\n");
  return -VAR_0;
 }
 FUNC_16(VAR_27);

 VAR_27->pdata = FUNC_6(&VAR_26->dev);

 VAR_29 = &VAR_27->nand_chip;
 VAR_28 = FUNC_23(VAR_29);
 FUNC_21(VAR_29, VAR_27);
 FUNC_22(VAR_29, VAR_26->dev.of_node);
 VAR_28->owner = VAR_10;
 VAR_28->dev.parent = &VAR_26->dev;


 VAR_27->clk = FUNC_7(&VAR_26->dev, ((void*)0));
 if (FUNC_0(VAR_27->clk)) {
  FUNC_5(&VAR_26->dev, "Clock failure\n");
  VAR_31 = -VAR_2;
  goto enable_wp;
 }
 VAR_31 = FUNC_4(VAR_27->clk);
 if (VAR_31)
  goto enable_wp;


 VAR_29->legacy.IO_ADDR_R = FUNC_2(VAR_27->io_base);
 VAR_29->legacy.IO_ADDR_W = FUNC_2(VAR_27->io_base);
 VAR_29->legacy.cmd_ctrl = VAR_11;
 VAR_29->legacy.dev_ready = VAR_13;
 VAR_29->legacy.chip_delay = 20;


 FUNC_14(VAR_27);

 FUNC_25(VAR_26, VAR_27);


 VAR_29->ecc.mode = VAR_9;
 VAR_29->legacy.read_byte = VAR_17;
 VAR_29->legacy.read_buf = VAR_16;
 VAR_29->legacy.write_buf = VAR_21;
 VAR_29->ecc.read_page_raw = VAR_19;
 VAR_29->ecc.read_page = VAR_20;
 VAR_29->ecc.write_page_raw = VAR_23;
 VAR_29->ecc.write_page = VAR_24;
 VAR_29->ecc.write_oob = VAR_22;
 VAR_29->ecc.read_oob = VAR_18;
 VAR_29->ecc.calculate = VAR_14;
 VAR_29->ecc.correct = VAR_25;
 VAR_29->ecc.strength = 1;
 VAR_29->ecc.hwctl = VAR_15;





 VAR_27->dma_buf_len = VAR_7 + VAR_8;
 VAR_27->data_buf = FUNC_10(&VAR_26->dev, VAR_27->dma_buf_len,
          VAR_5);
 if (VAR_27->data_buf == ((void*)0)) {
  VAR_31 = -VAR_3;
  goto unprepare_clk;
 }

 VAR_31 = FUNC_13(VAR_27);
 if (VAR_31) {
  VAR_31 = -VAR_1;
  goto unprepare_clk;
 }


 VAR_29->legacy.dummy_controller.ops = &VAR_12;
 VAR_31 = FUNC_20(VAR_29, 1);
 if (VAR_31)
  goto release_dma;

 VAR_28->name = "nxp_lpc3220_slc";
 VAR_31 = FUNC_18(VAR_28, VAR_27->ncfg->parts,
      VAR_27->ncfg->num_parts);
 if (VAR_31)
  goto cleanup_nand;

 return 0;

cleanup_nand:
 FUNC_19(VAR_29);
release_dma:
 FUNC_11(VAR_27->dma_chan);
unprepare_clk:
 FUNC_3(VAR_27->clk);
enable_wp:
 FUNC_17(VAR_27);

 return VAR_31;
}
