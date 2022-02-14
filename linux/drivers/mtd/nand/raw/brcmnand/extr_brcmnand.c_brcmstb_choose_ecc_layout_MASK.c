
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_ecc_ctrl {int bytes; } ;
struct mtd_info {int dummy; } ;
struct TYPE_4__ {struct nand_ecc_ctrl ecc; } ;
struct brcmnand_cfg {unsigned int ecc_level; int spare_area_size; int sector_size_1k; int page_size; } ;
struct brcmnand_host {TYPE_1__* pdev; int ctrl; TYPE_2__ chip; struct brcmnand_cfg hwcfg; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int,int) ;
 scalar_t__ FUNC_2 (int ,struct brcmnand_cfg*) ;
 int FUNC_3 (struct mtd_info*,int *) ;
 struct mtd_info* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct brcmnand_host *VAR_4)
{
 struct brcmnand_cfg *VAR_5 = &VAR_4->hwcfg;
 struct mtd_info *VAR_6 = FUNC_4(&VAR_4->chip);
 struct nand_ecc_ctrl *VAR_7 = &VAR_4->chip.ecc;
 unsigned int VAR_8 = VAR_5->ecc_level;
 int VAR_9 = VAR_5->spare_area_size << VAR_5->sector_size_1k;
 int VAR_10 = VAR_5->page_size / (512 << VAR_5->sector_size_1k);

 if (VAR_5->sector_size_1k)
  VAR_8 <<= 1;

 if (FUNC_2(VAR_4->ctrl, VAR_5)) {
  VAR_7->bytes = 3 * VAR_10;
  FUNC_3(VAR_6, &VAR_3);
  return 0;
 }







 VAR_7->bytes = FUNC_0(VAR_8 * 14, 8);
 if (VAR_5->page_size == 512)
  FUNC_3(VAR_6, &VAR_2);
 else
  FUNC_3(VAR_6, &VAR_1);

 if (VAR_7->bytes >= VAR_9) {
  FUNC_1(&VAR_4->pdev->dev,
   "error: ECC too large for OOB (ECC bytes %d, spare sector %d)\n",
   VAR_7->bytes, VAR_9);
  return -VAR_0;
 }

 return 0;
}
