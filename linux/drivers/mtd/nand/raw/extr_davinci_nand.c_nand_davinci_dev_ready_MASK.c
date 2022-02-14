
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct davinci_nand_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct davinci_nand_info*,int ) ;
 int FUNC_2 (struct nand_chip*) ;
 struct davinci_nand_info* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_1)
{
 struct davinci_nand_info *VAR_2 = FUNC_3(FUNC_2(VAR_1));

 return FUNC_1(VAR_2, VAR_0) & FUNC_0(0);
}
