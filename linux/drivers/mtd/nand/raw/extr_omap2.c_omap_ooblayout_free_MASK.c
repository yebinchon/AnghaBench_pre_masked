
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ total; } ;
struct nand_chip {int options; TYPE_1__ ecc; } ;
struct omap_nand_info {scalar_t__ ecc_opt; struct nand_chip nand; } ;
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct omap_nand_info* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_4, int VAR_5,
          struct mtd_oob_region *VAR_6)
{
 struct omap_nand_info *VAR_7 = FUNC_0(VAR_4);
 struct nand_chip *VAR_8 = &VAR_7->nand;
 int VAR_9 = VAR_0;

 if (VAR_7->ecc_opt == VAR_3 &&
     !(VAR_8->options & VAR_2))
  VAR_9 = 1;

 if (VAR_5)
  return -VAR_1;

 VAR_9 += VAR_8->ecc.total;
 if (VAR_9 >= VAR_4->oobsize)
  return -VAR_1;

 VAR_6->offset = VAR_9;
 VAR_6->length = VAR_4->oobsize - VAR_9;

 return 0;
}
