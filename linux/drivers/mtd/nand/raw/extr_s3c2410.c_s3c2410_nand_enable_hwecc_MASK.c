
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_info {scalar_t__ regs; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct nand_chip*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 struct s3c2410_nand_info* FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_2, int VAR_3)
{
 struct s3c2410_nand_info *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_2(FUNC_0(VAR_2));
 VAR_5 = FUNC_1(VAR_4->regs + VAR_0);
 VAR_5 |= VAR_1;
 FUNC_3(VAR_5, VAR_4->regs + VAR_0);
}
