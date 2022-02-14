
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_oob_ops {int mode; int datbuf; scalar_t__ retlen; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;





 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct nand_chip*,int ,struct mtd_oob_ops*) ;
 int FUNC_2 (struct nand_chip*,int ,struct mtd_oob_ops*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_0, loff_t VAR_1,
     struct mtd_oob_ops *VAR_2)
{
 struct nand_chip *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_2->retlen = 0;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;

 switch (VAR_2->mode) {
 case 129:
 case 130:
 case 128:
  break;

 default:
  goto out;
 }

 if (!VAR_2->datbuf)
  VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 else
  VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);

out:
 FUNC_4(VAR_3);
 return VAR_4;
}
