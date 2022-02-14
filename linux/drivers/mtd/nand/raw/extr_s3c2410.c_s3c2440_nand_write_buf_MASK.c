
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct s3c2410_nand_info {scalar_t__ regs; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 struct s3c2410_nand_info* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (int const,scalar_t__) ;
 int FUNC_3 (scalar_t__,int const*,int) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_1, const u_char *VAR_2,
       int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_0(VAR_1);
 struct s3c2410_nand_info *VAR_5 = FUNC_1(VAR_4);

 FUNC_3(VAR_5->regs + VAR_0, VAR_2, VAR_3 >> 2);


 if (VAR_3 & 3) {
  VAR_2 += VAR_3 & ~3;

  for (; VAR_3 & 3; VAR_3--, VAR_2++)
   FUNC_2(*VAR_2, VAR_5->regs + VAR_0);
 }
}
