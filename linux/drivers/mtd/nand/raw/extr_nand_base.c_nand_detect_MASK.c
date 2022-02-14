
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct nand_memory_organization {int planes_per_lun; int luns_per_target; int pagesize; int pages_per_eraseblock; int eraseblocks_per_lun; } ;
struct nand_manufacturer {int dummy; } ;
struct nand_flash_dev {scalar_t__ dev_id; int options; scalar_t__ chipsize; int pagesize; int * name; } ;
struct TYPE_6__ {scalar_t__ model; } ;
struct TYPE_5__ {struct nand_manufacturer const* desc; } ;
struct TYPE_4__ {scalar_t__* data; int len; } ;
struct nand_chip {int options; int page_shift; int pagemask; int chip_shift; int badblockbits; TYPE_3__ parameters; void* phys_erase_shift; void* bbt_erase_shift; int base; TYPE_2__ manufacturer; TYPE_1__ id; } ;
struct mtd_info {unsigned int writesize; unsigned int erasesize; int oobsize; scalar_t__ name; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (struct nand_chip*,struct nand_flash_dev*) ;
 scalar_t__ FUNC_5 (struct nand_flash_dev*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct nand_chip*,struct nand_flash_dev*) ;
 struct nand_flash_dev* VAR_7 ;
 struct nand_manufacturer* FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__*,int ) ;
 scalar_t__ FUNC_12 (struct nand_chip*) ;
 int FUNC_13 (struct nand_chip*) ;
 int FUNC_14 (struct nand_chip*) ;
 int FUNC_15 (struct nand_chip*) ;
 int FUNC_16 (struct nand_manufacturer const*) ;
 int FUNC_17 (struct nand_chip*) ;
 int FUNC_18 (struct nand_chip*,int ,scalar_t__*,int) ;
 int FUNC_19 (struct nand_chip*,int ) ;
 int FUNC_20 (struct nand_chip*,int ) ;
 int FUNC_21 (struct nand_chip*) ;
 struct mtd_info* FUNC_22 (struct nand_chip*) ;
 struct nand_memory_organization* FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (char*,int,char*,...) ;
 int FUNC_26 (char*,int,int) ;

__attribute__((used)) static int FUNC_27(struct nand_chip *VAR_8, struct nand_flash_dev *VAR_9)
{
 const struct nand_manufacturer *VAR_10;
 struct mtd_info *VAR_11 = FUNC_22(VAR_8);
 struct nand_memory_organization *VAR_12;
 int VAR_13, VAR_14;
 u8 *VAR_15 = VAR_8->id.data;
 u8 VAR_16, VAR_17;
 u64 VAR_18;





 VAR_12 = FUNC_23(&VAR_8->base);
 VAR_12->planes_per_lun = 1;
 VAR_12->luns_per_target = 1;





 VAR_14 = FUNC_19(VAR_8, 0);
 if (VAR_14)
  return VAR_14;


 FUNC_20(VAR_8, 0);


 VAR_14 = FUNC_18(VAR_8, 0, VAR_15, 2);
 if (VAR_14)
  return VAR_14;


 VAR_16 = VAR_15[0];
 VAR_17 = VAR_15[1];
 VAR_14 = FUNC_18(VAR_8, 0, VAR_15, sizeof(VAR_8->id.data));
 if (VAR_14)
  return VAR_14;

 if (VAR_15[0] != VAR_16 || VAR_15[1] != VAR_17) {
  FUNC_25("second ID read did not match %02x,%02x against %02x,%02x\n",
   VAR_16, VAR_17, VAR_15[0], VAR_15[1]);
  return -VAR_1;
 }

 VAR_8->id.len = FUNC_11(VAR_15, FUNC_0(VAR_8->id.data));


 VAR_10 = FUNC_10(VAR_16);
 VAR_8->manufacturer.desc = VAR_10;

 if (!VAR_9)
  VAR_9 = VAR_7;
 VAR_13 = VAR_8->options & VAR_4;





 VAR_8->options &= ~VAR_4;

 for (; VAR_9->name != ((void*)0); VAR_9++) {
  if (FUNC_5(VAR_9)) {
   if (FUNC_4(VAR_8, VAR_9))
    goto ident_done;
  } else if (VAR_17 == VAR_9->dev_id) {
   break;
  }
 }

 if (!VAR_9->name || !VAR_9->pagesize) {

  VAR_14 = FUNC_17(VAR_8);
  if (VAR_14 < 0)
   return VAR_14;
  else if (VAR_14)
   goto ident_done;


  VAR_14 = FUNC_13(VAR_8);
  if (VAR_14 < 0)
   return VAR_14;
  else if (VAR_14)
   goto ident_done;
 }

 if (!VAR_9->name)
  return -VAR_1;

 VAR_8->parameters.model = FUNC_7(VAR_9->name, VAR_3);
 if (!VAR_8->parameters.model)
  return -VAR_2;

 if (!VAR_9->pagesize)
  FUNC_15(VAR_8);
 else
  FUNC_9(VAR_8, VAR_9);


 VAR_8->options |= VAR_9->options;

 VAR_12->eraseblocks_per_lun =
   FUNC_1((u64)VAR_9->chipsize << 20,
        VAR_12->pagesize *
        VAR_12->pages_per_eraseblock);

ident_done:
 if (!VAR_11->name)
  VAR_11->name = VAR_8->parameters.model;

 if (VAR_8->options & VAR_5) {
  FUNC_2(VAR_13 & VAR_4);
  FUNC_21(VAR_8);
 } else if (VAR_13 != (VAR_8->options & VAR_4)) {




  FUNC_25("device found, Manufacturer ID: 0x%02x, Chip ID: 0x%02x\n",
   VAR_16, VAR_17);
  FUNC_25("%s %s\n", FUNC_16(VAR_10),
   VAR_11->name);
  FUNC_26("bus width %d instead of %d bits\n", VAR_13 ? 16 : 8,
   (VAR_8->options & VAR_4) ? 16 : 8);
  VAR_14 = -VAR_0;

  goto free_detect_allocation;
 }

 FUNC_8(VAR_8);


 VAR_8->page_shift = FUNC_3(VAR_11->writesize) - 1;

 VAR_18 = FUNC_24(&VAR_8->base);
 VAR_8->pagemask = (VAR_18 >> VAR_8->page_shift) - 1;

 VAR_8->bbt_erase_shift = VAR_8->phys_erase_shift =
  FUNC_3(VAR_11->erasesize) - 1;
 if (VAR_18 & 0xffffffff)
  VAR_8->chip_shift = FUNC_3((unsigned)VAR_18) - 1;
 else {
  VAR_8->chip_shift = FUNC_3((unsigned)(VAR_18 >> 32));
  VAR_8->chip_shift += 32 - 1;
 }

 if (VAR_8->chip_shift - VAR_8->page_shift > 16)
  VAR_8->options |= VAR_6;

 VAR_8->badblockbits = 8;

 FUNC_14(VAR_8);

 FUNC_25("device found, Manufacturer ID: 0x%02x, Chip ID: 0x%02x\n",
  VAR_16, VAR_17);
 FUNC_25("%s %s\n", FUNC_16(VAR_10),
  VAR_8->parameters.model);
 FUNC_25("%d MiB, %s, erase size: %d KiB, page size: %d, OOB size: %d\n",
  (int)(VAR_18 >> 20), FUNC_12(VAR_8) ? "SLC" : "MLC",
  VAR_11->erasesize >> 10, VAR_11->writesize, VAR_11->oobsize);
 return 0;

free_detect_allocation:
 FUNC_6(VAR_8->parameters.model);

 return VAR_14;
}
