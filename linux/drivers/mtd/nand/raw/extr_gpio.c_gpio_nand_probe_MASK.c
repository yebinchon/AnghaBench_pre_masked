
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {int cmd_ctrl; int chip_delay; void* IO_ADDR_R; void* IO_ADDR_W; int dev_ready; } ;
struct TYPE_6__ {int algo; int mode; } ;
struct nand_chip {TYPE_2__ legacy; int options; TYPE_1__ ecc; } ;
struct TYPE_8__ {struct device* parent; } ;
struct mtd_info {int size; TYPE_3__ dev; } ;
struct TYPE_9__ {int num_parts; int parts; int (* adjust_parts ) (TYPE_4__*,int ) ;int chip_delay; int options; } ;
struct gpiomtd {void* nce; void* nwp; TYPE_4__ plat; void* rdy; void* cle; void* ale; void* io_sync; struct nand_chip nand_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*) ;
 void* FUNC_3 (struct device*,char*,int ) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 void* FUNC_5 (struct device*,struct resource*) ;
 struct gpiomtd* FUNC_6 (struct device*,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct device*,TYPE_4__*) ;
 struct resource* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (struct mtd_info*,int ,int ) ;
 int FUNC_12 (struct nand_chip*,int) ;
 int FUNC_13 (struct nand_chip*,int ) ;
 struct mtd_info* FUNC_14 (struct nand_chip*) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct gpiomtd*) ;
 int FUNC_17 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_11)
{
 struct gpiomtd *VAR_12;
 struct nand_chip *VAR_13;
 struct mtd_info *VAR_14;
 struct resource *VAR_15;
 struct device *VAR_16 = &VAR_11->dev;
 int VAR_17 = 0;

 if (!VAR_16->of_node && !FUNC_2(VAR_16))
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_16, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = &VAR_12->nand_chip;

 VAR_15 = FUNC_15(VAR_11, VAR_6, 0);
 VAR_13->legacy.IO_ADDR_R = FUNC_5(VAR_16, VAR_15);
 if (FUNC_0(VAR_13->legacy.IO_ADDR_R))
  return FUNC_1(VAR_13->legacy.IO_ADDR_R);

 VAR_15 = FUNC_8(VAR_11);
 if (VAR_15) {
  VAR_12->io_sync = FUNC_5(VAR_16, VAR_15);
  if (FUNC_0(VAR_12->io_sync))
   return FUNC_1(VAR_12->io_sync);
 }

 VAR_17 = FUNC_7(VAR_16, &VAR_12->plat);
 if (VAR_17)
  return VAR_17;


 VAR_12->nce = FUNC_4(VAR_16, "nce", VAR_4);
 if (FUNC_0(VAR_12->nce))
  return FUNC_1(VAR_12->nce);


 VAR_12->nwp = FUNC_4(VAR_16, "nwp", VAR_5);
 if (FUNC_0(VAR_12->nwp)) {
  VAR_17 = FUNC_1(VAR_12->nwp);
  goto out_ce;
 }

 VAR_12->ale = FUNC_3(VAR_16, "ale", VAR_5);
 if (FUNC_0(VAR_12->ale)) {
  VAR_17 = FUNC_1(VAR_12->ale);
  goto out_ce;
 }

 VAR_12->cle = FUNC_3(VAR_16, "cle", VAR_5);
 if (FUNC_0(VAR_12->cle)) {
  VAR_17 = FUNC_1(VAR_12->cle);
  goto out_ce;
 }

 VAR_12->rdy = FUNC_4(VAR_16, "rdy", VAR_3);
 if (FUNC_0(VAR_12->rdy)) {
  VAR_17 = FUNC_1(VAR_12->rdy);
  goto out_ce;
 }

 if (VAR_12->rdy)
  VAR_13->legacy.dev_ready = VAR_10;

 FUNC_13(VAR_13, VAR_11->dev.of_node);
 VAR_13->legacy.IO_ADDR_W = VAR_13->legacy.IO_ADDR_R;
 VAR_13->ecc.mode = VAR_8;
 VAR_13->ecc.algo = VAR_7;
 VAR_13->options = VAR_12->plat.options;
 VAR_13->legacy.chip_delay = VAR_12->plat.chip_delay;
 VAR_13->legacy.cmd_ctrl = VAR_9;

 VAR_14 = FUNC_14(VAR_13);
 VAR_14->dev.parent = VAR_16;

 FUNC_16(VAR_11, VAR_12);


 if (VAR_12->nwp && !FUNC_0(VAR_12->nwp))
  FUNC_9(VAR_12->nwp, 1);

 VAR_17 = FUNC_12(VAR_13, 1);
 if (VAR_17)
  goto err_wp;

 if (VAR_12->plat.adjust_parts)
  VAR_12->plat.adjust_parts(&VAR_12->plat, VAR_14->size);

 VAR_17 = FUNC_11(VAR_14, VAR_12->plat.parts,
      VAR_12->plat.num_parts);
 if (!VAR_17)
  return 0;

err_wp:
 if (VAR_12->nwp && !FUNC_0(VAR_12->nwp))
  FUNC_10(VAR_12->nwp, 0);
out_ce:
 if (VAR_12->nce && !FUNC_0(VAR_12->nce))
  FUNC_10(VAR_12->nce, 0);

 return VAR_17;
}
