
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_ecc_ctrl {int steps; int bytes; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct mtd_oob_region {int length; scalar_t__ offset; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_3, int VAR_4, struct mtd_oob_region *VAR_5)
{
 struct nand_chip *VAR_6 = FUNC_0(VAR_3);
 struct nand_ecc_ctrl *VAR_7 = &VAR_6->ecc;

 if (VAR_4 >= VAR_7->steps)
  return -VAR_1;

 VAR_5->offset = VAR_0 + VAR_2 + VAR_7->bytes * VAR_4;
 VAR_5->length = VAR_7->bytes;

 return 0;
}
