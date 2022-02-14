
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_operation {int cs; } ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (struct nand_chip*,int *,struct nand_operation const*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_1,
         const struct nand_operation *VAR_2,
         bool VAR_3)
{
 FUNC_1(VAR_1, VAR_2->cs);
 return FUNC_0(VAR_1, &VAR_0, VAR_2,
          VAR_3);
}
