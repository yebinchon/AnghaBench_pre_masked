
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_oob_ops {scalar_t__ mode; int datbuf; scalar_t__ retlen; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct nand_chip*,int ,struct mtd_oob_ops*) ;
 int FUNC_2 (struct nand_chip*,int ,struct mtd_oob_ops*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_4, loff_t VAR_5,
    struct mtd_oob_ops *VAR_6)
{
 struct nand_chip *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 VAR_6->retlen = 0;

 if (VAR_6->mode != VAR_2 &&
     VAR_6->mode != VAR_1 &&
     VAR_6->mode != VAR_3)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  return VAR_8;

 if (!VAR_6->datbuf)
  VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_6);
 else
  VAR_8 = FUNC_2(VAR_7, VAR_5, VAR_6);

 FUNC_4(VAR_7);
 return VAR_8;
}
