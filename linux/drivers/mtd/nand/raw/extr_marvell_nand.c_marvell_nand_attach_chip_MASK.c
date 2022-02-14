
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pxa3xx_nand_platform_data {int ecc_strength; int ecc_step_size; scalar_t__ flash_bbt; } ;
struct TYPE_6__ {scalar_t__ mode; int strength; int size; } ;
struct nand_chip {int bbt_options; int options; TYPE_3__ ecc; int * bbt_md; int * bbt_td; int controller; } ;
struct mtd_info {int writesize; char* name; } ;
struct marvell_nfc {int dev; TYPE_1__* caps; } ;
struct marvell_nand_chip {int ndcr; int addr_cyc; TYPE_2__* sels; } ;
struct TYPE_5__ {int cs; } ;
struct TYPE_4__ {scalar_t__ legacy_of_bindings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,...) ;
 struct pxa3xx_nand_platform_data* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,int ,char*,int ,int ) ;
 int FUNC_5 (struct mtd_info*,TYPE_3__*) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;
 struct marvell_nand_chip* FUNC_7 (struct nand_chip*) ;
 struct marvell_nfc* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_13)
{
 struct mtd_info *VAR_14 = FUNC_6(VAR_13);
 struct marvell_nand_chip *VAR_15 = FUNC_7(VAR_13);
 struct marvell_nfc *VAR_16 = FUNC_8(VAR_13->controller);
 struct pxa3xx_nand_platform_data *VAR_17 = FUNC_2(VAR_16->dev);
 int VAR_18;

 if (VAR_17 && VAR_17->flash_bbt)
  VAR_13->bbt_options |= VAR_3;

 if (VAR_13->bbt_options & VAR_3) {




  VAR_13->bbt_options |= VAR_2;
  VAR_13->bbt_td = &VAR_11;
  VAR_13->bbt_md = &VAR_12;
 }


 VAR_15->ndcr = FUNC_0(VAR_14->writesize);
 if (VAR_13->options & VAR_4)
  VAR_15->ndcr |= VAR_9 | VAR_8;





 if (VAR_14->writesize <= 512) {
  VAR_15->addr_cyc = 1;
 } else {
  VAR_15->addr_cyc = 2;
  VAR_15->ndcr |= VAR_10;
 }
 if (VAR_13->options & VAR_7)
  VAR_15->addr_cyc += 3;
 else
  VAR_15->addr_cyc += 2;

 if (VAR_17) {
  VAR_13->ecc.size = VAR_17->ecc_step_size;
  VAR_13->ecc.strength = VAR_17->ecc_strength;
 }

 VAR_18 = FUNC_5(VAR_14, &VAR_13->ecc);
 if (VAR_18) {
  FUNC_1(VAR_16->dev, "ECC init failed: %d\n", VAR_18);
  return VAR_18;
 }

 if (VAR_13->ecc.mode == VAR_5) {






  VAR_13->options |= VAR_6;
 }

 if (VAR_17 || VAR_16->caps->legacy_of_bindings) {





  VAR_14->name = "pxa3xx_nand-0";
 } else if (!VAR_14->name) {
  VAR_14->name = FUNC_4(VAR_16->dev, VAR_1,
        "%s:nand.%d", FUNC_3(VAR_16->dev),
        VAR_15->sels[0].cs);
  if (!VAR_14->name) {
   FUNC_1(VAR_16->dev, "Failed to allocate mtd->name\n");
   return -VAR_0;
  }
 }

 return 0;
}
