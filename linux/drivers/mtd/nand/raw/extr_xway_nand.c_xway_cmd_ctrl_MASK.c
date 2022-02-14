
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct mtd_info*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_7, int VAR_8, unsigned int VAR_9)
{
 struct mtd_info *VAR_10 = FUNC_1(VAR_7);

 if (VAR_8 == VAR_3)
  return;

 if (VAR_9 & VAR_2)
  FUNC_2(VAR_10, VAR_6, VAR_8);
 else if (VAR_9 & VAR_1)
  FUNC_2(VAR_10, VAR_5, VAR_8);

 while ((FUNC_0(VAR_0) & VAR_4) == 0)
  ;
}
