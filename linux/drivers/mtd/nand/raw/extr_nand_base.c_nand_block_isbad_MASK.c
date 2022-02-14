
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int chip_shift; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct nand_chip*,int,int ) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_0, loff_t VAR_1)
{
 struct nand_chip *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = (int)(VAR_1 >> VAR_2->chip_shift);
 int VAR_4;


 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_5(VAR_2, VAR_3);

 VAR_4 = FUNC_1(VAR_2, VAR_1, 0);

 FUNC_2(VAR_2);
 FUNC_4(VAR_2);

 return VAR_4;
}
