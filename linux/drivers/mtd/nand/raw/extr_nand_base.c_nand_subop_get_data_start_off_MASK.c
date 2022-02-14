
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_subop {int * instrs; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct nand_subop const*,unsigned int) ;
 int FUNC_3 (struct nand_subop const*,unsigned int) ;

unsigned int FUNC_4(const struct nand_subop *VAR_0,
        unsigned int VAR_1)
{
 if (FUNC_0(!FUNC_3(VAR_0, VAR_1) ||
      !FUNC_1(&VAR_0->instrs[VAR_1])))
  return 0;

 return FUNC_2(VAR_0, VAR_1);
}
