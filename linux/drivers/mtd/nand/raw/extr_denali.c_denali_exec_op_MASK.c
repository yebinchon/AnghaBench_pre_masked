
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_operation {int ninstrs; int * instrs; int cs; } ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (struct nand_chip*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nand_chip*,int ) ;
 int FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0,
     const struct nand_operation *VAR_1, bool VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2)
  return 0;

 FUNC_2(VAR_0, VAR_1->cs);





 FUNC_1(FUNC_3(VAR_0));

 for (VAR_3 = 0; VAR_3 < VAR_1->ninstrs; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, &VAR_1->instrs[VAR_3]);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
