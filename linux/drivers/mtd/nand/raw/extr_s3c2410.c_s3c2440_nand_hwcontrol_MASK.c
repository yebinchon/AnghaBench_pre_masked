
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_info {scalar_t__ regs; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 struct s3c2410_nand_info* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_4, int VAR_5,
       unsigned int VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_0(VAR_4);
 struct s3c2410_nand_info *VAR_8 = FUNC_1(VAR_7);

 if (VAR_5 == VAR_1)
  return;

 if (VAR_6 & VAR_0)
  FUNC_2(VAR_5, VAR_8->regs + VAR_3);
 else
  FUNC_2(VAR_5, VAR_8->regs + VAR_2);
}
