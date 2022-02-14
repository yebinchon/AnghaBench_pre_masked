
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_ecc_ctrl {int steps; scalar_t__ mode; int bytes; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_2, int VAR_3,
         struct mtd_oob_region *VAR_4)
{
 struct nand_chip *VAR_5 = FUNC_0(VAR_2);
 struct nand_ecc_ctrl *VAR_6 = &VAR_5->ecc;

 if (VAR_3 > VAR_6->steps)
  return -VAR_0;






 if (!VAR_3 && VAR_6->mode == VAR_1) {
  VAR_4->offset = 2;
  VAR_4->length = 2;

  return 0;
 }

 VAR_4->offset = VAR_3 * (VAR_6->bytes + 4);

 if (VAR_3 < VAR_6->steps)
  VAR_4->length = 4;
 else
  VAR_4->offset = VAR_2->oobsize - VAR_4->offset;

 return 0;
}
