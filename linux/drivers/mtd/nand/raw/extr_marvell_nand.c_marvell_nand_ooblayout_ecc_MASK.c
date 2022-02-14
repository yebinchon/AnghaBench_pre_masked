
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct mtd_oob_region {scalar_t__ length; scalar_t__ offset; } ;
struct mtd_info {scalar_t__ oobsize; } ;
struct marvell_hw_ecc_layout {int full_chunk_cnt; int ecc_bytes; scalar_t__ last_ecc_bytes; } ;
struct TYPE_2__ {struct marvell_hw_ecc_layout* layout; } ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 TYPE_1__* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, int VAR_2,
          struct mtd_oob_region *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);
 const struct marvell_hw_ecc_layout *VAR_5 = FUNC_1(VAR_4)->layout;

 if (VAR_2)
  return -VAR_0;

 VAR_3->length = (VAR_5->full_chunk_cnt * VAR_5->ecc_bytes) +
       VAR_5->last_ecc_bytes;
 VAR_3->offset = VAR_1->oobsize - VAR_3->length;

 return 0;
}
