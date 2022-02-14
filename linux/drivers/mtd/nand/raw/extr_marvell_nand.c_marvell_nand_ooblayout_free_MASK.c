
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {scalar_t__ writesize; } ;
struct marvell_hw_ecc_layout {scalar_t__ data_bytes; int full_chunk_cnt; int spare_bytes; int last_spare_bytes; } ;
struct TYPE_2__ {struct marvell_hw_ecc_layout* layout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 TYPE_1__* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_3, int VAR_4,
           struct mtd_oob_region *VAR_5)
{
 struct nand_chip *VAR_6 = FUNC_0(VAR_3);
 const struct marvell_hw_ecc_layout *VAR_7 = FUNC_1(VAR_6)->layout;

 if (VAR_4)
  return -VAR_0;





 if (VAR_3->writesize == VAR_2 && VAR_7->data_bytes == VAR_1)
  VAR_5->offset = 6;
 else
  VAR_5->offset = 2;

 VAR_5->length = (VAR_7->full_chunk_cnt * VAR_7->spare_bytes) +
       VAR_7->last_spare_bytes - VAR_5->offset;

 return 0;
}
