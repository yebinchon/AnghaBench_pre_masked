
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int steps; int bytes; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int dummy; } ;
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

 if (VAR_3 >= VAR_5->ecc.steps)
  return -VAR_0;

 VAR_4->offset = (16 * VAR_3) + 6;
 if (VAR_6->fmr & VAR_1)
  VAR_4->offset += 2;

 VAR_4->length = VAR_5->ecc.bytes;

 return 0;
}
