
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_info {scalar_t__ regs; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (scalar_t__) ;
 struct s3c2410_nand_info* FUNC_2 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_0(VAR_2);
 struct s3c2410_nand_info *VAR_4 = FUNC_2(VAR_3);
 return FUNC_1(VAR_4->regs + VAR_0) & VAR_1;
}
