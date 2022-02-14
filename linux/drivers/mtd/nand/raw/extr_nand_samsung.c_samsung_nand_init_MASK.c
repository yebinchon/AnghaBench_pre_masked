
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int options; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nand_chip*) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->writesize > 512)
  VAR_4->options |= VAR_3;

 if (!FUNC_0(VAR_4))
  VAR_4->options |= VAR_1;
 else
  VAR_4->options |= VAR_0 | VAR_2;

 return 0;
}
