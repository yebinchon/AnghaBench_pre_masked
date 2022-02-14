
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_ecc_caps {int dummy; } ;
struct TYPE_2__ {int options; scalar_t__ strength; scalar_t__ size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nand_chip*,struct nand_ecc_caps const*,int) ;
 int FUNC_2 (struct nand_chip*,struct nand_ecc_caps const*,int) ;
 int FUNC_3 (struct nand_chip*,struct nand_ecc_caps const*,int) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

int FUNC_5(struct nand_chip *VAR_2,
    const struct nand_ecc_caps *VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_4(VAR_2);

 if (FUNC_0(VAR_4 < 0 || VAR_4 > VAR_5->oobsize))
  return -VAR_0;

 if (VAR_2->ecc.size && VAR_2->ecc.strength)
  return FUNC_1(VAR_2, VAR_3, VAR_4);

 if (VAR_2->ecc.options & VAR_1)
  return FUNC_3(VAR_2, VAR_3, VAR_4);

 if (!FUNC_2(VAR_2, VAR_3, VAR_4))
  return 0;

 return FUNC_3(VAR_2, VAR_3, VAR_4);
}
