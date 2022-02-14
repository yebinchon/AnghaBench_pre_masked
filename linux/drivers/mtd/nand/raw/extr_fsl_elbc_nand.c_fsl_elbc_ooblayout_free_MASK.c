
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int steps; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct fsl_elbc_mtd {int fmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct fsl_elbc_mtd* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, int VAR_3,
       struct mtd_oob_region *VAR_4)
{
 struct nand_chip *VAR_5 = FUNC_0(VAR_2);
 struct fsl_elbc_mtd *VAR_6 = FUNC_1(VAR_5);

 if (VAR_3 > VAR_5->ecc.steps)
  return -VAR_0;

 if (!VAR_3) {
  VAR_4->offset = 0;
  if (VAR_2->writesize > 512)
   VAR_4->offset++;
  VAR_4->length = (VAR_6->fmr & VAR_1) ? 7 : 5;
 } else {
  VAR_4->offset = (16 * VAR_3) -
        ((VAR_6->fmr & VAR_1) ? 5 : 7);
  if (VAR_3 < VAR_5->ecc.steps)
   VAR_4->length = 13;
  else
   VAR_4->length = VAR_2->oobsize - VAR_4->offset;
 }

 return 0;
}
